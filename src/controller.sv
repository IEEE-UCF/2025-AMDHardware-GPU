module controller (
    input logic clk,
    input logic rst_n,

    input logic i_instruction_valid,
    input logic i_memory_ready,

    output logic o_pc_we,
    output logic o_decode_en,
    output logic o_execute_en,
    output logic o_memory_en,
    output logic o_writeback_en,
    output logic o_hazard_stall
);
  // the way im going to do this is a lil weird so stay with me here..
  typedef enum logic [2:0] {
    FETCH,
    DECODE,
    EXECUTE,
    MEMORY,
    WRITEBACK
  } pipeline_state_t;

  pipeline_state_t current_state, next_state;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      current_state <= FETCH;
    end else begin
      current_state <= next_state;
    end
  end

  always_comb begin
    next_state = current_state;
    o_hazard_stall = 1'b0;

    case (current_state)
      FETCH: begin
        if (i_instruction_valid) next_state = DECODE;
      end
      DECODE: begin
        // stall until memory signals ready
        if (!i_memory_ready) begin
          o_hazard_stall = 1'b1;
          next_state = DECODE;
        end else begin
          next_state = EXECUTE;
        end
      end
      EXECUTE: next_state = MEMORY;
      MEMORY: if (i_memory_ready) next_state = WRITEBACK;
      WRITEBACK: next_state = FETCH;
      default: next_state = FETCH;
    endcase
  end

  // this generates control signals based on the current state
  assign o_pc_we = (current_state == WRITEBACK);
  assign o_decode_en = (current_state == FETCH) && i_instruction_valid;
  assign o_execute_en = (current_state == DECODE) && !o_hazard_stall;
  assign o_memory_en = (current_state == EXECUTE);
  assign o_writeback_en = (current_state == MEMORY) && i_memory_ready;

endmodule

