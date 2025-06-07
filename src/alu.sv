`timescale 1ns / 1ps

module alu #(
    parameter LANE_WIDTH = 32,
    parameter NUM_LANES  = 4
) (
    input  logic clk,
    input  logic rst,

    input  logic [NUM_LANES*LANE_WIDTH-1:0] vec_a,
    input  logic [NUM_LANES*LANE_WIDTH-1:0] vec_b,
    input  logic [4:0] op_code,

    output logic [NUM_LANES*LANE_WIDTH-1:0] result_vec,
    output logic [LANE_WIDTH-1:0]             result_scalar
);

    // --- op codes ---
    localparam V_ADD   = 5'b00001; // vector Add
    localparam V_SUB   = 5'b00010; // vector Subtract
    localparam V_MUL   = 5'b00011; // vector Multiply (element-wise)
    localparam V_AND   = 5'b00100; // vector AND (element-wise)
    localparam V_OR    = 5'b00101; // vector OR (element-wise)
    localparam DOT4    = 5'b10001; // 4-component dot product
    localparam RSQRT   = 5'b10010; // fast inverse square Root (on vec_a)

    // pipeline stage 0 --> 1 registers (decode) ---
    logic [NUM_LANES*LANE_WIDTH-1:0] vec_a_s1, vec_b_s1;
    logic [4:0] op_code_s1;

    // pipeline stage 1 --> 2 registers (execute 1 / multiply)
    logic [LANE_WIDTH-1:0] mul_results_s2 [NUM_LANES];
    logic [LANE_WIDTH-1:0] vector_results_s2 [NUM_LANES];
    logic [4:0] op_code_s2;

    // pipeline stage 2 --> 3 registers (execute 2 / add) ---
    logic [LANE_WIDTH-1:0] dot_partial_sum1, dot_partial_sum2;
    logic [NUM_LANES*LANE_WIDTH-1:0] vector_result_s3;
    logic [4:0] op_code_s3;

    // pipeline stage 3 --> 4 registers (writeback)
    logic [LANE_WIDTH-1:0] scalar_result_s4;
    logic [NUM_LANES*LANE_WIDTH-1:0] vector_result_s4;
    logic [4:0] op_code_s4;

    // RSQRT Block RAM Lookup Table
    // 256 entries for an 8-bit address (top bits of the FP number)
    reg [LANE_WIDTH-1:0] rsqrt_lut[255:0];
    
    initial begin
        // this is a standard synthesis directive to load the BRAM
        // from a memory file at initialization.
        $readmemh("rsqrt_lut.mem", rsqrt_lut);
    end

    // stage 1: decode / input register ---
    // register all inputs to isolate the ALU from external paths.
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            op_code_s1 <= '0;
            vec_a_s1   <= '0;
            vec_b_s1   <= '0;
        end else begin
            op_code_s1 <= op_code;
            vec_a_s1   <= vec_a;
            vec_b_s1   <= vec_b;
        end
    end

    // stage 2: execute 1 / bram read / multiply
    // this stage performs all parallel vector operations and the first step of DOT4.
    always_ff @(posedge clk) begin
        op_code_s2 <= op_code_s1;
        for (int i = 0; i < NUM_LANES; i = i + 1) begin
            logic [LANE_WIDTH-1:0] a_lane = vec_a_s1[(i+1)*LANE_WIDTH-1 -: LANE_WIDTH];
            logic [LANE_WIDTH-1:0] b_lane = vec_b_s1[(i+1)*LANE_WIDTH-1 -: LANE_WIDTH];

            // parallel Multipliers for DOT4 and V_MUL (maps to 4 DSP Slices)
            mul_results_s2[i] <= a_lane * b_lane;

            // standard vector operations...
            case (op_code_s1)
                V_ADD:   vector_results_s2[i] <= a_lane + b_lane;
                V_SUB:   vector_results_s2[i] <= a_lane - b_lane;
                V_MUL:   vector_results_s2[i] <= a_lane * b_lane;
                V_AND:   vector_results_s2[i] <= a_lane & b_lane;
                V_OR:    vector_results_s2[i] <= a_lane | b_lane;
                default: vector_results_s2[i] <= '0;
            endcase
        end
        // RSQRT: Read from the Block RAM LUT
        if (op_code_s1 == RSQRT) begin
            // Use top 8 bits of floating point exponent/mantissa as LUT address
            vector_results_s2[0] <= rsqrt_lut[vec_a_s1[30:23]];
        end
    end

    // stage 3: execute 2 / add ---
    // this stage performs the second step of the DOT4 operation.
    always_ff @(posedge clk) begin
        op_code_s3 <= op_code_s2;
        vector_result_s3 <= {vector_results_s2[3], vector_results_s2[2], vector_results_s2[1], vector_results_s2[0]};

        if (op_code_s2 == DOT4) begin
            // Adder tree for dot product
            dot_partial_sum1 <= mul_results_s2[0] + mul_results_s2[1];
            dot_partial_sum2 <= mul_results_s2[2] + mul_results_s2[3];
        end else begin
            dot_partial_sum1 <= '0;
            dot_partial_sum2 <= '0;
        end
    end

    // stage 4: callback
    always_ff @(posedge clk) begin
        op_code_s4 <= op_code_s3;
        vector_result_s4 <= vector_result_s3;

        if (op_code_s3 == DOT4) begin
            scalar_result_s4 <= dot_partial_sum1 + dot_partial_sum2;
        end else begin
            scalar_result_s4 <= '0;
        end
    end

    assign result_vec    = vector_result_s4;
    assign result_scalar = scalar_result_s4;

endmodule