#!/usr/bin/env python3

import ctypes
import time

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
gpu_lib.gpu_destroy.argtypes = [ctypes.POINTER(GpuDevice)]
gpu_lib.gpu_reset.argtypes = [ctypes.POINTER(GpuDevice)]
gpu_lib.gpu_start.argtypes = [ctypes.POINTER(GpuDevice)]
gpu_lib.gpu_stop.argtypes = [ctypes.POINTER(GpuDevice)]
gpu_lib.gpu_get_status.argtypes = [ctypes.POINTER(GpuDevice)]
gpu_lib.gpu_get_status.restype = ctypes.c_uint32
gpu_lib.gpu_get_error.argtypes = [ctypes.POINTER(GpuDevice)]
gpu_lib.gpu_get_error.restype = ctypes.c_uint32
gpu_lib.gpu_is_busy.argtypes = [ctypes.POINTER(GpuDevice)]
gpu_lib.gpu_is_busy.restype = ctypes.c_bool
gpu_lib.gpu_wait_for_idle.argtypes = [ctypes.POINTER(GpuDevice), ctypes.c_uint32]
gpu_lib.gpu_wait_for_idle.restype = ctypes.c_bool


class GPUController:
    def __init__(self, base_addr: int):
        self.dev = gpu_lib.gpu_init(base_addr)
        if not self.dev:
            raise RuntimeError("gpu_init failed. could not create device handle.")
        print(f"gpu controller initialized at address 0x{base_addr:08x}.")

    def __del__(self):
        if self.dev:
            gpu_lib.gpu_destroy(self.dev)
            print("gpu controller shut down.")

    def reset(self):
        print("sending reset command...")
        gpu_lib.gpu_reset(self.dev)

    def start(self):
        print("sending start command...")
        gpu_lib.gpu_start(self.dev)

    def stop(self):
        print("sending stop command...")
        gpu_lib.gpu_stop(self.dev)

    def is_busy(self) -> bool:
        return gpu_lib.gpu_is_busy(self.dev)

    def get_status_reg(self) -> int:
        return gpu_lib.gpu_get_status(self.dev)
        
    def get_error_code(self) -> int:
        return gpu_lib.gpu_get_error(self.dev)
        
    def wait_for_idle(self, timeout_s: float = 1.0) -> bool:
        timeout_cycles = int(timeout_s * 100_000_000)
        return gpu_lib.gpu_wait_for_idle(self.dev, timeout_cycles)


def main():
    try:
        gpu = GPUController(base_addr=0x40000000)
    except RuntimeError as e:
        print(f"error: {e}")
        return

    gpu.reset()
    
    gpu.start()
    
    print("gpu is running... waiting for it to go idle.")
    time.sleep(0.5)
    
    if gpu.wait_for_idle(timeout_s=1.0):
        print("gpu is now idle.")
    else:
        print("gpu timed out waiting for idle.")

    status = gpu.get_status_reg()
    error = gpu.get_error_code()
    
    print(f"final status register: 0x{status:08x}")
    print(f"final error code: 0x{error:02x}")


if __name__ == "__main__":
    main()