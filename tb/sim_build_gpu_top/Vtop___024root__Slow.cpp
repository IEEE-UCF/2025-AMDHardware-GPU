// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__VEC_SIZE;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__CORD_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__FB_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__FB_HEIGHT;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__INSTR_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__FIFO_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__NUM_MASTERS;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__NUM_SLAVES;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__VERTEX_POS_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__VERTEX_COLOR_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__VERTEX_UV_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__VERTEX_TOTAL_BITS_RAW;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__VERTEX_TOTAL_BITS;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__FIFO_DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ADDR_CONTROL;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ADDR_STATUS;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ADDR_VERTEX_BASE;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ADDR_VERTEX_COUNT;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ADDR_PC;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ADDR_SHADER_BASE;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__INSTR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__BRAM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ctrl_inst__DOT__QUEUE_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ctrl_inst__DOT__ADDR_CONTROL;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ctrl_inst__DOT__ADDR_STATUS;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ctrl_inst__DOT__CTRL_START_BIT;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ctrl_inst__DOT__CTRL_IRQ_CLEAR_BIT;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ctrl_inst__DOT__STATUS_BUSY_BIT;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ctrl_inst__DOT__STATUS_IRQ_PENDING_BIT;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ctrl_inst__DOT__STATUS_QUEUE_PENDING_BIT;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ctrl_inst__DOT__STATUS_QUEUE_COUNT_LOW;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__ctrl_inst__DOT__STATUS_QUEUE_COUNT_HIGH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__shader_loader_inst__DOT__INSTR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__shader_loader_inst__DOT__INSTR_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__core0__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__core0__DOT__VEC_SIZE;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__core0__DOT__NUM_REGS;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__core0__DOT__reg_file_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__core0__DOT__reg_file_inst__DOT__NUM_REGS;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__core0__DOT__reg_file_inst__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__core0__DOT__alu_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__core0__DOT__alu_inst__DOT__VECTOR_SIZE;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__interconnect_inst__DOT__NUM_MASTERS;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__interconnect_inst__DOT__NUM_SLAVES;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__interconnect_inst__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__interconnect_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__NUM_REQUESTERS;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__vf_inst__DOT__ATTR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__vf_inst__DOT__ATTRS_PER_VERTEX;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__vf_inst__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__vf_inst__DOT__VERTEXSTRIDE;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__rast_inst__DOT__CORD_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__frag_fifo__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__frag_fifo__DOT__DEPTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__frag_fifo__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__color_interp__DOT__ATTR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__color_interp__DOT__WEIGHT_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__u_interp__DOT__ATTR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__u_interp__DOT__WEIGHT_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__v_interp__DOT__ATTR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__v_interp__DOT__WEIGHT_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__fs_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__fs_inst__DOT__VEC_SIZE;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__fs_inst__DOT__CORD_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__VECTOR_SIZE;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__tex_unit__DOT__TEX_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__tex_unit__DOT__TEX_HEIGHT;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__tex_unit__DOT__CORD_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__tex_unit__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__tex_unit__DOT__TEX_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__fb_inst__DOT__SCREEN_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__fb_inst__DOT__SCREEN_HEIGHT;
constexpr IData/*31:0*/ Vtop___024root::gpu_top__DOT__fb_inst__DOT__COLOR_WIDTH;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
