// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_gpu_top;
    VerilatedScope __Vscope_gpu_top__color_interp;
    VerilatedScope __Vscope_gpu_top__core0;
    VerilatedScope __Vscope_gpu_top__core0__alu_inst;
    VerilatedScope __Vscope_gpu_top__core0__alu_inst__unnamedblk1;
    VerilatedScope __Vscope_gpu_top__core0__reg_file_inst;
    VerilatedScope __Vscope_gpu_top__core0__reg_file_inst__unnamedblk1;
    VerilatedScope __Vscope_gpu_top__ctrl_inst;
    VerilatedScope __Vscope_gpu_top__decoder_inst;
    VerilatedScope __Vscope_gpu_top__fb_inst;
    VerilatedScope __Vscope_gpu_top__frag_fifo;
    VerilatedScope __Vscope_gpu_top__fs_inst;
    VerilatedScope __Vscope_gpu_top__fs_inst__alu_inst;
    VerilatedScope __Vscope_gpu_top__fs_inst__alu_inst__unnamedblk1;
    VerilatedScope __Vscope_gpu_top__interconnect_inst;
    VerilatedScope __Vscope_gpu_top__interconnect_inst__arbiter_inst;
    VerilatedScope __Vscope_gpu_top__interconnect_inst__arbiter_inst__unnamedblk1;
    VerilatedScope __Vscope_gpu_top__interconnect_inst__arbiter_inst__unnamedblk1__unnamedblk2;
    VerilatedScope __Vscope_gpu_top__interconnect_inst__unnamedblk1;
    VerilatedScope __Vscope_gpu_top__interconnect_inst__unnamedblk2;
    VerilatedScope __Vscope_gpu_top__rast_inst;
    VerilatedScope __Vscope_gpu_top__reset_sync_inst;
    VerilatedScope __Vscope_gpu_top__shader_loader_inst;
    VerilatedScope __Vscope_gpu_top__tex_unit;
    VerilatedScope __Vscope_gpu_top__u_interp;
    VerilatedScope __Vscope_gpu_top__v_interp;
    VerilatedScope __Vscope_gpu_top__vf_inst;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
