#!/usr/bin/env python3

import ctypes
import argparse
from typing import List

try:
    gpu_lib = ctypes.CDLL('./libgpudriver.so')
except OSError as e:
    print(f"error: could not load gpu driver library. did you compile it?")
    print(f"details: {e}")
    exit(1)

class GpuDevice(ctypes.Structure):
    pass

gpu_lib.gpu_init.argtypes = [ctypes.c_uint64]
gpu_lib.gpu_init.restype = ctypes.POINTER(GpuDevice)

gpu_lib.gpu_load_shader.argtypes = [ctypes.POINTER(GpuDevice), ctypes.POINTER(ctypes.c_uint32), ctypes.c_size_t]
gpu_lib.gpu_load_shader.restype = ctypes.c_bool

gpu_lib.gpu_reset.argtypes = [ctypes.POINTER(GpuDevice)]
gpu_lib.gpu_destroy.argtypes = [ctypes.POINTER(GpuDevice)]


def parse_intel_hex(file_path: str) -> List[int]:
    raw_bytes = bytearray()
    
    with open(file_path, 'r') as f:
        for line_num, line in enumerate(f, 1):
            line = line.strip()
            if not line:
                continue
            
            if line[0] != ':':
                raise ValueError(f"line {line_num} does not start with ':'")
            
            hex_data = bytes.fromhex(line[1:])
            
            byte_count = hex_data[0]
            address = int.from_bytes(hex_data[1:3], 'big')
            record_type = hex_data[3]
            data = hex_data[4:-1]
            checksum = hex_data[-1]

            if len(data) != byte_count:
                raise ValueError(f"line {line_num} has inconsistent byte count.")

            calc_checksum = (sum(hex_data[:-1])) & 0xFF
            if ((calc_checksum + checksum) & 0xFF) != 0:
                raise ValueError(f"line {line_num} has a checksum error.")

            if record_type == 0x00:
                raw_bytes.extend(data)
            elif record_type == 0x01:
                break
    
    instructions = []
    for i in range(0, len(raw_bytes), 4):
        word_bytes = raw_bytes[i:i+4]
        if len(word_bytes) < 4:
            print(f"warning: trailing {len(word_bytes)} bytes in hex file will be ignored.")
            break
        instructions.append(int.from_bytes(word_bytes, 'little'))
        
    return instructions

def load_shader_from_file(dev: ctypes.POINTER(GpuDevice), hex_file_path: str) -> bool:
    print(f"loading shader from '{hex_file_path}'...")
    
    try:
        instructions = parse_intel_hex(hex_file_path)
    except FileNotFoundError:
        print(f"error: file not found '{hex_file_path}'")
        return False
    except ValueError as e:
        print(f"error: could not parse intel hex file. {e}")
        return False

    if not instructions:
        print("warning: shader file contains no data.")
        return True

    instr_count = len(instructions)
    c_instr_array = (ctypes.c_uint32 * instr_count)(*instructions)

    print(f"parsed {instr_count} instructions. sending to gpu...")
    
    success = gpu_lib.gpu_load_shader(dev, c_instr_array, instr_count)
    
    if success:
        print("shader loaded successfully.")
    else:
        print("error: failed to load shader into gpu. device timed out.")
        
    return success

def main():
    parser = argparse.ArgumentParser(description="load an intel .hex shader file to the fpga gpu.")
    parser.add_argument("shader_file", help="path to the .hex shader file to load.")
    parser.add_argument("--base-addr", type=lambda x: int(x, 0), default=0x40000000,
                        help="memory-mapped base address of the gpu (e.g., 0x40000000).")
    args = parser.parse_args()

    print(f"initializing gpu at base address 0x{args.base_addr:08x}...")
    dev = gpu_lib.gpu_init(args.base_addr)
    if not dev:
        print("error: gpu_init failed. unable to create device handle.")
        return

    print("resetting gpu...")
    gpu_lib.gpu_reset(dev)
    
    load_shader_from_file(dev, args.shader_file)

    gpu_lib.gpu_destroy(dev)
    print("done.")

if __name__ == "__main__":
    main()
