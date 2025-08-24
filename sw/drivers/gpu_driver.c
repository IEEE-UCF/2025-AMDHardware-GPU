#ifndef GPU_REGS_H_
#define GPU_REGS_H_

#include <stdint.h>

// gpu register offsets from the base address
typedef enum {
    GPU_REG_CONTROL      = 0x00, // rw: main control register
    GPU_REG_STATUS       = 0x04, // r-: main status register
    GPU_REG_ERROR        = 0x08, // rwc: error code register (clears on read)
    GPU_REG_SHADER_ADDR  = 0x0C, // rw: address for shader memory access
    GPU_REG_SHADER_DATA  = 0x10, // rw: data for shader memory access
    GPU_REG_CMD_BASE     = 0x14, // rw: base address of command buffer
    GPU_REG_CMD_WP       = 0x18, // rw: command buffer write pointer
    GPU_REG_CMD_RP       = 0x1C, // r-: command buffer read pointer
} gpu_reg_offset_t;

// bitfields for GPU_REG_CONTROL
#define GPU_CONTROL_START_POS  (0)
#define GPU_CONTROL_START_MASK (1U << GPU_CONTROL_START_POS)
#define GPU_CONTROL_RESET_POS  (1)
#define GPU_CONTROL_RESET_MASK (1U << GPU_CONTROL_RESET_POS)
#define GPU_CONTROL_IRQ_EN_POS (2)
#define GPU_CONTROL_IRQ_EN_MASK (1U << GPU_CONTROL_IRQ_EN_POS)

// bitfields for GPU_REG_STATUS
#define GPU_STATUS_BUSY_POS         (0)
#define GPU_STATUS_BUSY_MASK        (1U << GPU_STATUS_BUSY_POS)
#define GPU_STATUS_ERROR_POS        (1)
#define GPU_STATUS_ERROR_MASK       (1U << GPU_STATUS_ERROR_POS)
#define GPU_STATUS_SHADER_RDY_POS   (2) // ready for next instruction write
#define GPU_STATUS_SHADER_RDY_MASK  (1U << GPU_STATUS_SHADER_RDY_POS)
#define GPU_STATUS_IRQ_PENDING_POS  (3)
#define GPU_STATUS_IRQ_PENDING_MASK (1U << GPU_STATUS_IRQ_PENDING_POS)

// gpu error codes (read from GPU_REG_ERROR)
typedef enum {
    GPU_ERROR_NONE         = 0x00,
    GPU_ERROR_INVALID_OP   = 0x01,
    GPU_ERROR_MEMORY_FAULT = 0x02,
    GPU_ERROR_CMD_OVERFLOW = 0x03,
} gpu_error_code_t;

#endif // GPU_REGS_H_