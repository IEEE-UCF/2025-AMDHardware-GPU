#include "gpu_driver.h"
#include "gpu_regs.h"

// reuse mmio helpers here since the originals are static
struct gpu_device_t {
    volatile uint32_t* base_addr;
};
static inline void gpu_reg_write(gpu_device_t* dev, uint32_t reg_offset, uint32_t value) {
    dev->base_addr[reg_offset / 4] = value;
}
static inline uint32_t gpu_reg_read(gpu_device_t* dev, uint32_t reg_offset) {
    return dev->base_addr[reg_offset / 4];
}

// --- public api implementation ---

bool gpu_load_shader(gpu_device_t* dev, const uint32_t* shader_code, size_t instruction_count) {
    if (dev == NULL || shader_code == NULL) {
        return false;
    }

    for (size_t i = 0; i < instruction_count; ++i) {
        uint32_t timeout = 1000;
        
        // wait until the gpu is ready for the next instruction
        while (!(gpu_reg_read(dev, GPU_REG_STATUS) & GPU_STATUS_SHADER_RDY_MASK)) {
            if (--timeout == 0) return false;
        }

        // write the address, then the instruction data
        gpu_reg_write(dev, GPU_REG_SHADER_ADDR, (uint32_t)i);
        gpu_reg_write(dev, GPU_REG_SHADER_DATA, shader_code[i]);
    }
    return true;
}