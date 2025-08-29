module gpu_top #(
  parameter int DATA_WIDTH   = 32,
  parameter int VEC_SIZE     = 4,
  parameter int CORD_WIDTH   = 10,
  parameter int FB_WIDTH     = 640,
  parameter int FB_HEIGHT    = 480,
  parameter int ADDR_WIDTH   = 32,
  parameter int INSTR_DEPTH  = 256,
  parameter int FIFO_DEPTH   = 64,
  parameter int NUM_MASTERS  = 3, // 0: vf, 1: core, 2: fb
  parameter int NUM_SLAVES   = 1  // 0: main memory
)(
  input  logic                     clk,
  input  logic                     rst_n,

  // cpu bus for control and shader loading
  input  logic                     i_bus_we,
  input  logic [ADDR_WIDTH-1:0]    i_bus_addr,
  input  logic [DATA_WIDTH-1:0]    i_bus_wdata,
  output logic [DATA_WIDTH-1:0]    o_bus_rdata,

  // main memory (dram) interface
  output logic                     o_dram_we,
  output logic [ADDR_WIDTH-1:0]    o_dram_addr,
  output logic [DATA_WIDTH-1:0]    o_dram_wdata,
  input  logic [DATA_WIDTH-1:0]    i_dram_rdata
);

  localparam int VERTEX_POS_BITS    = CORD_WIDTH * 2 * 3; // 3 vertices, each with x,y
  localparam int VERTEX_COLOR_BITS  = DATA_WIDTH * 3;     // 3 vertices, each with one color channel
  localparam int VERTEX_UV_BITS     = DATA_WIDTH * 2 * 3; // 3 vertices, each with u,v
  localparam int VERTEX_TOTAL_BITS  = VERTEX_POS_BITS + VERTEX_COLOR_BITS + VERTEX_UV_BITS;

  localparam int FIFO_DATA_WIDTH    = (2 * CORD_WIDTH) + (3 * (2 * CORD_WIDTH + 1));

  logic                                 glbl_rst_n;

  logic [NUM_MASTERS-1:0]               master_req;
  logic [NUM_MASTERS-1:0][ADDR_WIDTH-1:0] master_addr;
  logic [NUM_MASTERS-1:0][DATA_WIDTH-1:0] master_wdata;
  logic [NUM_MASTERS-1:0][DATA_WIDTH-1:0] master_rdata;

  logic [NUM_SLAVES-1:0]                slave_req;
  logic [NUM_SLAVES-1:0][ADDR_WIDTH-1:0] slave_addr;
  logic [NUM_SLAVES-1:0][DATA_WIDTH-1:0] slave_wdata;
  logic [NUM_SLAVES-1:0][DATA_WIDTH-1:0] slave_rdata;

  logic                                 start_pipe;
  logic [VERTEX_TOTAL_BITS-1:0]         vertex_data;

  logic signed [CORD_WIDTH-1:0]         v0x, v0y, v1x, v1y, v2x, v2y;
  logic [DATA_WIDTH-1:0]                v0_color, v1_color, v2_color;
  logic [DATA_WIDTH-1:0]                v0_u, v0_v, v1_u, v1_v, v2_u, v2_v;

  logic                                 rast_frag_valid;
  logic signed [CORD_WIDTH-1:0]         frag_x, frag_y;
  logic signed [(CORD_WIDTH*2):0]       lambda0, lambda1, lambda2;

  logic                                 fifo_wr, fifo_rd, fifo_full, fifo_empty;
  logic [FIFO_DATA_WIDTH-1:0]           fifo_wdata, fifo_rdata;

  logic                                 fs_in_valid;
  logic signed [CORD_WIDTH-1:0]         fs_in_x, fs_in_y;
  logic signed [(CORD_WIDTH*2):0]       fs_in_lambda0, fs_in_lambda1, fs_in_lambda2;
  logic [DATA_WIDTH-1:0]                interpolated_color, interpolated_u, interpolated_v;

  logic                                 tex_req_valid;
  logic [DATA_WIDTH-1:0]                tex_u, tex_v;

  logic                                 texel_valid;
  logic [VEC_SIZE-1:0][DATA_WIDTH-1:0]  texel_color;

  logic                                 pixel_we;
  logic signed [CORD_WIDTH-1:0]         pixel_x, pixel_y;
  logic [VEC_SIZE-1:0][DATA_WIDTH-1:0]  pixel_color;

  // --- Core Modules ---
  reset_sync reset_sync_inst (
    .clk    (clk),
    .arst_n (rst_n),
    .srst_n (glbl_rst_n)
  );

  // FIX: Removed non-existent 'o_start_pipeline' port
  controller ctrl_inst (
    .clk   (clk),
    .rst_n (glbl_rst_n)
    /* ... connect other controller ports ... */
  );

  shader_loader shader_loader_inst (
    .clk          (clk),
    .rst_n        (glbl_rst_n),
    .i_host_we    (i_bus_we),
    .i_host_addr  (i_bus_addr[$clog2(INSTR_DEPTH)-1:0]),
    .i_host_wdata (i_bus_wdata)
  );

  shader_core core0 (
    .clk      (clk),
    .rst_n    (glbl_rst_n),
    .o_mem_req(master_req[1])
    // Connect other shader_core ports
  );
  assign master_addr[1] = '0;

  _interconnect #(
    .NUM_MASTERS (NUM_MASTERS),
    .NUM_SLAVES  (NUM_SLAVES)
  ) interconnect_inst (
    .clk            (clk),
    .rst_n          (glbl_rst_n),
    .i_master_req   (master_req),
    .i_master_addr  (master_addr),
    .i_master_wdata (master_wdata),
    .o_master_rdata (master_rdata),
    .o_slave_req    (slave_req),
    .o_slave_addr   (slave_addr),
    .o_slave_wdata  (slave_wdata),
    .i_slave_rdata  (slave_rdata)
  );

  assign o_dram_we    = slave_req[0];
  assign o_dram_addr  = slave_addr[0];
  assign o_dram_wdata = slave_wdata[0];
  assign slave_rdata[0] = i_dram_rdata;
  assign o_bus_rdata  = '0;

  vertex_fetch #(
    .ATTR_WIDTH       (32),
    .ATTRS_PER_VERTEX ((VERTEX_TOTAL_BITS + 31) / 32)
  ) vf_inst (
    .clk         (clk),
    .rst_n       (glbl_rst_n),
    .i_start_fetch(start_pipe),
    .o_mem_req   (master_req[0]),
    .o_mem_addr  (master_addr[0]),
    .i_mem_rdata (master_rdata[0]),
    .o_vertex_data(vertex_data)
  );

  assign {v0x, v0y, v1x, v1y, v2x, v2y} =
         vertex_data[0 +: VERTEX_POS_BITS];

  assign {v0_color, v1_color, v2_color} =
         vertex_data[VERTEX_POS_BITS +: VERTEX_COLOR_BITS];

  assign {v0_u, v0_v, v1_u, v1_v, v2_u, v2_v} =
         vertex_data[VERTEX_POS_BITS + VERTEX_COLOR_BITS +: VERTEX_UV_BITS];

  rasterizer rast_inst (
    .clk        (clk),
    .rst_n      (glbl_rst_n),
    .i_start    (start_pipe),
    .i_v0_x     (v0x),
    .i_v0_y     (v0y),
    .i_v1_x     (v1x),
    .i_v1_y     (v1y),
    .i_v2_x     (v2x),
    .i_v2_y     (v2y),
    .o_fragment_valid (rast_frag_valid),
    .o_fragment_x     (frag_x),
    .o_fragment_y     (frag_y),
    .o_lambda0        (lambda0),
    .o_lambda1        (lambda1),
    .o_lambda2        (lambda2)
  );

  assign fifo_wr    = rast_frag_valid;
  assign fifo_wdata = {frag_x, frag_y, lambda0, lambda1, lambda2};

  fifo #(
    .DATA_WIDTH (FIFO_DATA_WIDTH)
  ) frag_fifo (
    .clk       (clk),
    .rst_n     (glbl_rst_n),
    .i_wr_en   (fifo_wr),
    .i_w_data  (fifo_wdata),
    .i_rd_en   (fifo_rd),
    .o_r_data  (fifo_rdata),
    .o_full    (fifo_full),
    .o_empty   (fifo_empty)
  );

  assign fs_in_valid = !fifo_empty;
  assign fifo_rd     = fs_in_valid;

  assign {fs_in_x, fs_in_y, fs_in_lambda0, fs_in_lambda1, fs_in_lambda2} = fifo_rdata;

  attribute_interpolator color_interp_inst (
    .i_attr0 (v0_color),
    .i_attr1 (v1_color),
    .i_attr2 (v2_color),
    .i_lambda0 (fs_in_lambda0),
    .i_lambda1 (fs_in_lambda1),
    .i_lambda2 (fs_in_lambda2),
    .o_interpolated_attr (interpolated_color)
  );

  attribute_interpolator u_interp_inst (
    .i_attr0 (v0_u),
    .i_attr1 (v1_u),
    .i_attr2 (v2_u),
    .i_lambda0 (fs_in_lambda0),
    .i_lambda1 (fs_in_lambda1),
    .i_lambda2 (fs_in_lambda2),
    .o_interpolated_attr (interpolated_u)
  );

  attribute_interpolator v_interp_inst (
    .i_attr0 (v0_v),
    .i_attr1 (v1_v),
    .i_attr2 (v2_v),
    .i_lambda0 (fs_in_lambda0),
    .i_lambda1 (fs_in_lambda1),
    .i_lambda2 (fs_in_lambda2),
    .o_interpolated_attr (interpolated_v)
  );

  fragment_shader fs_inst (
    .clk            (clk),
    .rst_n          (glbl_rst_n),
    .i_frag_valid   (fs_in_valid),
    .i_frag_x       (fs_in_x),
    .i_frag_y       (fs_in_y),
    .i_frag_color   ({VEC_SIZE{interpolated_color}}),
    .i_frag_tex_coord({interpolated_u, interpolated_v}),
    .o_tex_req_valid(tex_req_valid),
    .o_tex_u_coord  (tex_u),
    .o_tex_v_coord  (tex_v),
    .i_texel_valid  (texel_valid),
    .i_texel_color  (texel_color),
    .o_pixel_valid  (pixel_we),
    .o_pixel_x      (pixel_x),
    .o_pixel_y      (pixel_y),
    .o_pixel_color  (pixel_color)
  );

  texture_unit tex_unit_inst (
    .clk          (clk),
    .rst_n        (glbl_rst_n),
    .i_req_valid  (tex_req_valid),
    .i_u_coord    (tex_u[15:0]),
    .i_v_coord    (tex_v[15:0]),
    .o_data_valid (texel_valid),
    .o_texel_color(texel_color)
  );

  framebuffer fb_inst (
    .clk         (clk),
    .rst_n       (glbl_rst_n),
    .i_pixel_we  (pixel_we),
    .i_pixel_x   (pixel_x),
    .i_pixel_y   (pixel_y),
    .i_pixel_color(pixel_color[0]),
    .o_mem_req   (master_req[2]),
    .o_mem_addr  (master_addr[2]),
    .o_mem_wdata (master_wdata[2])
  );

endmodule
