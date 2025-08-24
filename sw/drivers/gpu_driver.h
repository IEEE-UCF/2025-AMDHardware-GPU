#ifndef GPU_DRIVER_H_
#define GPU_DRIVER_H_

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

// an opaque handle to a gpu device instance
typedef struct gpu_device_t gpu_device_t;

// -- Core Driver API --

// initializes the gpu device handle from a memory-mapped address
gpu_device_t* gpu_init(uintptr_t base_addr);

void gpu_destroy(gpu_device_t* dev);

void gpu_reset(gpu_device_t* dev);

void gpu_start(gpu_device_t* dev);

void gpu_stop(gpu_device_t* dev);

// -- Shader Loader API --

// loads a shader program into the gpu's instruction memory
bool gpu_load_shader(gpu_device_t* dev, const uint32_t* shader_code, size_t instruction_count);

// --- Status and Diagnostics API ---

bool gpu_is_busy(gpu_device_t* dev);

uint32_t gpu_get_status(gpu_device_t* dev);

uint32_t gpu_get_error(gpu_device_t* dev);

bool gpu_wait_for_idle(gpu_device_t* dev, uint32_t timeout_cycles);

#endif // GPU_DRIVER_H_