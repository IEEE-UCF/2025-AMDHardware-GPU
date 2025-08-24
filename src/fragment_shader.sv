module fragment_shader #(
    parameter int DATA_WIDTH = 32,
    parameter int VEC_SIZE   = 4,
    parameter int CORD_WIDTH = 10
)(
    input logic clk,
    input logic rst_n,

    input logic i_frag_valid,
    input logic signed [CORD_WIDTH-1:0]           i_frag_x,
    input logic signed [CORD_WIDTH-1:0]           i_frag_y,
    input logic [VEC_SIZE-1:0][DATA_WIDTH-1:0]    i_frag_color,
    input logic [1:0][DATA_WIDTH-1:0]             i_frag_tex_coord,

    input logic [VEC_SIZE-1:0][DATA_WIDTH-1:0]    i_texel_color,

    output logic o_pixel_valid,
    output logic signed [CORD_WIDTH-1:0]           o_pixel_x,
    output logic signed [CORD_WIDTH-1:0]           o_pixel_y,
    output logic [VEC_SIZE-1:0][DATA_WIDTH-1:0]    o_pixel_color
);

    logic [VEC_SIZE-1:0][DATA_WIDTH-1:0] modulated_color;

    // im using the alu to multiply the colors (opcode 5'b00011)
    alu #(
        .DATA_WIDTH(DATA_WIDTH),
        .VECTOR_SIZE(VEC_SIZE)
    ) alu_inst (
        .i_operand_a(i_frag_color),
        .i_operand_b(i_texel_color),
        .i_opcode (5'b00011),
        .o_result (modulated_color)
    );

    // register the output to add a pipeline stage
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            o_pixel_valid <= 1'b0;
            o_pixel_x     <= '0;
            o_pixel_y     <= '0;
            o_pixel_color <= '0;
        end else begin
            o_pixel_valid <= i_frag_valid;
            if (i_frag_valid) begin
                o_pixel_x     <= i_frag_x;
                o_pixel_y     <= i_frag_y;
                o_pixel_color <= modulated_color;
            end
        end
    end

endmodule