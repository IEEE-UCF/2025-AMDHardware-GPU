module spi_to_parallel_bridge #(
    parameter int ADDR_WIDTH = 32,
    parameter int DATA_WIDTH = 32
)(
    input logic clk,
    input logic rst_n,

    // from physical fpga pins
    input logic i_spi_clk,
    input logic i_spi_cs_n,
    input logic i_spi_mosi,
    output logic o_spi_miso,

    // to main memory (dram)
    output logic o_dram_we,
    output logic [ADDR_WIDTH-1:0] o_dram_addr,
    output logic [DATA_WIDTH-1:0] o_dram_wdata,
    input logic [DATA_WIDTH-1:0] i_dram_rdata
);

    // internal bus signals connecting to the gpu
    logic bus_we;
    logic [ADDR_WIDTH-1:0] bus_addr;
    logic [DATA_WIDTH-1:0] bus_wdata;
    logic [DATA_WIDTH-1:0] bus_rdata;

    gpu_top gpu_inst (
        .clk(clk),
        .rst_n(rst_n),
        .i_bus_we(bus_we),
        .i_bus_addr(bus_addr),
        .i_bus_wdata(bus_wdata),
        .o_bus_rdata(bus_rdata),
        .o_dram_we(o_dram_we),
        .o_dram_addr(o_dram_addr),
        .o_dram_wdata(o_dram_wdata),
        .i_dram_rdata(i_dram_rdata)
    );

    typedef enum logic [2:0] {
        IDLE,
        GET_CMD,
        GET_ADDR,
        GET_WDATA,
        EXECUTE,
        SEND_RDATA
    } spi_state_t;

    spi_state_t current_state, next_state;
    
    logic [7:0] bit_counter;
    logic [7:0] cmd_reg;
    logic [ADDR_WIDTH-1:0] addr_reg;
    logic [DATA_WIDTH-1:0] wdata_reg;
    logic [DATA_WIDTH-1:0] rdata_shift_reg;

    always_ff @(posedge i_spi_clk or negedge rst_n) begin
        if (!rst_n) begin
            current_state <= IDLE;
        end else begin
            current_state <= next_state;
        end
    end

    always_comb begin
        next_state = current_state;
        // if chip select goes high, transaction is over, so go idle
        if (i_spi_cs_n) begin
            next_state = IDLE;
        end else begin
            case (current_state)
                IDLE: if (!i_spi_cs_n) next_state = GET_CMD;
                GET_CMD: if (bit_counter == 8*1 - 1) next_state = GET_ADDR;
                GET_ADDR: if (bit_counter == 8*5 - 1) next_state = (cmd_reg[7]) ? GET_WDATA : EXECUTE; // check write bit
                GET_WDATA: if (bit_counter == 8*9 - 1) next_state = EXECUTE;
                EXECUTE: next_state = (cmd_reg[7]) ? IDLE : SEND_RDATA; // if it was a read, start sending data
                SEND_RDATA: if (bit_counter == 8*9 - 1) next_state = IDLE;
            endcase
        end
    end

    always_ff @(posedge i_spi_clk) begin
        if (i_spi_cs_n) begin
            bit_counter <= '0;
        end else begin
            bit_counter <= bit_counter + 1;
            
            // build up the command, address, and data regs one bit at a time from mosi
            if (current_state == GET_CMD)    cmd_reg   <= {cmd_reg[6:0], i_spi_mosi};
            if (current_state == GET_ADDR)   addr_reg  <= {addr_reg[30:0], i_spi_mosi};
            if (current_state == GET_WDATA)  wdata_reg <= {wdata_reg[30:0], i_spi_mosi};
        end
        
        // when the full spi command is received, send it to the gpu for one cycle
        if (next_state == EXECUTE) begin
            bus_we <= cmd_reg[7];
            bus_addr <= addr_reg;
            bus_wdata <= wdata_reg;
            rdata_shift_reg <= bus_rdata; // grab read data to send back
        end else begin
            bus_we <= 1'b0;
        end
    end

    // drive the most significant bit of our read data onto the miso line
    assign o_spi_miso = (current_state == SEND_RDATA) ? rdata_shift_reg[31] : 1'bz;
    
    always_ff @(posedge i_spi_clk) begin
        if (current_state == SEND_RDATA) begin
            // shift the read data so the next bit is ready
            rdata_shift_reg <= {rdata_shift_reg[30:0], 1'b0};
        end
    end

endmodule