module alu #(
    parameter int DATA_WIDTH  = 32,
    parameter int VECTOR_SIZE = 4
) (
    input logic [VECTOR_SIZE-1:0][DATA_WIDTH-1:0] i_operand_a,
    input logic [VECTOR_SIZE-1:0][DATA_WIDTH-1:0] i_operand_b,
    input logic [4:0] i_opcode,
    output logic [VECTOR_SIZE-1:0][DATA_WIDTH-1:0] o_result
);

  // little note, its a combinational alu so the result is instant
  always_comb begin
    o_result = '0;  // default prevents latches

    case (i_opcode)
      5'b00001: o_result = i_operand_a + i_operand_b;
      5'b00010: o_result = i_operand_a - i_operand_b;
      5'b00011: o_result = i_operand_a * i_operand_b;
      5'b01001: o_result = i_operand_a & i_operand_b;
      5'b01010: o_result = i_operand_a | i_operand_b;
      5'b01011: o_result = i_operand_a ^ i_operand_b;
      5'b10001: o_result = i_operand_a;
      5'b10010: o_result = i_operand_b;
      default:  o_result = '0;
    endcase
  end

endmodule

