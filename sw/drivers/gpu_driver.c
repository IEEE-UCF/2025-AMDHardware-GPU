#include "gpu_driver.h"
#include "gpu_regs.h"
#include <stdlib.h> 

// private device struct
// base is marked volatile so MMIO reads/writes aren’t optimized away
struct gpu_device_t {
    volatile uint32_t* base_addr;
};

// --- internal mmio helper functions ---

static inline void gpu_reg_write(gpu_device_t* dev, uint32_t reg_offset, uint32_t value) {
    dev->base_addr[reg_offset / 4] = value;
}

static inline uint32_t gpu_reg_read(gpu_device_t* dev, uint32_t reg_offset) {
    return dev->base_addr[reg_offset / 4];
}

// --- public api implementation ---

gpu_device_t* gpu_init(uintptr_t base_addr) {
    gpu_device_t* dev = (gpu_device_t*)malloc(sizeof(gpu_device_t));
    if (dev == NULL) {
        return NULL;
    }
    dev->base_addr = (volatile uint32_t*)base_addr;
    return dev;
}

void gpu_destroy(gpu_device_t* dev) {
    if (dev != NULL) {
        free(dev);
    }
}

void gpu_reset(gpu_device_t* dev) {
    // pulse the reset bit
    gpu_reg_write(dev, GPU_REG_CONTROL, GPU_CONTROL_RESET_MASK);
    gpu_reg_write(dev, GPU_REG_CONTROL, 0);
}

void gpu_start(gpu_device_t* dev) {
    uint32_t ctrl = gpu_reg_read(dev, GPU_REG_CONTROL);
    gpu_reg_write(dev, GPU_REG_CONTROL, ctrl | GPU_CONTROL_START_MASK);
}

void gpu_stop(gpu_device_t* dev) {
    uint32_t ctrl = gpu_reg_read(dev, GPU_REG_CONTROL);
    gpu_reg_write(dev, GPU_REG_CONTROL, ctrl & ~GPU_CONTROL_START_MASK);
}