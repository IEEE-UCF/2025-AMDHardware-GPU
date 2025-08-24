#!/usr/bin/env python3

import sys
import argparse
from typing import List, Dict, Tuple

from isa_constants import OPCODES, REGISTERS


def assemble(source_lines: List[str]) -> Tuple[List[int], Dict[str, int]]:
    # pass 1, build symbol table for labels
    symbols: Dict[str, int] = {}
    instructions: List[Tuple[str, List[str]]] = []
    
    current_address = 0
    for line_num, line in enumerate(source_lines, 1):
        line = line.split('//')[0].strip().lower()
        if not line:
            continue

        parts = line.replace(',', ' ').split()
        
        if parts[0].endswith(':'):
            label = parts[0][:-1]
            if label in symbols:
                raise ValueError(f"line {line_num}: duplicate label '{label}'")
            symbols[label] = current_address
            parts = parts[1:]
        
        if not parts:
            continue

        instructions.append((parts[0], parts[1:]))
        current_address += 4

    # pass 2, encode instructions into machine code
    machine_code: List[int] = []
    current_address = 0
    for mnemonic, operands in instructions:
        if mnemonic not in OPCODES:
            raise ValueError(f"unknown mnemonic '{mnemonic}'")
        
        opcode_val, instr_type = OPCODES[mnemonic]
        word = opcode_val << 27
        
        if instr_type == 'r_type':
            rd = REGISTERS[operands[0]]
            rs1 = REGISTERS[operands[1]]
            rs2 = REGISTERS[operands[2]]
            word |= (rd << 23) | (rs1 << 19) | (rs2 << 15)
        
        elif instr_type == 'i_type':
            rd = REGISTERS[operands[0]]
            rs1 = REGISTERS[operands[1]]
            imm_str = operands[2]
            
            if imm_str in symbols:
                # pc relative jump for branches
                imm = symbols[imm_str] - (current_address + 4)
            else:
                imm = int(imm_str, 0)
            
            word |= (rd << 23) | (rs1 << 19) | (imm & 0x7FFFF)

        elif instr_type == 's_type':
            rs2 = REGISTERS[operands[0]]
            rs1 = REGISTERS[operands[1]]
            imm = int(operands[2], 0)
            word |= (rs2 << 23) | (rs1 << 19) | (imm & 0x7FFFF)

        elif instr_type == 'j_type':
            target = operands[0]
            if target not in symbols:
                raise ValueError(f"undefined label '{target}'")
            addr = symbols[target]
            word |= (addr & 0x7FFFFFF)

        machine_code.append(word)
        current_address += 4

    return machine_code, symbols

def write_intel_hex(words: List[int], file_path: str):
    with open(file_path, 'w') as f:
        address = 0
        for word in words:
            data_bytes = word.to_bytes(4, 'little')
            byte_count = 4
            record_type = 0x00
            
            record = f"{byte_count:02X}{address:04X}{record_type:02X}"
            record += "".join(f"{b:02X}" for b in data_bytes)
            
            checksum = sum(bytearray.fromhex(record)) & 0xFF
            checksum = (256 - checksum) & 0xFF
            
            f.write(f":{record}{checksum:02X}\n")
            address += 4
            
        f.write(":00000001FF\n")

def main():
    parser = argparse.ArgumentParser(description="assemble custom gpu code to intel hex.")
    parser.add_argument("input_file", help="path to the input assembly (.s) file.")
    parser.add_argument("-o", "--output", help="path to the output hex file.")
    args = parser.parse_args()

    output_file = args.output
    if not output_file:
        output_file = args.input_file.rsplit('.', 1)[0] + '.hex'

    try:
        with open(args.input_file, 'r') as f:
            source = f.readlines()
        
        print(f"assembling '{args.input_file}'...")
        machine_code, symbols = assemble(source)
        
        print("assembly successful. symbols found:")
        for symbol, addr in symbols.items():
            print(f"  - {symbol}: 0x{addr:04x}")
            
        print(f"writing intel hex output to '{output_file}'...")
        write_intel_hex(machine_code, output_file)
        
        print("done.")

    except (IOError, ValueError) as e:
        print(f"\nerror: {e}", file=sys.stderr)
        sys.exit(1)

if __name__ == "__main__":
    main()