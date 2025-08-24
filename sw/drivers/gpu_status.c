#include "gpu_driver.h"
#include "gpu_regs.h"

// local copy of the mmio helpers for this file

struct gpu_device_t {
    volatile uint32_t* base_addr;
};
static inline uint32_t gpu_reg_read(gpu_device_t* dev, uint32_t reg_offset) {
    return dev->base_addr[reg_offset / 4];
}

// --- public api implementation ---

bool gpu_is_busy(gpu_device_t* dev) {
    if (dev == NULL) {
        return false;
    }
    return (gpu_reg_read(dev, GPU_REG_STATUS) & GPU_STATUS_BUSY_MASK) != 0;
}

uint32_t gpu_get_status(gpu_device_t* dev) {
    if (dev == NULL) {
        return 0;
    }
    return gpu_reg_read(dev, GPU_REG_STATUS);
}

uint32_t gpu_get_error(gpu_device_t* dev) {
    if (dev == NULL) {
        return GPU_ERROR_NONE;
    }
    // reading the error register also clears it on the hardware side
    return gpu_reg_read(dev, GPU_REG_ERROR);
}

bool gpu_wait_for_idle(gpu_device_t* dev, uint32_t timeout_cycles) {
    if (dev == NULL) {
        return false;
    }
    while (gpu_is_busy(dev)) {
        if (timeout_cycles-- == 0) {
            return false; // timed out
        }
    }
    return true; // became idle
}