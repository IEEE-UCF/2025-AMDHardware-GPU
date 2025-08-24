// gpu_top.sv
// top-level module connecting all gpu submodules.

module gpu_top #(
    parameter int DATA_WIDTH = 32,
    parameter int VEC_SIZE = 4,
    parameter int CORD_WIDTH = 10,
    parameter int FB_WIDTH = 640,
    parameter int FB_HEIGHT = 480,
    parameter int ADDR_WIDTH = 32,
    parameter int INSTR_DEPTH = 256,
    parameter int FIFO_DEPTH = 64,
    parameter int NUM_MASTERS = 3, // 0: vf, 1: core, 2: fb
    parameter int NUM_SLAVES = 1  // 0: main memory
)(
    input logic clk,
    input logic rst_n,

    // cpu bus for control and shader loading
    input logic i_bus_we,
    input logic [ADDR_WIDTH-1:0] i_bus_addr,
    input logic [DATA_WIDTH-1:0] i_bus_wdata,

    // main memory (dram) interface
    output logic o_dram_we,
    output logic [ADDR_WIDTH-1:0] o_dram_addr,
    output logic [DATA_WIDTH-1:0] o_dram_wdata,
    input logic [DATA_WIDTH-1:0] i_dram_rdata
);

    logic glbl_rst_n;
    
    // --- interconnect signals ---
    logic [NUM_MASTERS-1:0] master_req;
    logic [NUM_MASTERS-1:0][ADDR_WIDTH-1:0] master_addr;
    logic [NUM_MASTERS-1:0][DATA_WIDTH-1:0] master_wdata;
    logic [NUM_MASTERS-1:0][DATA_WIDTH-1:0] master_rdata;

    logic [NUM_SLAVES-1:0] slave_req;
    logic [NUM_SLAVES-1:0][ADDR_WIDTH-1:0] slave_addr;
    logic [NUM_SLAVES-1:0][DATA_WIDTH-1:0] slave_wdata;
    logic [NUM_SLAVES-1:0][DATA_WIDTH-1:0] slave_rdata;

    // --- pipeline signals ---
    logic start_pipe;
    logic [DATA_WIDTH*8-1:0] vertex_data;
    logic signed [CORD_WIDTH-1:0] v0x, v0y, v1x, v1y, v2x, v2y;
    logic [CORD_WIDTH*2-1:0] frag_coords;
    logic rast_frag_valid;
    logic fifo_wr, fifo_rd, fifo_full, fifo_empty;
    logic [CORD_WIDTH*2-1:0] fifo_wdata, fifo_rdata;
    logic signed [CORD_WIDTH-1:0] fs_in_x, fs_in_y;
    logic fs_in_valid;
    logic pixel_we;
    logic signed [CORD_WIDTH-1:0] pixel_x, pixel_y;
    logic [DATA_WIDTH-1:0] pixel_color;

    // --- core modules ---

    reset_sync reset_sync_inst(
        .clk(clk),
        .arst_n(rst_n),
        .srst_n(glbl_rst_n)
    );

    controller ctrl_inst(
        .clk(clk),
        .rst_n(glbl_rst_n),
        .o_start_pipeline(start_pipe)
    );
    
    shader_loader shader_loader_inst(
        .clk(clk),
        .rst_n(glbl_rst_n),
        .i_host_we(i_bus_we),
        .i_host_addr(i_bus_addr[$clog2(INSTR_DEPTH)-1:0]),
        .i_host_wdata(i_bus_wdata)
    );

    shader_core core0(
        .clk(clk),
        .rst_n(glbl_rst_n),
        .o_mem_req(master_req[1]),
        .o_mem_addr(master_addr[1])
    );

    interconnect #(
        .NUM_MASTERS(NUM_MASTERS),
        .NUM_SLAVES(NUM_SLAVES)
    ) interconnect_inst(
        .clk(clk),
        .rst_n(glbl_rst_n),
        .i_master_req(master_req),
        .i_master_addr(master_addr),
        .i_master_wdata(master_wdata),
        .o_master_rdata(master_rdata),
        .o_slave_req(slave_req),
        .o_slave_addr(slave_addr),
        .o_slave_wdata(slave_wdata),
        .i_slave_rdata(slave_rdata)
    );
    
    assign o_dram_we = slave_req[0];
    assign o_dram_addr = slave_addr[0];
    assign o_dram_wdata = slave_wdata[0];
    assign slave_rdata[0] = i_dram_rdata;
    
    // --- graphics pipeline stages ---

    vertex_fetch vf_inst(
        .clk(clk),
        .rst_n(glbl_rst_n),
        .i_start_fetch(start_pipe),
        .o_mem_req(master_req[0]),
        .o_mem_addr(master_addr[0]),
        .i_mem_rdata(master_rdata[0]),
        .o_vertex_data(vertex_data)
    );

    assign {v0x, v0y, v1x, v1y, v2x, v2y} = vertex_data[CORD_WIDTH*6-1:0];

    rasterizer rast_inst(
        .clk(clk),
        .rst_n(glbl_rst_n),
        .i_start(start_pipe),
        .i_v0_x(v0x), .i_v0_y(v0y),
        .i_v1_x(v1x), .i_v1_y(v1y),
        .i_v2_x(v2x), .i_v2_y(v2y),
        .o_fragment_valid(rast_frag_valid),
        .o_fragment_x(frag_coords[CORD_WIDTH*2-1:CORD_WIDTH]),
        .o_fragment_y(frag_coords[CORD_WIDTH-1:0])
    );

    assign fifo_wr = rast_frag_valid;
    assign fifo_wdata = frag_coords;

    fifo #(
        .DATA_WIDTH(CORD_WIDTH*2),
        .DEPTH(FIFO_DEPTH)
    ) frag_fifo(
        .clk(clk), .rst_n(glbl_rst_n),
        .i_wr_en(fifo_wr),   .i_w_data(fifo_wdata),
        .i_rd_en(fifo_rd),   .o_r_data(fifo_rdata),
        .o_full(fifo_full), .o_empty(fifo_empty)
    );

    assign fs_in_valid = !fifo_empty;
    assign fifo_rd = fs_in_valid;
    assign {fs_in_x, fs_in_y} = fifo_rdata;

    fragment_shader #(
        .CORD_WIDTH(CORD_WIDTH)
    ) fs_inst(
        .clk(clk), .rst_n(glbl_rst_n),
        .i_frag_valid(fs_in_valid),
        .i_frag_x(fs_in_x), .i_frag_y(fs_in_y),
        .o_pixel_valid(pixel_we),
        .o_pixel_x(pixel_x), .o_pixel_y(pixel_y),
        .o_pixel_color(pixel_color)
    );

    framebuffer #(
        .SCREEN_WIDTH(FB_WIDTH), .SCREEN_HEIGHT(FB_HEIGHT)
    ) fb_inst(
        .clk(clk), .rst_n(glbl_rst_n),
        .i_pixel_we(pixel_we),
        .i_pixel_x(pixel_x),
        .i_pixel_y(pixel_y),
        .i_pixel_color(pixel_color),
        .o_mem_req(master_req[2]),
        .o_mem_addr(master_addr[2]),
        .o_mem_wdata(master_wdata[2])
    );

endmodule