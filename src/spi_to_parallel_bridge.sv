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
  logic cs_n_prev;

  // Detect CS edge
  always_ff @(posedge i_spi_clk or negedge rst_n) begin
    if (!rst_n) begin
      cs_n_prev <= 1'b1;
    end else begin
      cs_n_prev <= i_spi_cs_n;
    end
  end

  // State machine - synchronous state update
  always_ff @(posedge i_spi_clk or negedge rst_n) begin
    if (!rst_n) begin
      current_state <= IDLE;
    end else if (i_spi_cs_n) begin
      // Immediately go to IDLE when CS is deasserted
      current_state <= IDLE;
    end else begin
      current_state <= next_state;
    end
  end

  // State machine - next state logic
  always_comb begin
    next_state = current_state;
    
    case (current_state)
      IDLE: begin
        // Start on falling edge of CS
        if (!i_spi_cs_n && cs_n_prev) 
          next_state = GET_CMD;
      end
      
      GET_CMD: begin
        if (bit_counter == 7)  // After 8 bits received (0-7)
          next_state = GET_ADDR;
      end
      
      GET_ADDR: begin
        if (bit_counter == 39) begin  // After 8 cmd + 32 addr bits (0-39)
          if (cmd_reg[7])  // Check write bit
            next_state = GET_WDATA;
          else
            next_state = EXECUTE;
        end
      end
      
      GET_WDATA: begin
        if (bit_counter == 71)  // After 8 + 32 + 32 bits (0-71)
          next_state = EXECUTE;
      end
      
      EXECUTE: begin
        // Stay in EXECUTE for one cycle
        if (cmd_reg[7])  // Write transaction
          next_state = IDLE;
        else
          next_state = SEND_RDATA;
      end
      
      SEND_RDATA: begin
        // Stay in SEND_RDATA until all bits are sent
        if (bit_counter >= 103)  // After sending 32 bits (72-103)
          next_state = IDLE;
      end
      
      default: next_state = IDLE;
    endcase
  end

  // Bit counter management
  always_ff @(posedge i_spi_clk or negedge rst_n) begin
    if (!rst_n) begin
      bit_counter <= '0;
    end else if (i_spi_cs_n) begin
      bit_counter <= '0;
    end else if (!i_spi_cs_n && cs_n_prev) begin
      bit_counter <= '0;
    end else if (!i_spi_cs_n) begin
      bit_counter <= bit_counter + 1;
    end
  end

  // Data shifting - separate to avoid Icarus issues
  always_ff @(posedge i_spi_clk or negedge rst_n) begin
    if (!rst_n) begin
      cmd_reg <= '0;
      addr_reg <= '0;
      wdata_reg <= '0;
    end else if (i_spi_cs_n) begin
      cmd_reg <= '0;
      addr_reg <= '0;
      wdata_reg <= '0;
    end else if (!i_spi_cs_n && cs_n_prev) begin
      cmd_reg <= '0;
      addr_reg <= '0;
      wdata_reg <= '0;
    end else if (!i_spi_cs_n) begin
      // Shift in data from MOSI based on bit position
      if (bit_counter < 8) begin
        cmd_reg <= {cmd_reg[6:0], i_spi_mosi};
      end
      if (bit_counter >= 8 && bit_counter < 40) begin
        addr_reg <= {addr_reg[ADDR_WIDTH-2:0], i_spi_mosi};
      end
      if (bit_counter >= 40 && bit_counter < 72) begin
        wdata_reg <= {wdata_reg[DATA_WIDTH-2:0], i_spi_mosi};
      end
    end
  end

  // Capture and shift read data
  always_ff @(posedge i_spi_clk or negedge rst_n) begin
    if (!rst_n) begin
      rdata_shift_reg <= '0;
    end else if (current_state == EXECUTE && next_state == SEND_RDATA && !cmd_reg[7]) begin
      // Capture read data when transitioning to SEND_RDATA for read operations
      rdata_shift_reg <= i_dram_rdata;  // Direct connection for testing
    end else if (current_state == SEND_RDATA && bit_counter > 72) begin
      // Shift out data during SEND_RDATA after command/addr/data phases
      rdata_shift_reg <= {rdata_shift_reg[DATA_WIDTH-2:0], 1'b0};
    end
  end

  // Drive MISO output - output MSB of shift register during read
  always_comb begin
    if (current_state == SEND_RDATA && bit_counter >= 72) begin
      o_spi_miso = rdata_shift_reg[DATA_WIDTH-1];
    end else begin
      o_spi_miso = 1'b0;
    end
  end

  // Simple bus interface - just pass through for testing
  assign bus_we = (current_state == EXECUTE) && cmd_reg[7];
  assign bus_addr = addr_reg;
  assign bus_wdata = wdata_reg;

endmodule
