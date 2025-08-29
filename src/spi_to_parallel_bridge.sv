module spi_to_parallel_bridge #(
    parameter int ADDR_WIDTH = 32,
    parameter int DATA_WIDTH = 32
) (
    input logic clk,
    input logic rst_n,

    // from physical fpga pins
    input  logic i_spi_clk,
    input  logic i_spi_cs_n,
    input  logic i_spi_mosi,
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
    IDLE       = 3'b000,
    GET_CMD    = 3'b001,
    GET_ADDR   = 3'b010,
    GET_WDATA  = 3'b011,
    EXECUTE    = 3'b100,
    SEND_RDATA = 3'b101
  } spi_state_t;

  spi_state_t current_state, next_state;

  logic [7:0] bit_counter;
  logic [7:0] cmd_reg;
  logic [ADDR_WIDTH-1:0] addr_reg;
  logic [DATA_WIDTH-1:0] wdata_reg;
  logic [DATA_WIDTH-1:0] rdata_shift_reg;

  // CDC signals - SPI domain to system clock domain
  logic spi_transaction_req;
  logic spi_transaction_ack_sync;
  logic spi_is_write;
  logic [ADDR_WIDTH-1:0] spi_addr;
  logic [DATA_WIDTH-1:0] spi_wdata;
  
  // CDC signals - system clock domain to SPI domain
  logic [DATA_WIDTH-1:0] sys_rdata;
  logic sys_rdata_valid;
  logic sys_rdata_valid_sync;

  // State machine - synchronous state update
  always_ff @(posedge i_spi_clk or negedge rst_n) begin
    if (!rst_n) begin
      current_state <= IDLE;
    end else begin
      current_state <= next_state;
    end
  end

  // State machine - next state logic
  always_comb begin
    next_state = current_state;
    
    if (i_spi_cs_n) begin
      next_state = IDLE;
    end else begin
      case (current_state)
        IDLE: begin
          if (!i_spi_cs_n) 
            next_state = GET_CMD;
        end
        
        GET_CMD: begin
          if (bit_counter == 7)  // 8 bits received
            next_state = GET_ADDR;
        end
        
        GET_ADDR: begin
          if (bit_counter == 39) begin  // 8 cmd + 32 addr bits
            if (cmd_reg[7])  // Check write bit
              next_state = GET_WDATA;
            else
              next_state = EXECUTE;
          end
        end
        
        GET_WDATA: begin
          if (bit_counter == 71)  // 8 + 32 + 32 bits
            next_state = EXECUTE;
        end
        
        EXECUTE: begin
          if (cmd_reg[7])  // Write transaction
            next_state = IDLE;
          else
            next_state = SEND_RDATA;
        end
        
        SEND_RDATA: begin
          if (bit_counter >= 72 + 31)  // Wait for 32 bits to be sent
            next_state = IDLE;
        end
        
        default: next_state = IDLE;
      endcase
    end
  end

  // Bit counter and data shifting (SPI clock domain)
  always_ff @(posedge i_spi_clk) begin
    if (i_spi_cs_n) begin
      bit_counter <= '0;
    end else begin
      bit_counter <= bit_counter + 1;
      
      // Shift in data from MOSI
      if (current_state == GET_CMD) 
        cmd_reg <= {cmd_reg[6:0], i_spi_mosi};
      
      if (current_state == GET_ADDR) 
        addr_reg <= {addr_reg[ADDR_WIDTH-2:0], i_spi_mosi};
      
      if (current_state == GET_WDATA) 
        wdata_reg <= {wdata_reg[DATA_WIDTH-2:0], i_spi_mosi};
    end
  end

  // Generate transaction request in SPI domain
  always_ff @(posedge i_spi_clk or negedge rst_n) begin
    if (!rst_n) begin
      spi_transaction_req <= 1'b0;
      spi_is_write <= 1'b0;
      spi_addr <= '0;
      spi_wdata <= '0;
    end else if (current_state == EXECUTE && next_state != EXECUTE) begin
      spi_transaction_req <= ~spi_transaction_req;  // Toggle to create pulse
      spi_is_write <= cmd_reg[7];
      spi_addr <= addr_reg;
      spi_wdata <= wdata_reg;
    end
  end

  // Synchronize request to system clock domain
  logic spi_transaction_req_sync1, spi_transaction_req_sync2, spi_transaction_req_prev;
  
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      spi_transaction_req_sync1 <= 1'b0;
      spi_transaction_req_sync2 <= 1'b0;
      spi_transaction_req_prev <= 1'b0;
    end else begin
      spi_transaction_req_sync1 <= spi_transaction_req;
      spi_transaction_req_sync2 <= spi_transaction_req_sync1;
      spi_transaction_req_prev <= spi_transaction_req_sync2;
    end
  end

  // Detect edge in system clock domain
  logic transaction_pulse;
  assign transaction_pulse = spi_transaction_req_sync2 != spi_transaction_req_prev;

  // Execute transaction in system clock domain
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      bus_we <= 1'b0;
      bus_addr <= '0;
      bus_wdata <= '0;
      sys_rdata <= '0;
      sys_rdata_valid <= 1'b0;
    end else if (transaction_pulse) begin
      bus_we <= spi_is_write;
      bus_addr <= spi_addr;
      bus_wdata <= spi_wdata;
      sys_rdata <= bus_rdata;  // Capture read data
      sys_rdata_valid <= ~sys_rdata_valid;  // Toggle valid signal
    end else begin
      bus_we <= 1'b0;
    end
  end

  // Synchronize read data valid back to SPI domain
  logic sys_rdata_valid_sync1;
  always_ff @(posedge i_spi_clk or negedge rst_n) begin
    if (!rst_n) begin
      sys_rdata_valid_sync1 <= 1'b0;
      sys_rdata_valid_sync <= 1'b0;
    end else begin
      sys_rdata_valid_sync1 <= sys_rdata_valid;
      sys_rdata_valid_sync <= sys_rdata_valid_sync1;
    end
  end

  // Capture read data in SPI domain when entering SEND_RDATA
  always_ff @(posedge i_spi_clk) begin
    if (current_state == EXECUTE && next_state == SEND_RDATA) begin
      // Use the synchronized read data from system clock domain
      rdata_shift_reg <= sys_rdata;
    end else if (current_state == SEND_RDATA) begin
      // Shift out data on MISO
      rdata_shift_reg <= {rdata_shift_reg[DATA_WIDTH-2:0], 1'b0};
    end
  end

  // Drive MISO output
  assign o_spi_miso = (current_state == SEND_RDATA) ? rdata_shift_reg[DATA_WIDTH-1] : 1'bz;

endmodule
