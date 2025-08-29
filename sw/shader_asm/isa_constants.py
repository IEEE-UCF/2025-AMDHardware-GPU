#!/usr/bin/env python3

# maps 'r0', 'r1', etc., to their integer values
REGISTERS = {f'r{i}': i for i in range(16)}
REGISTERS['r0'] = 0

# maps each instruction to its 5-bit opcode and format type
OPCODES = {
    'addi': (0b00001, 'i_type'), # rd = rs1 + imm
    'add': (0b00010, 'r_type'), # rd = rs1 + rs2
    'sub': (0b00011, 'r_type'), # rd = rs1 - rs2
    'load': (0b00100, 'i_type'), # rd = mem[rs1 + imm]
    'store': (0b00101, 's_type'), # mem[rs1 + imm] = rs2
    'jump': (0b00110, 'j_type'), # pc = imm
    'jumpl': (0b00111, 'i_type'), # if rs1 < rs2, pc = pc + imm
    'halt': (0b11111, 'r_type'), # stop execution
}