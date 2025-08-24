module shader_loader #(
    parameter int INSTR_WIDTH = 32,
    parameter int INSTR_DEPTH = 256 // shader can have up to 256 instructions
)(
    input  logic clk,
    input  logic rst_n,

    // write port (from cpu/host)
    input  logic                  i_host_we,
    input  logic [$clog2(INSTR_DEPTH)-1:0] i_host_addr,
    input  logic [INSTR_WIDTH-1:0]  i_host_wdata,

    // read port (for gpu's instruction fetch stage)
    input  logic [$clog2(INSTR_DEPTH)-1:0] i_gpu_addr,
    output logic [INSTR_WIDTH-1:0]  o_gpu_instr
);

    // this internal memory holds the shader program
    // this will become bram on the fpga
    logic [INSTR_WIDTH-1:0] instruction_mem [INSTR_DEPTH-1:0];

    // cpu can write to the memory
    always_ff @(posedge clk) begin
        if (i_host_we) begin
            instruction_mem[i_host_addr] <= i_host_wdata;
        end
    end

    // gpu reads from the memory combinationally
    assign o_gpu_instr = instruction_mem[i_gpu_addr];

endmodule