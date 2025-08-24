module framebuffer #(
    parameter int SCREEN_WIDTH = 640,
    parameter int SCREEN_HEIGHT = 480,
    parameter int COLOR_WIDTH = 32
)(
    input logic clk,
    input logic rst_n,
    
    input logic i_pixel_we,
    input logic [9:0] i_pixel_x,
    input logic [9:0] i_pixel_y,
    input logic [COLOR_WIDTH-1:0] i_pixel_color,

    output logic [$clog2(SCREEN_WIDTH*SCREEN_HEIGHT)-1:0] o_mem_addr,
    output logic [COLOR_WIDTH-1:0] o_mem_wdata,
    output logic o_mem_we
);
    
    localparam int FB_DEPTH = SCREEN_WIDTH * SCREEN_HEIGHT;
    logic [COLOR_WIDTH-1:0] frame_buffer_mem [FB_DEPTH-1];
    
    logic [$clog2(FB_DEPTH)-1:0] write_addr;

    // turning 2d screen coordinates into a 1d memory address
    assign write_addr = i_pixel_y * SCREEN_WIDTH + i_pixel_x;
    
    always_ff @(posedge clk) begin
        if (i_pixel_we) begin
            frame_buffer_mem[write_addr] <= i_pixel_color;
        end
    end

    // just wiring signals out to the external memory controller
    assign o_mem_addr  = write_addr;
    assign o_mem_wdata = i_pixel_color;
    assign o_mem_we    = i_pixel_we;