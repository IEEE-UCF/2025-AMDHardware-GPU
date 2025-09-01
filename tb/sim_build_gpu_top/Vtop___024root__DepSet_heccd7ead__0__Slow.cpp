// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__clk__0 
        = vlSelfRef.gpu_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__glbl_rst_n__0 
        = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__reset_sync_inst__DOT__arst_n__0 
        = vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__arst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__reset_sync_inst__DOT__clk__0 
        = vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__ctrl_inst__DOT__clk__0 
        = vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__ctrl_inst__DOT__rst_n__0 
        = vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__shader_loader_inst__DOT__clk__0 
        = vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__core0__DOT__clk__0 
        = vlSelfRef.gpu_top__DOT__core0__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__core0__DOT__rst_n__0 
        = vlSelfRef.gpu_top__DOT__core0__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__clk__0 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__rst_n__0 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__clk__0 
        = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__rst_n__0 
        = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__vf_inst__DOT__clk__0 
        = vlSelfRef.gpu_top__DOT__vf_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__vf_inst__DOT__rst_n__0 
        = vlSelfRef.gpu_top__DOT__vf_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__rast_inst__DOT__clk__0 
        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__rast_inst__DOT__rst_n__0 
        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__frag_fifo__DOT__clk__0 
        = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__frag_fifo__DOT__rst_n__0 
        = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__fs_inst__DOT__clk__0 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__fs_inst__DOT__rst_n__0 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__tex_unit__DOT__clk__0 
        = vlSelfRef.gpu_top__DOT__tex_unit__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__tex_unit__DOT__rst_n__0 
        = vlSelfRef.gpu_top__DOT__tex_unit__DOT__rst_n;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__unnamedblk1__DOT__i = 0U;
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__unnamedblk1__DOT__i = 3U;
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__unnamedblk1__DOT__i = 4U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__unnamedblk1__DOT__i = 0U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__unnamedblk1__DOT__i = 3U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__unnamedblk2__DOT__i = 0U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__unnamedblk2__DOT__i = 1U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__unnamedblk2__DOT__i = 2U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__unnamedblk2__DOT__i = 3U;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__unnamedblk1__DOT__i = 0U;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__unnamedblk1__DOT__i = 3U;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__unnamedblk1__DOT__i = 4U;
    vlSelfRef.gpu_top__DOT__tex_unit__DOT__tex_x = 0U;
    vlSelfRef.gpu_top__DOT__tex_unit__DOT__tex_y = 0U;
    vlSelfRef.gpu_top__DOT__core0__DOT__i_mem_ready = 1U;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_ready = 1U;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode = 3U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/anime/Desktop/Programming/2025-AMDHardware-GPU/tb/../src/gpu_top.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_h7a202c27_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_haed2dea1_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_he91046c0_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ gpu_top__DOT__ctrl_inst__DOT____VdfgRegularize_ha90e0389_0_0;
    gpu_top__DOT__ctrl_inst__DOT____VdfgRegularize_ha90e0389_0_0 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.gpu_top__DOT__pipeline_start = vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__o_start_pipeline;
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_en 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_write_en;
    vlSelfRef.gpu_top__DOT__shader_exec_en = (2U == (IData)(vlSelfRef.gpu_top__DOT__pipe_state));
    vlSelfRef.gpu_top__DOT__rast_start = (3U == (IData)(vlSelfRef.gpu_top__DOT__pipe_state));
    vlSelfRef.gpu_top__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.gpu_top__DOT__texel_valid = vlSelfRef.gpu_top__DOT__tex_unit__DOT__o_data_valid;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_done 
        = (1U & (~ (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__is_running)));
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_fragment_x 
        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__x_reg;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_fragment_y 
        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__y_reg;
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__o_irq = vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__irq_pending;
    vlSelfRef.gpu_top__DOT__slave_rdata = vlSelfRef.gpu_top__DOT__bram_rdata;
    vlSelfRef.gpu_top__DOT__i_bus_wdata = vlSelfRef.i_bus_wdata;
    vlSelfRef.gpu_top__DOT__pixel_color[0U] = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[0U];
    vlSelfRef.gpu_top__DOT__pixel_color[1U] = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[1U];
    vlSelfRef.gpu_top__DOT__pixel_color[2U] = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[2U];
    vlSelfRef.gpu_top__DOT__pixel_color[3U] = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[3U];
    vlSelfRef.gpu_top__DOT__i_bus_we = vlSelfRef.i_bus_we;
    vlSelfRef.gpu_top__DOT__tex_unit__DOT__tex_addr 
        = (0xffffU & (VL_MULS_III(32, (IData)(0x100U), 
                                  VL_EXTENDS_II(32,8, (IData)(vlSelfRef.gpu_top__DOT__tex_unit__DOT__tex_y))) 
                      + VL_EXTENDS_II(16,8, (IData)(vlSelfRef.gpu_top__DOT__tex_unit__DOT__tex_x))));
    vlSelfRef.gpu_top__DOT__pipeline_busy = (0U != (IData)(vlSelfRef.gpu_top__DOT__pipe_state));
    vlSelfRef.gpu_top__DOT__clk = vlSelfRef.clk;
    vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__srst_n 
        = vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__rst_s2;
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_full 
        = (0x40U == (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__count_reg));
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__edge0 = 
        (0x1fffffU & (VL_MULS_III(21, (0x1fffffU & 
                                       (VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__x_reg)) 
                                        - VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v1_x_reg)))), 
                                  (0x1fffffU & (VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v2_y_reg)) 
                                                - VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v1_y_reg))))) 
                      - VL_MULS_III(21, (0x1fffffU 
                                         & (VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__y_reg)) 
                                            - VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v1_y_reg)))), 
                                    (0x1fffffU & (VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v2_x_reg)) 
                                                  - 
                                                  VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v1_x_reg)))))));
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__edge1 = 
        (0x1fffffU & (VL_MULS_III(21, (0x1fffffU & 
                                       (VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__x_reg)) 
                                        - VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v2_x_reg)))), 
                                  (0x1fffffU & (VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v0_y_reg)) 
                                                - VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v2_y_reg))))) 
                      - VL_MULS_III(21, (0x1fffffU 
                                         & (VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__y_reg)) 
                                            - VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v2_y_reg)))), 
                                    (0x1fffffU & (VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v0_x_reg)) 
                                                  - 
                                                  VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v2_x_reg)))))));
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__edge2 = 
        (0x1fffffU & (VL_MULS_III(21, (0x1fffffU & 
                                       (VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__x_reg)) 
                                        - VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v0_x_reg)))), 
                                  (0x1fffffU & (VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v1_y_reg)) 
                                                - VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v0_y_reg))))) 
                      - VL_MULS_III(21, (0x1fffffU 
                                         & (VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__y_reg)) 
                                            - VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v0_y_reg)))), 
                                    (0x1fffffU & (VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v1_x_reg)) 
                                                  - 
                                                  VL_EXTENDS_II(21,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__v0_x_reg)))))));
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_base_addr 
        = vlSelfRef.gpu_top__DOT__vertex_base_addr;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_vertex_index 
        = vlSelfRef.gpu_top__DOT__current_vertex;
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_empty 
        = (0U == (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__count_reg));
    vlSelfRef.gpu_top__DOT__pixel_x = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_x;
    vlSelfRef.gpu_top__DOT__pixel_y = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_y;
    vlSelfRef.gpu_top__DOT__i_bus_addr = vlSelfRef.i_bus_addr;
    vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__i_gpu_addr 
        = (0xffU & vlSelfRef.gpu_top__DOT__shader_pc);
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__priority_mask 
        = (0x3fU & VL_SHIFTR_III(6,6,32, 0x38U, VL_COUNTONES_I((IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__last_grant_reg))));
    vlSelfRef.gpu_top__DOT__pixel_we = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_valid;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_start_fetch 
        = (1U == (IData)(vlSelfRef.gpu_top__DOT__pipe_state));
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_r_data[0U] 
        = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__mem_array
        [vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rd_ptr_reg][0U];
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_r_data[1U] 
        = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__mem_array
        [vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rd_ptr_reg][1U];
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_r_data[2U] 
        = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__mem_array
        [vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rd_ptr_reg][2U];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[0U] 
        = vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[0U];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[1U] 
        = vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[1U];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[2U] 
        = vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[2U];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[3U] 
        = vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[3U];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[4U] 
        = vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[4U];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[5U] 
        = vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[5U];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[6U] 
        = vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[6U];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[7U] 
        = vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[7U];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[8U] 
        = vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[8U];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[9U] 
        = vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[9U];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[0xaU] 
        = vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[0xaU];
    vlSelfRef.gpu_top__DOT__core0__DOT__i_exec_en = vlSelfRef.gpu_top__DOT__shader_exec_en;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_start 
        = vlSelfRef.gpu_top__DOT__rast_start;
    vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__arst_n 
        = vlSelfRef.gpu_top__DOT__rst_n;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_texel_valid 
        = vlSelfRef.gpu_top__DOT__texel_valid;
    vlSelfRef.gpu_top__DOT__rasterizer_done = vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_done;
    vlSelfRef.gpu_top__DOT__frag_x = vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_fragment_x;
    vlSelfRef.gpu_top__DOT__frag_y = vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_fragment_y;
    vlSelfRef.gpu_top__DOT__controller_irq = vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__o_irq;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_slave_rdata 
        = vlSelfRef.gpu_top__DOT__slave_rdata;
    vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__i_host_wdata 
        = vlSelfRef.gpu_top__DOT__i_bus_wdata;
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__i_bus_wdata 
        = vlSelfRef.gpu_top__DOT__i_bus_wdata;
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_color 
        = vlSelfRef.gpu_top__DOT__pixel_color[0U];
    vlSelfRef.gpu_top__DOT__tex_unit__DOT__o_texel_color 
        = vlSelfRef.gpu_top__DOT__tex_unit__DOT__texture_mem
        [vlSelfRef.gpu_top__DOT__tex_unit__DOT__tex_addr];
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__i_pipeline_busy 
        = vlSelfRef.gpu_top__DOT__pipeline_busy;
    vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__clk 
        = vlSelfRef.gpu_top__DOT__clk;
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__clk = vlSelfRef.gpu_top__DOT__clk;
    vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__clk 
        = vlSelfRef.gpu_top__DOT__clk;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__clk = vlSelfRef.gpu_top__DOT__clk;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__clk = vlSelfRef.gpu_top__DOT__clk;
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__clk = vlSelfRef.gpu_top__DOT__clk;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__clk = vlSelfRef.gpu_top__DOT__clk;
    vlSelfRef.gpu_top__DOT__tex_unit__DOT__clk = vlSelfRef.gpu_top__DOT__clk;
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__clk = vlSelfRef.gpu_top__DOT__clk;
    vlSelfRef.gpu_top__DOT__core0__DOT__clk = vlSelfRef.gpu_top__DOT__clk;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__clk 
        = vlSelfRef.gpu_top__DOT__clk;
    vlSelfRef.gpu_top__DOT__glbl_rst_n = vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__srst_n;
    vlSelfRef.gpu_top__DOT__fifo_full = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_full;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_lambda0 
        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__edge0;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_lambda1 
        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__edge1;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_lambda2 
        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__edge2;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__is_inside 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,21, vlSelfRef.gpu_top__DOT__rast_inst__DOT__edge0)) 
           & (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,21, vlSelfRef.gpu_top__DOT__rast_inst__DOT__edge1)) 
              & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,21, vlSelfRef.gpu_top__DOT__rast_inst__DOT__edge2))));
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_mem_addr 
        = (vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_base_addr 
           + ((IData)(0x2cU) * (IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_vertex_index)));
    vlSelfRef.gpu_top__DOT__fifo_empty = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_empty;
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_x 
        = vlSelfRef.gpu_top__DOT__pixel_x;
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_y 
        = vlSelfRef.gpu_top__DOT__pixel_y;
    vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__i_host_we 
        = ((IData)(vlSelfRef.gpu_top__DOT__i_bus_we) 
           & (0x1000U <= vlSelfRef.gpu_top__DOT__i_bus_addr));
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__i_bus_we 
        = ((IData)(vlSelfRef.gpu_top__DOT__i_bus_we) 
           & ((0U == vlSelfRef.gpu_top__DOT__i_bus_addr) 
              | (4U == vlSelfRef.gpu_top__DOT__i_bus_addr)));
    vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__i_host_addr 
        = (0xffU & (vlSelfRef.gpu_top__DOT__i_bus_addr 
                    >> 2U));
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__i_bus_addr 
        = vlSelfRef.gpu_top__DOT__i_bus_addr;
    vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__o_gpu_instr 
        = vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__instruction_mem
        [vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__i_gpu_addr];
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_we 
        = vlSelfRef.gpu_top__DOT__pixel_we;
    __Vtableidx2 = (((IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_start_fetch) 
                     << 3U) | (((IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_ready) 
                                << 2U) | (IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__current_state)));
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__next_state 
        = Vtop__ConstPool__TABLE_h7a202c27_0[__Vtableidx2];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_mem_req 
        = Vtop__ConstPool__TABLE_haed2dea1_0[__Vtableidx2];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_fetch_done 
        = Vtop__ConstPool__TABLE_he91046c0_0[__Vtableidx2];
    vlSelfRef.gpu_top__DOT__fifo_rdata[0U] = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_r_data[0U];
    vlSelfRef.gpu_top__DOT__fifo_rdata[1U] = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_r_data[1U];
    vlSelfRef.gpu_top__DOT__fifo_rdata[2U] = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_r_data[2U];
    vlSelfRef.gpu_top__DOT__vertex_data[0U] = vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[0U];
    vlSelfRef.gpu_top__DOT__vertex_data[1U] = vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[1U];
    vlSelfRef.gpu_top__DOT__vertex_data[2U] = vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[2U];
    vlSelfRef.gpu_top__DOT__vertex_data[3U] = vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[3U];
    vlSelfRef.gpu_top__DOT__vertex_data[4U] = vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[4U];
    vlSelfRef.gpu_top__DOT__vertex_data[5U] = vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[5U];
    vlSelfRef.gpu_top__DOT__vertex_data[6U] = vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[6U];
    vlSelfRef.gpu_top__DOT__vertex_data[7U] = vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[7U];
    vlSelfRef.gpu_top__DOT__vertex_data[8U] = vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[8U];
    vlSelfRef.gpu_top__DOT__vertex_data[9U] = vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[9U];
    vlSelfRef.gpu_top__DOT__vertex_data[0xaU] = vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_vertex_data[0xaU];
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__o_mem_wdata 
        = vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_color;
    vlSelfRef.gpu_top__DOT__texel_color_single = vlSelfRef.gpu_top__DOT__tex_unit__DOT__o_texel_color;
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__clk 
        = vlSelfRef.gpu_top__DOT__core0__DOT__clk;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__clk 
        = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__clk;
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__rst_n 
        = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__tex_unit__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__core0__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__rst_n 
        = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__lambda0 = vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_lambda0;
    vlSelfRef.gpu_top__DOT__lambda1 = vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_lambda1;
    vlSelfRef.gpu_top__DOT__lambda2 = vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_lambda2;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_fragment_valid 
        = ((IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__is_inside) 
           & (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__is_running));
    vlSelfRef.gpu_top__DOT__fs_in_valid = (1U & (~ (IData)(vlSelfRef.gpu_top__DOT__fifo_empty)));
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__write_addr 
        = (0x7ffffU & (((IData)(0x280U) * (IData)(vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_y)) 
                       + (IData)(vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_x)));
    vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__o_host_rdata 
        = vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__instruction_mem
        [vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__i_host_addr];
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__o_bus_rdata = 0U;
    if ((4U == vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__i_bus_addr)) {
        vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__o_bus_rdata 
            = ((0xfffffff8U & vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__o_bus_rdata) 
               | (((0U < (IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__pending_starts_count)) 
                   << 2U) | (((IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__irq_pending) 
                              << 1U) | (IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__i_pipeline_busy))));
        vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__o_bus_rdata 
            = ((0xffffff0fU & vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__o_bus_rdata) 
               | ((IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__pending_starts_count) 
                  << 4U));
    }
    gpu_top__DOT__ctrl_inst__DOT____VdfgRegularize_ha90e0389_0_0 
        = ((IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__i_bus_we) 
           & (0U == vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__i_bus_addr));
    vlSelfRef.gpu_top__DOT__shader_instruction = vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__o_gpu_instr;
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__o_mem_req 
        = vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_we;
    vlSelfRef.gpu_top__DOT__vertex_fetch_done = vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_fetch_done;
    vlSelfRef.gpu_top__DOT__fs_in_x = (0x3ffU & (vlSelfRef.gpu_top__DOT__fifo_rdata[2U] 
                                                 >> 9U));
    vlSelfRef.gpu_top__DOT__fs_in_y = (0x3ffU & ((vlSelfRef.gpu_top__DOT__fifo_rdata[2U] 
                                                  << 1U) 
                                                 | (vlSelfRef.gpu_top__DOT__fifo_rdata[1U] 
                                                    >> 0x1fU)));
    vlSelfRef.gpu_top__DOT__fs_in_lambda0 = (0x1fffffU 
                                             & (vlSelfRef.gpu_top__DOT__fifo_rdata[1U] 
                                                >> 0xaU));
    vlSelfRef.gpu_top__DOT__fs_in_lambda1 = (0x1fffffU 
                                             & ((vlSelfRef.gpu_top__DOT__fifo_rdata[1U] 
                                                 << 0xbU) 
                                                | (vlSelfRef.gpu_top__DOT__fifo_rdata[0U] 
                                                   >> 0x15U)));
    vlSelfRef.gpu_top__DOT__fs_in_lambda2 = (0x1fffffU 
                                             & vlSelfRef.gpu_top__DOT__fifo_rdata[0U]);
    vlSelfRef.gpu_top__DOT__v0x = (0x3ffU & (vlSelfRef.gpu_top__DOT__vertex_data[1U] 
                                             >> 0x12U));
    vlSelfRef.gpu_top__DOT__v0y = (0x3ffU & (vlSelfRef.gpu_top__DOT__vertex_data[1U] 
                                             >> 8U));
    vlSelfRef.gpu_top__DOT__v1x = (0x3ffU & ((vlSelfRef.gpu_top__DOT__vertex_data[1U] 
                                              << 2U) 
                                             | (vlSelfRef.gpu_top__DOT__vertex_data[0U] 
                                                >> 0x1eU)));
    vlSelfRef.gpu_top__DOT__v1y = (0x3ffU & (vlSelfRef.gpu_top__DOT__vertex_data[0U] 
                                             >> 0x14U));
    vlSelfRef.gpu_top__DOT__v2x = (0x3ffU & (vlSelfRef.gpu_top__DOT__vertex_data[0U] 
                                             >> 0xaU));
    vlSelfRef.gpu_top__DOT__v2y = (0x3ffU & vlSelfRef.gpu_top__DOT__vertex_data[0U]);
    vlSelfRef.gpu_top__DOT__v0_color = ((vlSelfRef.gpu_top__DOT__vertex_data[4U] 
                                         << 4U) | (
                                                   vlSelfRef.gpu_top__DOT__vertex_data[3U] 
                                                   >> 0x1cU));
    vlSelfRef.gpu_top__DOT__v1_color = ((vlSelfRef.gpu_top__DOT__vertex_data[3U] 
                                         << 4U) | (
                                                   vlSelfRef.gpu_top__DOT__vertex_data[2U] 
                                                   >> 0x1cU));
    vlSelfRef.gpu_top__DOT__v2_color = ((vlSelfRef.gpu_top__DOT__vertex_data[2U] 
                                         << 4U) | (
                                                   vlSelfRef.gpu_top__DOT__vertex_data[1U] 
                                                   >> 0x1cU));
    vlSelfRef.gpu_top__DOT__v0_u = ((vlSelfRef.gpu_top__DOT__vertex_data[0xaU] 
                                     << 4U) | (vlSelfRef.gpu_top__DOT__vertex_data[9U] 
                                               >> 0x1cU));
    vlSelfRef.gpu_top__DOT__v0_v = ((vlSelfRef.gpu_top__DOT__vertex_data[9U] 
                                     << 4U) | (vlSelfRef.gpu_top__DOT__vertex_data[8U] 
                                               >> 0x1cU));
    vlSelfRef.gpu_top__DOT__v1_u = ((vlSelfRef.gpu_top__DOT__vertex_data[8U] 
                                     << 4U) | (vlSelfRef.gpu_top__DOT__vertex_data[7U] 
                                               >> 0x1cU));
    vlSelfRef.gpu_top__DOT__v1_v = ((vlSelfRef.gpu_top__DOT__vertex_data[7U] 
                                     << 4U) | (vlSelfRef.gpu_top__DOT__vertex_data[6U] 
                                               >> 0x1cU));
    vlSelfRef.gpu_top__DOT__v2_u = ((vlSelfRef.gpu_top__DOT__vertex_data[6U] 
                                     << 4U) | (vlSelfRef.gpu_top__DOT__vertex_data[5U] 
                                               >> 0x1cU));
    vlSelfRef.gpu_top__DOT__v2_v = ((vlSelfRef.gpu_top__DOT__vertex_data[5U] 
                                     << 4U) | (vlSelfRef.gpu_top__DOT__vertex_data[4U] 
                                               >> 0x1cU));
    vlSelfRef.gpu_top__DOT__master_wdata[0U] = 0U;
    vlSelfRef.gpu_top__DOT__master_wdata[1U] = 0U;
    vlSelfRef.gpu_top__DOT__master_wdata[2U] = vlSelfRef.gpu_top__DOT__fb_inst__DOT__o_mem_wdata;
    vlSelfRef.gpu_top__DOT__texel_color_vec[0U] = vlSelfRef.gpu_top__DOT__texel_color_single;
    vlSelfRef.gpu_top__DOT__texel_color_vec[1U] = vlSelfRef.gpu_top__DOT__texel_color_single;
    vlSelfRef.gpu_top__DOT__texel_color_vec[2U] = vlSelfRef.gpu_top__DOT__texel_color_single;
    vlSelfRef.gpu_top__DOT__texel_color_vec[3U] = vlSelfRef.gpu_top__DOT__texel_color_single;
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__rst_n 
        = vlSelfRef.gpu_top__DOT__core0__DOT__rst_n;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__rst_n 
        = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__rst_n;
    vlSelfRef.gpu_top__DOT__fifo_wdata[0U] = (IData)(
                                                     (((QData)((IData)(vlSelfRef.gpu_top__DOT__lambda0)) 
                                                       << 0x2aU) 
                                                      | (((QData)((IData)(vlSelfRef.gpu_top__DOT__lambda1)) 
                                                          << 0x15U) 
                                                         | (QData)((IData)(vlSelfRef.gpu_top__DOT__lambda2)))));
    vlSelfRef.gpu_top__DOT__fifo_wdata[1U] = (((IData)(vlSelfRef.gpu_top__DOT__frag_y) 
                                               << 0x1fU) 
                                              | (IData)(
                                                        ((((QData)((IData)(vlSelfRef.gpu_top__DOT__lambda0)) 
                                                           << 0x2aU) 
                                                          | (((QData)((IData)(vlSelfRef.gpu_top__DOT__lambda1)) 
                                                              << 0x15U) 
                                                             | (QData)((IData)(vlSelfRef.gpu_top__DOT__lambda2)))) 
                                                         >> 0x20U)));
    vlSelfRef.gpu_top__DOT__fifo_wdata[2U] = ((0x7fe00U 
                                               & vlSelfRef.gpu_top__DOT__fifo_wdata[2U]) 
                                              | (0x7ffffU 
                                                 & ((IData)(vlSelfRef.gpu_top__DOT__frag_y) 
                                                    >> 1U)));
    vlSelfRef.gpu_top__DOT__fifo_wdata[2U] = ((0x1ffU 
                                               & vlSelfRef.gpu_top__DOT__fifo_wdata[2U]) 
                                              | (0x7ffffU 
                                                 & ((IData)(vlSelfRef.gpu_top__DOT__frag_x) 
                                                    << 9U)));
    vlSelfRef.gpu_top__DOT__rast_frag_valid = vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_fragment_valid;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_valid 
        = vlSelfRef.gpu_top__DOT__fs_in_valid;
    vlSelfRef.gpu_top__DOT__fifo_rd = ((~ (IData)(vlSelfRef.gpu_top__DOT__fifo_full)) 
                                       & (IData)(vlSelfRef.gpu_top__DOT__fs_in_valid));
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__o_mem_addr 
        = vlSelfRef.gpu_top__DOT__fb_inst__DOT__write_addr;
    vlSelfRef.gpu_top__DOT__shader_host_rdata = vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__o_host_rdata;
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__irq_clear_cmd 
        = ((IData)(gpu_top__DOT__ctrl_inst__DOT____VdfgRegularize_ha90e0389_0_0) 
           & (vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__i_bus_wdata 
              >> 1U));
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__start_cmd 
        = ((IData)(gpu_top__DOT__ctrl_inst__DOT____VdfgRegularize_ha90e0389_0_0) 
           & vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__i_bus_wdata);
    vlSelfRef.gpu_top__DOT__decoder_inst__DOT__i_instruction_word 
        = vlSelfRef.gpu_top__DOT__shader_instruction;
    vlSelfRef.gpu_top__DOT__master_req = (((IData)(vlSelfRef.gpu_top__DOT__fb_inst__DOT__o_mem_req) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.gpu_top__DOT__core0__DOT__o_mem_req) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_mem_req)));
    vlSelfRef.gpu_top__DOT__next_pipe_state = vlSelfRef.gpu_top__DOT__pipe_state;
    if ((4U & (IData)(vlSelfRef.gpu_top__DOT__pipe_state))) {
        vlSelfRef.gpu_top__DOT__next_pipe_state = 0U;
    } else if ((2U & (IData)(vlSelfRef.gpu_top__DOT__pipe_state))) {
        if ((1U & (IData)(vlSelfRef.gpu_top__DOT__pipe_state))) {
            if (vlSelfRef.gpu_top__DOT__rasterizer_done) {
                vlSelfRef.gpu_top__DOT__next_pipe_state 
                    = (((IData)(vlSelfRef.gpu_top__DOT__current_vertex) 
                        >= (IData)(vlSelfRef.gpu_top__DOT__vertex_count))
                        ? 5U : 1U);
            }
        } else {
            vlSelfRef.gpu_top__DOT__next_pipe_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.gpu_top__DOT__pipe_state))) {
        if (vlSelfRef.gpu_top__DOT__vertex_fetch_done) {
            vlSelfRef.gpu_top__DOT__next_pipe_state = 2U;
        }
    } else if (vlSelfRef.gpu_top__DOT__controller_start) {
        vlSelfRef.gpu_top__DOT__next_pipe_state = 1U;
    }
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_x 
        = vlSelfRef.gpu_top__DOT__fs_in_x;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_y 
        = vlSelfRef.gpu_top__DOT__fs_in_y;
    vlSelfRef.gpu_top__DOT__color_interp__DOT__i_lambda0 
        = vlSelfRef.gpu_top__DOT__fs_in_lambda0;
    vlSelfRef.gpu_top__DOT__u_interp__DOT__i_lambda0 
        = vlSelfRef.gpu_top__DOT__fs_in_lambda0;
    vlSelfRef.gpu_top__DOT__v_interp__DOT__i_lambda0 
        = vlSelfRef.gpu_top__DOT__fs_in_lambda0;
    vlSelfRef.gpu_top__DOT__color_interp__DOT__i_lambda1 
        = vlSelfRef.gpu_top__DOT__fs_in_lambda1;
    vlSelfRef.gpu_top__DOT__u_interp__DOT__i_lambda1 
        = vlSelfRef.gpu_top__DOT__fs_in_lambda1;
    vlSelfRef.gpu_top__DOT__v_interp__DOT__i_lambda1 
        = vlSelfRef.gpu_top__DOT__fs_in_lambda1;
    vlSelfRef.gpu_top__DOT__color_interp__DOT__i_lambda2 
        = vlSelfRef.gpu_top__DOT__fs_in_lambda2;
    vlSelfRef.gpu_top__DOT__u_interp__DOT__i_lambda2 
        = vlSelfRef.gpu_top__DOT__fs_in_lambda2;
    vlSelfRef.gpu_top__DOT__v_interp__DOT__i_lambda2 
        = vlSelfRef.gpu_top__DOT__fs_in_lambda2;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_x 
        = vlSelfRef.gpu_top__DOT__v0x;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_y 
        = vlSelfRef.gpu_top__DOT__v0y;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_x 
        = vlSelfRef.gpu_top__DOT__v1x;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_y 
        = vlSelfRef.gpu_top__DOT__v1y;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_x 
        = vlSelfRef.gpu_top__DOT__v2x;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_y 
        = vlSelfRef.gpu_top__DOT__v2y;
    vlSelfRef.gpu_top__DOT__color_interp__DOT__i_attr0 
        = vlSelfRef.gpu_top__DOT__v0_color;
    vlSelfRef.gpu_top__DOT__color_interp__DOT__i_attr1 
        = vlSelfRef.gpu_top__DOT__v1_color;
    vlSelfRef.gpu_top__DOT__color_interp__DOT__i_attr2 
        = vlSelfRef.gpu_top__DOT__v2_color;
    vlSelfRef.gpu_top__DOT__u_interp__DOT__i_attr0 
        = vlSelfRef.gpu_top__DOT__v0_u;
    vlSelfRef.gpu_top__DOT__v_interp__DOT__i_attr0 
        = vlSelfRef.gpu_top__DOT__v0_v;
    vlSelfRef.gpu_top__DOT__u_interp__DOT__i_attr1 
        = vlSelfRef.gpu_top__DOT__v1_u;
    vlSelfRef.gpu_top__DOT__v_interp__DOT__i_attr1 
        = vlSelfRef.gpu_top__DOT__v1_v;
    vlSelfRef.gpu_top__DOT__u_interp__DOT__i_attr2 
        = vlSelfRef.gpu_top__DOT__v2_u;
    vlSelfRef.gpu_top__DOT__v_interp__DOT__i_attr2 
        = vlSelfRef.gpu_top__DOT__v2_v;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_wdata[0U] 
        = vlSelfRef.gpu_top__DOT__master_wdata[0U];
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_wdata[1U] 
        = vlSelfRef.gpu_top__DOT__master_wdata[1U];
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_wdata[2U] 
        = vlSelfRef.gpu_top__DOT__master_wdata[2U];
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_texel_color[0U] 
        = vlSelfRef.gpu_top__DOT__texel_color_vec[0U];
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_texel_color[1U] 
        = vlSelfRef.gpu_top__DOT__texel_color_vec[1U];
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_texel_color[2U] 
        = vlSelfRef.gpu_top__DOT__texel_color_vec[2U];
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_texel_color[3U] 
        = vlSelfRef.gpu_top__DOT__texel_color_vec[3U];
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_w_data[0U] 
        = vlSelfRef.gpu_top__DOT__fifo_wdata[0U];
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_w_data[1U] 
        = vlSelfRef.gpu_top__DOT__fifo_wdata[1U];
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_w_data[2U] 
        = vlSelfRef.gpu_top__DOT__fifo_wdata[2U];
    vlSelfRef.gpu_top__DOT__fifo_wr = vlSelfRef.gpu_top__DOT__rast_frag_valid;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_tex_req_valid 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_valid;
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_rd_en 
        = vlSelfRef.gpu_top__DOT__fifo_rd;
    vlSelfRef.gpu_top__DOT__master_addr[0U] = (IData)((QData)((IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_mem_addr)));
    vlSelfRef.gpu_top__DOT__master_addr[1U] = (IData)(
                                                      ((QData)((IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_mem_addr)) 
                                                       >> 0x20U));
    vlSelfRef.gpu_top__DOT__master_addr[2U] = vlSelfRef.gpu_top__DOT__fb_inst__DOT__o_mem_addr;
    if ((0x1000U <= vlSelfRef.gpu_top__DOT__i_bus_addr)) {
        vlSelfRef.gpu_top__DOT__o_bus_rdata = vlSelfRef.gpu_top__DOT__shader_host_rdata;
    } else {
        vlSelfRef.gpu_top__DOT__o_bus_rdata = 0U;
        vlSelfRef.gpu_top__DOT__o_bus_rdata = ((4U 
                                                == vlSelfRef.gpu_top__DOT__i_bus_addr)
                                                ? (
                                                   ((IData)(vlSelfRef.gpu_top__DOT__controller_irq) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.gpu_top__DOT__pipeline_busy))
                                                : (
                                                   (8U 
                                                    == vlSelfRef.gpu_top__DOT__i_bus_addr)
                                                    ? vlSelfRef.gpu_top__DOT__vertex_base_addr
                                                    : 
                                                   ((0xcU 
                                                     == vlSelfRef.gpu_top__DOT__i_bus_addr)
                                                     ? (IData)(vlSelfRef.gpu_top__DOT__vertex_count)
                                                     : 
                                                    ((0x10U 
                                                      == vlSelfRef.gpu_top__DOT__i_bus_addr)
                                                      ? vlSelfRef.gpu_top__DOT__shader_pc
                                                      : 0U))));
    }
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__fire_start_pulse 
        = ((~ (IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__i_pipeline_busy)) 
           & ((0U < (IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__pending_starts_count)) 
              | (IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__start_cmd)));
    vlSelfRef.gpu_top__DOT__decoder_inst__DOT__o_imm 
        = (0xfffU & vlSelfRef.gpu_top__DOT__decoder_inst__DOT__i_instruction_word);
    vlSelfRef.gpu_top__DOT__decoder_inst__DOT__o_rd_addr 
        = (0xfU & (vlSelfRef.gpu_top__DOT__decoder_inst__DOT__i_instruction_word 
                   >> 0x17U));
    vlSelfRef.gpu_top__DOT__decoder_inst__DOT__o_opcode 
        = (vlSelfRef.gpu_top__DOT__decoder_inst__DOT__i_instruction_word 
           >> 0x1bU);
    vlSelfRef.gpu_top__DOT__decoder_inst__DOT__o_rs1_addr 
        = (0xfU & (vlSelfRef.gpu_top__DOT__decoder_inst__DOT__i_instruction_word 
                   >> 0x13U));
    vlSelfRef.gpu_top__DOT__decoder_inst__DOT__o_rs2_addr 
        = (0xfU & (vlSelfRef.gpu_top__DOT__decoder_inst__DOT__i_instruction_word 
                   >> 0xfU));
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_req 
        = vlSelfRef.gpu_top__DOT__master_req;
    vlSelfRef.gpu_top__DOT__color_interp__DOT__term0 
        = (0x1fffffffffffffULL & VL_MULS_QQQ(53, (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,32, vlSelfRef.gpu_top__DOT__color_interp__DOT__i_attr0)), 
                                             (0x1fffffffffffffULL 
                                              & VL_EXTENDS_QI(53,21, vlSelfRef.gpu_top__DOT__color_interp__DOT__i_lambda0))));
    vlSelfRef.gpu_top__DOT__color_interp__DOT__term1 
        = (0x1fffffffffffffULL & VL_MULS_QQQ(53, (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,32, vlSelfRef.gpu_top__DOT__color_interp__DOT__i_attr1)), 
                                             (0x1fffffffffffffULL 
                                              & VL_EXTENDS_QI(53,21, vlSelfRef.gpu_top__DOT__color_interp__DOT__i_lambda1))));
    vlSelfRef.gpu_top__DOT__color_interp__DOT__term2 
        = (0x1fffffffffffffULL & VL_MULS_QQQ(53, (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,32, vlSelfRef.gpu_top__DOT__color_interp__DOT__i_attr2)), 
                                             (0x1fffffffffffffULL 
                                              & VL_EXTENDS_QI(53,21, vlSelfRef.gpu_top__DOT__color_interp__DOT__i_lambda2))));
    vlSelfRef.gpu_top__DOT__u_interp__DOT__term0 = 
        (0x1fffffffffffffULL & VL_MULS_QQQ(53, (0x1fffffffffffffULL 
                                                & VL_EXTENDS_QI(53,32, vlSelfRef.gpu_top__DOT__u_interp__DOT__i_attr0)), 
                                           (0x1fffffffffffffULL 
                                            & VL_EXTENDS_QI(53,21, vlSelfRef.gpu_top__DOT__u_interp__DOT__i_lambda0))));
    vlSelfRef.gpu_top__DOT__v_interp__DOT__term0 = 
        (0x1fffffffffffffULL & VL_MULS_QQQ(53, (0x1fffffffffffffULL 
                                                & VL_EXTENDS_QI(53,32, vlSelfRef.gpu_top__DOT__v_interp__DOT__i_attr0)), 
                                           (0x1fffffffffffffULL 
                                            & VL_EXTENDS_QI(53,21, vlSelfRef.gpu_top__DOT__v_interp__DOT__i_lambda0))));
    vlSelfRef.gpu_top__DOT__u_interp__DOT__term1 = 
        (0x1fffffffffffffULL & VL_MULS_QQQ(53, (0x1fffffffffffffULL 
                                                & VL_EXTENDS_QI(53,32, vlSelfRef.gpu_top__DOT__u_interp__DOT__i_attr1)), 
                                           (0x1fffffffffffffULL 
                                            & VL_EXTENDS_QI(53,21, vlSelfRef.gpu_top__DOT__u_interp__DOT__i_lambda1))));
    vlSelfRef.gpu_top__DOT__v_interp__DOT__term1 = 
        (0x1fffffffffffffULL & VL_MULS_QQQ(53, (0x1fffffffffffffULL 
                                                & VL_EXTENDS_QI(53,32, vlSelfRef.gpu_top__DOT__v_interp__DOT__i_attr1)), 
                                           (0x1fffffffffffffULL 
                                            & VL_EXTENDS_QI(53,21, vlSelfRef.gpu_top__DOT__v_interp__DOT__i_lambda1))));
    vlSelfRef.gpu_top__DOT__u_interp__DOT__term2 = 
        (0x1fffffffffffffULL & VL_MULS_QQQ(53, (0x1fffffffffffffULL 
                                                & VL_EXTENDS_QI(53,32, vlSelfRef.gpu_top__DOT__u_interp__DOT__i_attr2)), 
                                           (0x1fffffffffffffULL 
                                            & VL_EXTENDS_QI(53,21, vlSelfRef.gpu_top__DOT__u_interp__DOT__i_lambda2))));
    vlSelfRef.gpu_top__DOT__v_interp__DOT__term2 = 
        (0x1fffffffffffffULL & VL_MULS_QQQ(53, (0x1fffffffffffffULL 
                                                & VL_EXTENDS_QI(53,32, vlSelfRef.gpu_top__DOT__v_interp__DOT__i_attr2)), 
                                           (0x1fffffffffffffULL 
                                            & VL_EXTENDS_QI(53,21, vlSelfRef.gpu_top__DOT__v_interp__DOT__i_lambda2))));
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[0U] 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_texel_color[0U];
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[1U] 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_texel_color[1U];
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[2U] 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_texel_color[2U];
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[3U] 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_texel_color[3U];
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_wr_en 
        = vlSelfRef.gpu_top__DOT__fifo_wr;
    vlSelfRef.gpu_top__DOT__tex_req_valid = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_tex_req_valid;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_addr[0U] 
        = vlSelfRef.gpu_top__DOT__master_addr[0U];
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_addr[1U] 
        = vlSelfRef.gpu_top__DOT__master_addr[1U];
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_addr[2U] 
        = vlSelfRef.gpu_top__DOT__master_addr[2U];
    vlSelfRef.o_bus_rdata = vlSelfRef.gpu_top__DOT__o_bus_rdata;
    vlSelfRef.gpu_top__DOT__shader_imm = vlSelfRef.gpu_top__DOT__decoder_inst__DOT__o_imm;
    vlSelfRef.gpu_top__DOT__shader_rd = vlSelfRef.gpu_top__DOT__decoder_inst__DOT__o_rd_addr;
    vlSelfRef.gpu_top__DOT__shader_opcode = vlSelfRef.gpu_top__DOT__decoder_inst__DOT__o_opcode;
    vlSelfRef.gpu_top__DOT__shader_rs1 = vlSelfRef.gpu_top__DOT__decoder_inst__DOT__o_rs1_addr;
    vlSelfRef.gpu_top__DOT__shader_rs2 = vlSelfRef.gpu_top__DOT__decoder_inst__DOT__o_rs2_addr;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__i_requests 
        = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_req;
    vlSelfRef.gpu_top__DOT__color_interp__DOT__sum_terms 
        = (0x7fffffffffffffULL & (VL_EXTENDS_QQ(55,53, vlSelfRef.gpu_top__DOT__color_interp__DOT__term0) 
                                  + (VL_EXTENDS_QQ(55,53, vlSelfRef.gpu_top__DOT__color_interp__DOT__term1) 
                                     + VL_EXTENDS_QQ(55,53, vlSelfRef.gpu_top__DOT__color_interp__DOT__term2))));
    vlSelfRef.gpu_top__DOT__u_interp__DOT__sum_terms 
        = (0x7fffffffffffffULL & (VL_EXTENDS_QQ(55,53, vlSelfRef.gpu_top__DOT__u_interp__DOT__term0) 
                                  + (VL_EXTENDS_QQ(55,53, vlSelfRef.gpu_top__DOT__u_interp__DOT__term1) 
                                     + VL_EXTENDS_QQ(55,53, vlSelfRef.gpu_top__DOT__u_interp__DOT__term2))));
    vlSelfRef.gpu_top__DOT__v_interp__DOT__sum_terms 
        = (0x7fffffffffffffULL & (VL_EXTENDS_QQ(55,53, vlSelfRef.gpu_top__DOT__v_interp__DOT__term0) 
                                  + (VL_EXTENDS_QQ(55,53, vlSelfRef.gpu_top__DOT__v_interp__DOT__term1) 
                                     + VL_EXTENDS_QQ(55,53, vlSelfRef.gpu_top__DOT__v_interp__DOT__term2))));
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__wr_ptr_next 
        = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__wr_ptr_reg;
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rd_ptr_next 
        = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rd_ptr_reg;
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__count_next 
        = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__count_reg;
    if (((((IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_wr_en) 
           & (~ (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_full))) 
          & (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_rd_en)) 
         & (~ (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_empty)))) {
        vlSelfRef.gpu_top__DOT__frag_fifo__DOT__wr_ptr_next 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__wr_ptr_reg)));
        vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rd_ptr_next 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rd_ptr_reg)));
        vlSelfRef.gpu_top__DOT__frag_fifo__DOT__count_next 
            = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__count_reg;
    } else {
        if (((IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_wr_en) 
             & (~ (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_full)))) {
            vlSelfRef.gpu_top__DOT__frag_fifo__DOT__wr_ptr_next 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__wr_ptr_reg)));
            vlSelfRef.gpu_top__DOT__frag_fifo__DOT__count_next 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__count_reg)));
        } else if (((IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_rd_en) 
                    & (~ (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_empty)))) {
            vlSelfRef.gpu_top__DOT__frag_fifo__DOT__count_next 
                = (0x7fU & ((IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__count_reg) 
                            - (IData)(1U)));
        }
        if ((1U & (~ ((IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_wr_en) 
                      & (~ (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_full)))))) {
            if (((IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_rd_en) 
                 & (~ (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_empty)))) {
                vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rd_ptr_next 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rd_ptr_reg)));
            }
        }
    }
    vlSelfRef.gpu_top__DOT__tex_unit__DOT__i_req_valid 
        = vlSelfRef.gpu_top__DOT__tex_req_valid;
    vlSelfRef.gpu_top__DOT__core0__DOT__i_rd_addr = vlSelfRef.gpu_top__DOT__shader_rd;
    vlSelfRef.gpu_top__DOT__core0__DOT__i_opcode = vlSelfRef.gpu_top__DOT__shader_opcode;
    vlSelfRef.gpu_top__DOT__core0__DOT__i_rs1_addr 
        = vlSelfRef.gpu_top__DOT__shader_rs1;
    vlSelfRef.gpu_top__DOT__core0__DOT__i_rs2_addr 
        = vlSelfRef.gpu_top__DOT__shader_rs2;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state = 0U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__grant_found = 0U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__masked_requests 
        = ((((IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__i_requests) 
             << 3U) | (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__i_requests)) 
           & (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__priority_mask));
    if ((0U != (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__i_requests))) {
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 1U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 5U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 6U;
        if ((1U & ((IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__masked_requests) 
                   & (~ (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__grant_found))))) {
            vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state 
                = (1U | (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state));
            vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__grant_found = 1U;
        }
        if ((1U & (((IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__masked_requests) 
                    >> 1U) & (~ (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__grant_found))))) {
            vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state 
                = (2U | (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state));
            vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__grant_found = 1U;
        }
        if ((1U & (((IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__masked_requests) 
                    >> 2U) & (~ (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__grant_found))))) {
            vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state 
                = (4U | (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state));
            vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__grant_found = 1U;
        }
        if ((1U & (((IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__masked_requests) 
                    >> 3U) & (~ (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__grant_found))))) {
            vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state 
                = (1U | (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state));
            vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__grant_found = 1U;
        }
        if ((1U & (((IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__masked_requests) 
                    >> 4U) & (~ (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__grant_found))))) {
            vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state 
                = (2U | (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state));
            vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__grant_found = 1U;
        }
        if ((IData)((((IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__masked_requests) 
                      >> 5U) & (~ (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__grant_found))))) {
            vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state 
                = (4U | (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state));
            vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__grant_found = 1U;
        }
    }
    vlSelfRef.gpu_top__DOT__color_interp__DOT__o_interpolated_attr 
        = (IData)((0x7fffffffffffffULL & VL_SHIFTRS_QQI(55,55,32, vlSelfRef.gpu_top__DOT__color_interp__DOT__sum_terms, 0x15U)));
    vlSelfRef.gpu_top__DOT__u_interp__DOT__o_interpolated_attr 
        = (IData)((0x7fffffffffffffULL & VL_SHIFTRS_QQI(55,55,32, vlSelfRef.gpu_top__DOT__u_interp__DOT__sum_terms, 0x15U)));
    vlSelfRef.gpu_top__DOT__v_interp__DOT__o_interpolated_attr 
        = (IData)((0x7fffffffffffffULL & VL_SHIFTRS_QQI(55,55,32, vlSelfRef.gpu_top__DOT__v_interp__DOT__sum_terms, 0x15U)));
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_addr 
        = vlSelfRef.gpu_top__DOT__core0__DOT__i_rd_addr;
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode 
        = vlSelfRef.gpu_top__DOT__core0__DOT__i_opcode;
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_rd_addr_a 
        = vlSelfRef.gpu_top__DOT__core0__DOT__i_rs1_addr;
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_rd_addr_b 
        = vlSelfRef.gpu_top__DOT__core0__DOT__i_rs2_addr;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__o_grants 
        = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state;
    vlSelfRef.gpu_top__DOT__interpolated_color = vlSelfRef.gpu_top__DOT__color_interp__DOT__o_interpolated_attr;
    vlSelfRef.gpu_top__DOT__interpolated_u = vlSelfRef.gpu_top__DOT__u_interp__DOT__o_interpolated_attr;
    vlSelfRef.gpu_top__DOT__interpolated_v = vlSelfRef.gpu_top__DOT__v_interp__DOT__o_interpolated_attr;
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_a[0U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers
        [vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_rd_addr_a][0U];
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_a[1U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers
        [vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_rd_addr_a][1U];
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_a[2U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers
        [vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_rd_addr_a][2U];
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_a[3U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers
        [vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_rd_addr_a][3U];
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_b[0U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers
        [vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_rd_addr_b][0U];
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_b[1U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers
        [vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_rd_addr_b][1U];
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_b[2U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers
        [vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_rd_addr_b][2U];
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_b[3U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers
        [vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_rd_addr_b][3U];
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__grants 
        = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__o_grants;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_color[0U] 
        = vlSelfRef.gpu_top__DOT__interpolated_color;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_color[1U] 
        = vlSelfRef.gpu_top__DOT__interpolated_color;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_color[2U] 
        = vlSelfRef.gpu_top__DOT__interpolated_color;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_color[3U] 
        = vlSelfRef.gpu_top__DOT__interpolated_color;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_tex_coord 
        = (((QData)((IData)(vlSelfRef.gpu_top__DOT__interpolated_v)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.gpu_top__DOT__interpolated_u)));
    vlSelfRef.gpu_top__DOT__core0__DOT__rs1_data[0U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_a[0U];
    vlSelfRef.gpu_top__DOT__core0__DOT__rs1_data[1U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_a[1U];
    vlSelfRef.gpu_top__DOT__core0__DOT__rs1_data[2U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_a[2U];
    vlSelfRef.gpu_top__DOT__core0__DOT__rs1_data[3U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_a[3U];
    vlSelfRef.gpu_top__DOT__core0__DOT__rs2_data[0U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_b[0U];
    vlSelfRef.gpu_top__DOT__core0__DOT__rs2_data[1U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_b[1U];
    vlSelfRef.gpu_top__DOT__core0__DOT__rs2_data[2U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_b[2U];
    vlSelfRef.gpu_top__DOT__core0__DOT__rs2_data[3U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_b[3U];
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_index = 0U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_wdata = 0U;
    if ((1U & (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__grants))) {
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_index = 0U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_wdata 
            = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_wdata[0U];
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_addr = 0U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_addr 
            = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_addr[0U];
    } else {
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_addr = 0U;
    }
    if ((2U & (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__grants))) {
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_index = 1U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_wdata 
            = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_wdata[1U];
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_addr 
            = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_addr[1U];
    }
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[0U] 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_color[0U];
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[1U] 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_color[1U];
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[2U] 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_color[2U];
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[3U] 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_color[3U];
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_tex_v_coord 
        = (IData)((vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_tex_coord 
                   >> 0x20U));
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_tex_u_coord 
        = (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_tex_coord);
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[0U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__rs1_data[0U];
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[1U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__rs1_data[1U];
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[2U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__rs1_data[2U];
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[3U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__rs1_data[3U];
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[0U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__rs2_data[0U];
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[1U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__rs2_data[1U];
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[2U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__rs2_data[2U];
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[3U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__rs2_data[3U];
    if ((4U & (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__grants))) {
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_index = 2U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_wdata 
            = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_wdata[2U];
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_addr 
            = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_addr[2U];
    }
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__slave_select 
        = (3U & (vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_addr 
                 >> 0xeU));
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] = 0U;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] = 0U;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] = 0U;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] = 0U;
    if ((0x10U & (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode))) {
        if ((8U & (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode))) {
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] = 0U;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] = 0U;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] = 0U;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] = 0U;
        } else if ((4U & (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode))) {
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] = 0U;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] = 0U;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] = 0U;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] = 0U;
        } else if ((2U & (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode))) {
            if ((1U & (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode))) {
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] = 0U;
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] = 0U;
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] = 0U;
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] = 0U;
            } else {
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] 
                    = vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[0U];
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] 
                    = vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[1U];
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] 
                    = vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[2U];
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] 
                    = vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[3U];
            }
        } else if ((1U & (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode))) {
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] 
                = vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[0U];
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] 
                = vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[1U];
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] 
                = vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[2U];
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] 
                = vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[3U];
        } else {
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] = 0U;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] = 0U;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] = 0U;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] = 0U;
        }
    } else if ((8U & (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode))) {
        if ((4U & (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode))) {
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] = 0U;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] = 0U;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] = 0U;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] = 0U;
        } else if ((2U & (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode))) {
            if ((1U & (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode))) {
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] 
                    = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[0U] 
                       ^ vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[0U]);
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] 
                    = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[1U] 
                       ^ vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[1U]);
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] 
                    = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[2U] 
                       ^ vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[2U]);
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] 
                    = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[3U] 
                       ^ vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[3U]);
            } else {
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] 
                    = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[0U] 
                       | vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[0U]);
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] 
                    = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[1U] 
                       | vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[1U]);
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] 
                    = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[2U] 
                       | vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[2U]);
                vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] 
                    = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[3U] 
                       | vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[3U]);
            }
        } else if ((1U & (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode))) {
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] 
                = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[0U] 
                   & vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[0U]);
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] 
                = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[1U] 
                   & vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[1U]);
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] 
                = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[2U] 
                   & vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[2U]);
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] 
                = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[3U] 
                   & vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[3U]);
        } else {
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] = 0U;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] = 0U;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] = 0U;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] = 0U;
        }
    } else if ((4U & (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode))) {
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] = 0U;
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] = 0U;
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] = 0U;
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] = 0U;
    } else if ((2U & (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode))) {
        if ((1U & (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode))) {
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] 
                = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[0U] 
                   * vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[0U]);
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] 
                = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[1U] 
                   * vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[1U]);
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] 
                = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[2U] 
                   * vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[2U]);
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] 
                = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[3U] 
                   * vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[3U]);
        } else {
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] 
                = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[0U] 
                   - vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[0U]);
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] 
                = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[1U] 
                   - vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[1U]);
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] 
                = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[2U] 
                   - vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[2U]);
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] 
                = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[3U] 
                   - vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[3U]);
        }
    } else if ((1U & (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode))) {
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] 
            = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[0U] 
               + vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[0U]);
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] 
            = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[1U] 
               + vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[1U]);
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] 
            = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[2U] 
               + vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[2U]);
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] 
            = (vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a[3U] 
               + vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b[3U]);
    } else {
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U] = 0U;
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U] = 0U;
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U] = 0U;
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U] = 0U;
    }
    vlSelfRef.gpu_top__DOT__tex_v = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_tex_v_coord;
    vlSelfRef.gpu_top__DOT__tex_u = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_tex_u_coord;
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] = 0U;
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] = 0U;
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] = 0U;
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] = 0U;
    if ((0x10U & (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode))) {
        if ((8U & (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode))) {
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] = 0U;
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] = 0U;
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] = 0U;
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] = 0U;
        } else if ((4U & (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode))) {
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] = 0U;
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] = 0U;
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] = 0U;
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] = 0U;
        } else if ((2U & (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode))) {
            if ((1U & (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode))) {
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] = 0U;
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] = 0U;
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] = 0U;
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] = 0U;
            } else {
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] 
                    = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[0U];
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] 
                    = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[1U];
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] 
                    = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[2U];
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] 
                    = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[3U];
            }
        } else if ((1U & (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode))) {
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] 
                = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[0U];
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] 
                = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[1U];
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] 
                = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[2U];
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] 
                = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[3U];
        } else {
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] = 0U;
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] = 0U;
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] = 0U;
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] = 0U;
        }
    } else if ((8U & (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode))) {
        if ((4U & (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode))) {
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] = 0U;
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] = 0U;
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] = 0U;
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] = 0U;
        } else if ((2U & (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode))) {
            if ((1U & (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode))) {
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] 
                    = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[0U] 
                       ^ vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[0U]);
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] 
                    = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[1U] 
                       ^ vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[1U]);
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] 
                    = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[2U] 
                       ^ vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[2U]);
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] 
                    = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[3U] 
                       ^ vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[3U]);
            } else {
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] 
                    = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[0U] 
                       | vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[0U]);
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] 
                    = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[1U] 
                       | vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[1U]);
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] 
                    = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[2U] 
                       | vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[2U]);
                vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] 
                    = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[3U] 
                       | vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[3U]);
            }
        } else if ((1U & (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode))) {
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] 
                = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[0U] 
                   & vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[0U]);
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] 
                = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[1U] 
                   & vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[1U]);
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] 
                = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[2U] 
                   & vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[2U]);
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] 
                = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[3U] 
                   & vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[3U]);
        } else {
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] = 0U;
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] = 0U;
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] = 0U;
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] = 0U;
        }
    } else if ((4U & (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode))) {
        vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] = 0U;
    } else if ((2U & (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode))) {
        if ((1U & (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode))) {
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] 
                = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[0U] 
                   * vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[0U]);
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] 
                = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[1U] 
                   * vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[1U]);
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] 
                = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[2U] 
                   * vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[2U]);
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] 
                = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[3U] 
                   * vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[3U]);
        } else {
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] 
                = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[0U] 
                   - vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[0U]);
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] 
                = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[1U] 
                   - vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[1U]);
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] 
                = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[2U] 
                   - vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[2U]);
            vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] 
                = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[3U] 
                   - vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[3U]);
        }
    } else if ((1U & (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode))) {
        vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] 
            = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[0U] 
               + vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[0U]);
        vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] 
            = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[1U] 
               + vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[1U]);
        vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] 
            = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[2U] 
               + vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[2U]);
        vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] 
            = (vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a[3U] 
               + vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b[3U]);
    } else {
        vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U] = 0U;
    }
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_slave_addr = 0U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_slave_wdata = 0U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_slave_req = 0U;
    if ((0U != (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__grants))) {
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_slave_addr 
            = (((~ ((IData)(0xffffffffU) << (0x1fU 
                                             & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__slave_select), 5U)))) 
                & vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_slave_addr) 
               | (0xffffffffULL & (vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_addr 
                                   << (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__slave_select), 5U)))));
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_slave_wdata 
            = (((~ ((IData)(0xffffffffU) << (0x1fU 
                                             & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__slave_select), 5U)))) 
                & vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_slave_wdata) 
               | (0xffffffffULL & (vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__granted_wdata 
                                   << (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__slave_select), 5U)))));
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT____Vlvbound_h40f0798e__0 = 1U;
        if ((0U >= (1U & (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__slave_select)))) {
            vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_slave_req 
                = (((~ ((IData)(1U) << (1U & (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__slave_select)))) 
                    & (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_slave_req)) 
                   | (1U & ((IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT____Vlvbound_h40f0798e__0) 
                            << (1U & (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__slave_select)))));
        }
    }
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_master_rdata[0U] = 0U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_master_rdata[1U] = 0U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_master_rdata[2U] = 0U;
    if ((1U & (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__grants))) {
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT____Vlvbound_h3c2b5d2a__0 
            = (vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_slave_rdata 
               >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__slave_select), 5U)));
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_master_rdata[0U] 
            = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT____Vlvbound_h3c2b5d2a__0;
    }
    if ((2U & (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__grants))) {
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT____Vlvbound_h3c2b5d2a__0 
            = (vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_slave_rdata 
               >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__slave_select), 5U)));
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_master_rdata[1U] 
            = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT____Vlvbound_h3c2b5d2a__0;
    }
    if ((4U & (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__grants))) {
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT____Vlvbound_h3c2b5d2a__0 
            = (vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_slave_rdata 
               >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__slave_select), 5U)));
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_master_rdata[2U] 
            = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT____Vlvbound_h3c2b5d2a__0;
    }
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__modulated_color[0U] 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[0U];
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__modulated_color[1U] 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[1U];
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__modulated_color[2U] 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[2U];
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__modulated_color[3U] 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result[3U];
    vlSelfRef.gpu_top__DOT__tex_unit__DOT__i_v_coord 
        = (0xffffU & vlSelfRef.gpu_top__DOT__tex_v);
    vlSelfRef.gpu_top__DOT__tex_unit__DOT__i_u_coord 
        = (0xffffU & vlSelfRef.gpu_top__DOT__tex_u);
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[0U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U];
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[1U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U];
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[2U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U];
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[3U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U];
    vlSelfRef.gpu_top__DOT__slave_addr = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_slave_addr;
    vlSelfRef.gpu_top__DOT__slave_wdata = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_slave_wdata;
    vlSelfRef.gpu_top__DOT__slave_req = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_slave_req;
    vlSelfRef.gpu_top__DOT__master_rdata[0U] = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_master_rdata[0U];
    vlSelfRef.gpu_top__DOT__master_rdata[1U] = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_master_rdata[1U];
    vlSelfRef.gpu_top__DOT__master_rdata[2U] = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_master_rdata[2U];
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_data[0U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[0U];
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_data[1U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[1U];
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_data[2U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[2U];
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_data[3U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[3U];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[0U] 
        = vlSelfRef.gpu_top__DOT__master_rdata[0U];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[1U] = 0U;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[2U] = 0U;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[3U] = 0U;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[4U] = 0U;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[5U] = 0U;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[6U] = 0U;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[7U] = 0U;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[8U] = 0U;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[9U] = 0U;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[0xaU] = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge gpu_top.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge gpu_top.glbl_rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge gpu_top.reset_sync_inst.arst_n)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge gpu_top.reset_sync_inst.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge gpu_top.ctrl_inst.clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(negedge gpu_top.ctrl_inst.rst_n)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge gpu_top.shader_loader_inst.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge gpu_top.core0.clk)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(negedge gpu_top.core0.rst_n)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge gpu_top.core0.reg_file_inst.clk)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(negedge gpu_top.core0.reg_file_inst.rst_n)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge gpu_top.interconnect_inst.arbiter_inst.clk)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @(negedge gpu_top.interconnect_inst.arbiter_inst.rst_n)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @(posedge gpu_top.vf_inst.clk)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @(negedge gpu_top.vf_inst.rst_n)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @(posedge gpu_top.rast_inst.clk)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @(negedge gpu_top.rast_inst.rst_n)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @(posedge gpu_top.frag_fifo.clk)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @(negedge gpu_top.frag_fifo.rst_n)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @(posedge gpu_top.fs_inst.clk)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @(negedge gpu_top.fs_inst.rst_n)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @(posedge gpu_top.tex_unit.clk)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @(negedge gpu_top.tex_unit.rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge gpu_top.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge gpu_top.glbl_rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge gpu_top.reset_sync_inst.arst_n)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge gpu_top.reset_sync_inst.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge gpu_top.ctrl_inst.clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(negedge gpu_top.ctrl_inst.rst_n)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge gpu_top.shader_loader_inst.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge gpu_top.core0.clk)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(negedge gpu_top.core0.rst_n)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge gpu_top.core0.reg_file_inst.clk)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(negedge gpu_top.core0.reg_file_inst.rst_n)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge gpu_top.interconnect_inst.arbiter_inst.clk)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @(negedge gpu_top.interconnect_inst.arbiter_inst.rst_n)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @(posedge gpu_top.vf_inst.clk)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @(negedge gpu_top.vf_inst.rst_n)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @(posedge gpu_top.rast_inst.clk)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @(negedge gpu_top.rast_inst.rst_n)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @(posedge gpu_top.frag_fifo.clk)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @(negedge gpu_top.frag_fifo.rst_n)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @(posedge gpu_top.fs_inst.clk)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @(negedge gpu_top.fs_inst.rst_n)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @(posedge gpu_top.tex_unit.clk)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @(negedge gpu_top.tex_unit.rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->i_bus_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7766322338044628480ull);
    vlSelf->i_bus_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5329721458257682810ull);
    vlSelf->i_bus_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9938396351321559749ull);
    vlSelf->o_bus_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6383542981947141280ull);
    vlSelf->gpu_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 642355771791915867ull);
    vlSelf->gpu_top__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9419413403706479269ull);
    vlSelf->gpu_top__DOT__i_bus_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14141631320106340584ull);
    vlSelf->gpu_top__DOT__i_bus_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5013929376022543853ull);
    vlSelf->gpu_top__DOT__i_bus_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16698705347477894845ull);
    vlSelf->gpu_top__DOT__o_bus_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4765422647562244800ull);
    vlSelf->gpu_top__DOT__glbl_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 818963557362996349ull);
    vlSelf->gpu_top__DOT__vertex_base_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14974118903911934112ull);
    vlSelf->gpu_top__DOT__vertex_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9181446417637308461ull);
    vlSelf->gpu_top__DOT__current_vertex = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 866224927356110936ull);
    vlSelf->gpu_top__DOT__shader_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9212376460050909478ull);
    vlSelf->gpu_top__DOT__pipe_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16535825749021105810ull);
    vlSelf->gpu_top__DOT__next_pipe_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10206547126862505207ull);
    vlSelf->gpu_top__DOT__pipeline_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8363427828173711117ull);
    vlSelf->gpu_top__DOT__pipeline_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2814169937032019056ull);
    vlSelf->gpu_top__DOT__vertex_fetch_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4297522033723903912ull);
    vlSelf->gpu_top__DOT__rasterizer_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12742719491226912157ull);
    vlSelf->gpu_top__DOT__shader_exec_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10501303862069797758ull);
    vlSelf->gpu_top__DOT__controller_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7013481495130142008ull);
    vlSelf->gpu_top__DOT__controller_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9023319078717390785ull);
    vlSelf->gpu_top__DOT__master_req = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7771319626185671739ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->gpu_top__DOT__master_addr, __VscopeHash, 13207075417357874098ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->gpu_top__DOT__master_wdata, __VscopeHash, 7301400862884897816ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->gpu_top__DOT__master_rdata, __VscopeHash, 5122290664745619562ull);
    vlSelf->gpu_top__DOT__slave_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4072258785743802882ull);
    vlSelf->gpu_top__DOT__slave_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11554935403490760511ull);
    vlSelf->gpu_top__DOT__slave_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7948440699246461946ull);
    vlSelf->gpu_top__DOT__slave_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17384294825959723153ull);
    vlSelf->gpu_top__DOT__shader_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14578678425789027394ull);
    vlSelf->gpu_top__DOT__shader_host_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7303177118285087950ull);
    vlSelf->gpu_top__DOT__shader_exec_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4266398121618389421ull);
    vlSelf->gpu_top__DOT__shader_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6322969896303193186ull);
    vlSelf->gpu_top__DOT__shader_rd = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6814766280449492784ull);
    vlSelf->gpu_top__DOT__shader_rs1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10895907240949581640ull);
    vlSelf->gpu_top__DOT__shader_rs2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3180413438141164021ull);
    vlSelf->gpu_top__DOT__shader_imm = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4880540716558795452ull);
    VL_SCOPED_RAND_RESET_W(352, vlSelf->gpu_top__DOT__vertex_data, __VscopeHash, 17086851218368568871ull);
    vlSelf->gpu_top__DOT__v0x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2364223145731863188ull);
    vlSelf->gpu_top__DOT__v0y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1027552021340071714ull);
    vlSelf->gpu_top__DOT__v1x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12381805306828850735ull);
    vlSelf->gpu_top__DOT__v1y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10793446004630684598ull);
    vlSelf->gpu_top__DOT__v2x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6321593965121691893ull);
    vlSelf->gpu_top__DOT__v2y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15278340667741973138ull);
    vlSelf->gpu_top__DOT__v0_color = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15986178138431414232ull);
    vlSelf->gpu_top__DOT__v1_color = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12461165120351403698ull);
    vlSelf->gpu_top__DOT__v2_color = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10120241535948540046ull);
    vlSelf->gpu_top__DOT__v0_u = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11089614494257784783ull);
    vlSelf->gpu_top__DOT__v0_v = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11188583353232096203ull);
    vlSelf->gpu_top__DOT__v1_u = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10766621656323083654ull);
    vlSelf->gpu_top__DOT__v1_v = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13633347796653022701ull);
    vlSelf->gpu_top__DOT__v2_u = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13166497692371207212ull);
    vlSelf->gpu_top__DOT__v2_v = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9578563247077712721ull);
    vlSelf->gpu_top__DOT__rast_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7571998797632145830ull);
    vlSelf->gpu_top__DOT__rast_frag_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13924588593821503346ull);
    vlSelf->gpu_top__DOT__frag_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2507125267833478363ull);
    vlSelf->gpu_top__DOT__frag_y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9032411059534109135ull);
    vlSelf->gpu_top__DOT__lambda0 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 8687032229690826230ull);
    vlSelf->gpu_top__DOT__lambda1 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 6518929411636283658ull);
    vlSelf->gpu_top__DOT__lambda2 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 9518615884221744830ull);
    vlSelf->gpu_top__DOT__fifo_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3488919305897161148ull);
    vlSelf->gpu_top__DOT__fifo_rd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6465839139313413272ull);
    vlSelf->gpu_top__DOT__fifo_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15776221273741504405ull);
    vlSelf->gpu_top__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4782650283857057767ull);
    VL_SCOPED_RAND_RESET_W(83, vlSelf->gpu_top__DOT__fifo_wdata, __VscopeHash, 16870252546401521197ull);
    VL_SCOPED_RAND_RESET_W(83, vlSelf->gpu_top__DOT__fifo_rdata, __VscopeHash, 610402576574911379ull);
    vlSelf->gpu_top__DOT__fs_in_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11513786610759268802ull);
    vlSelf->gpu_top__DOT__fs_in_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1737916656111249289ull);
    vlSelf->gpu_top__DOT__fs_in_y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9874328391549854962ull);
    vlSelf->gpu_top__DOT__fs_in_lambda0 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 17900967068335579058ull);
    vlSelf->gpu_top__DOT__fs_in_lambda1 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 13355451138470736873ull);
    vlSelf->gpu_top__DOT__fs_in_lambda2 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 16666444586860584563ull);
    vlSelf->gpu_top__DOT__interpolated_color = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18272713638887149309ull);
    vlSelf->gpu_top__DOT__interpolated_u = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14826530425016639467ull);
    vlSelf->gpu_top__DOT__interpolated_v = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13354833940169250840ull);
    vlSelf->gpu_top__DOT__tex_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7629970785391178270ull);
    vlSelf->gpu_top__DOT__tex_u = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15346429489156934835ull);
    vlSelf->gpu_top__DOT__tex_v = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2128131564452742172ull);
    vlSelf->gpu_top__DOT__texel_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2566630018066760584ull);
    vlSelf->gpu_top__DOT__texel_color_single = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4803987326365176254ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__texel_color_vec, __VscopeHash, 16725264412547861296ull);
    vlSelf->gpu_top__DOT__pixel_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6397956383223572212ull);
    vlSelf->gpu_top__DOT__pixel_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17631570835890009713ull);
    vlSelf->gpu_top__DOT__pixel_y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5591792138948104340ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__pixel_color, __VscopeHash, 6110600288294459804ull);
    for (int __Vi0 = 0; __Vi0 < 262144; ++__Vi0) {
        vlSelf->gpu_top__DOT__bram_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6040042010205975719ull);
    }
    vlSelf->gpu_top__DOT__bram_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4551481895309765593ull);
    vlSelf->gpu_top__DOT__reset_sync_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6927781335901965418ull);
    vlSelf->gpu_top__DOT__reset_sync_inst__DOT__arst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6618888917640749596ull);
    vlSelf->gpu_top__DOT__reset_sync_inst__DOT__srst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3046384861751323965ull);
    vlSelf->gpu_top__DOT__reset_sync_inst__DOT__rst_s1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15518474384401433907ull);
    vlSelf->gpu_top__DOT__reset_sync_inst__DOT__rst_s2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10911984220122706767ull);
    vlSelf->gpu_top__DOT__ctrl_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2158774914389083370ull);
    vlSelf->gpu_top__DOT__ctrl_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 892394294268848097ull);
    vlSelf->gpu_top__DOT__ctrl_inst__DOT__i_bus_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13659610182260872165ull);
    vlSelf->gpu_top__DOT__ctrl_inst__DOT__i_bus_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1558981489603592801ull);
    vlSelf->gpu_top__DOT__ctrl_inst__DOT__i_bus_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1628817281043303772ull);
    vlSelf->gpu_top__DOT__ctrl_inst__DOT__o_bus_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6859059805391446332ull);
    vlSelf->gpu_top__DOT__ctrl_inst__DOT__i_pipeline_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12396856384033738843ull);
    vlSelf->gpu_top__DOT__ctrl_inst__DOT__o_start_pipeline = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5138097144531423545ull);
    vlSelf->gpu_top__DOT__ctrl_inst__DOT__o_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10405713500853968898ull);
    vlSelf->gpu_top__DOT__ctrl_inst__DOT__start_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17630523665635171407ull);
    vlSelf->gpu_top__DOT__ctrl_inst__DOT__irq_clear_cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12452153994437202022ull);
    vlSelf->gpu_top__DOT__ctrl_inst__DOT__irq_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10581724744870593833ull);
    vlSelf->gpu_top__DOT__ctrl_inst__DOT__busy_last_cycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16337484513077140274ull);
    vlSelf->gpu_top__DOT__ctrl_inst__DOT__fire_start_pulse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11375944423142106958ull);
    vlSelf->gpu_top__DOT__ctrl_inst__DOT__pending_starts_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10003178347214763607ull);
    vlSelf->gpu_top__DOT__shader_loader_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1015034300865910222ull);
    vlSelf->gpu_top__DOT__shader_loader_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11751095028587348648ull);
    vlSelf->gpu_top__DOT__shader_loader_inst__DOT__i_host_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5586164912810501805ull);
    vlSelf->gpu_top__DOT__shader_loader_inst__DOT__i_host_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15525857595472456075ull);
    vlSelf->gpu_top__DOT__shader_loader_inst__DOT__i_host_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8150536888478564920ull);
    vlSelf->gpu_top__DOT__shader_loader_inst__DOT__o_host_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 546619299446352790ull);
    vlSelf->gpu_top__DOT__shader_loader_inst__DOT__i_gpu_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6803587366366432413ull);
    vlSelf->gpu_top__DOT__shader_loader_inst__DOT__o_gpu_instr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18244903878313645657ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->gpu_top__DOT__shader_loader_inst__DOT__instruction_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13308290280939078756ull);
    }
    vlSelf->gpu_top__DOT__decoder_inst__DOT__i_instruction_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15403351355944826351ull);
    vlSelf->gpu_top__DOT__decoder_inst__DOT__o_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12588906304836188108ull);
    vlSelf->gpu_top__DOT__decoder_inst__DOT__o_rd_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4714004514775474323ull);
    vlSelf->gpu_top__DOT__decoder_inst__DOT__o_rs1_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10707125169037079031ull);
    vlSelf->gpu_top__DOT__decoder_inst__DOT__o_rs2_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2394746362784811459ull);
    vlSelf->gpu_top__DOT__decoder_inst__DOT__o_imm = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4541734743388203831ull);
    vlSelf->gpu_top__DOT__core0__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12623765939759052885ull);
    vlSelf->gpu_top__DOT__core0__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6883168835269007413ull);
    vlSelf->gpu_top__DOT__core0__DOT__i_exec_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14970679521878188649ull);
    vlSelf->gpu_top__DOT__core0__DOT__i_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9271793063368614025ull);
    vlSelf->gpu_top__DOT__core0__DOT__i_rd_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 920523936222952875ull);
    vlSelf->gpu_top__DOT__core0__DOT__i_rs1_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 77313274304768979ull);
    vlSelf->gpu_top__DOT__core0__DOT__i_rs2_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12976267962635675536ull);
    vlSelf->gpu_top__DOT__core0__DOT__o_mem_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3889569188791558809ull);
    vlSelf->gpu_top__DOT__core0__DOT__i_mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15477902880523042408ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__core0__DOT__rs1_data, __VscopeHash, 5636243303773966743ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__core0__DOT__rs2_data, __VscopeHash, 8519235981126322275ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__core0__DOT__alu_result, __VscopeHash, 13916753944094532636ull);
    vlSelf->gpu_top__DOT__core0__DOT__reg_write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6634652690286196796ull);
    vlSelf->gpu_top__DOT__core0__DOT__reg_file_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10955180582178916600ull);
    vlSelf->gpu_top__DOT__core0__DOT__reg_file_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8917225634498709182ull);
    vlSelf->gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2261231459332514581ull);
    vlSelf->gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7805182977833222844ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_data, __VscopeHash, 13492180163878893301ull);
    vlSelf->gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_rd_addr_a = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8302901659190967729ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_a, __VscopeHash, 15000224197609580324ull);
    vlSelf->gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_rd_addr_b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11327404799861859594ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__core0__DOT__reg_file_inst__DOT__o_rd_data_b, __VscopeHash, 9940357743491443335ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[__Vi0], __VscopeHash, 17836722401864854130ull);
    }
    vlSelf->gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0;
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_a, __VscopeHash, 15584185766598125138ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__core0__DOT__alu_inst__DOT__i_operand_b, __VscopeHash, 4809157278669313762ull);
    vlSelf->gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14824112543365977850ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result, __VscopeHash, 4858341959097233100ull);
    vlSelf->gpu_top__DOT__core0__DOT__alu_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1106902770590627734ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14970338321962007827ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__i_master_req = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3314053163430077581ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->gpu_top__DOT__interconnect_inst__DOT__i_master_addr, __VscopeHash, 4141795729856812932ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->gpu_top__DOT__interconnect_inst__DOT__i_master_wdata, __VscopeHash, 14588862468516261286ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->gpu_top__DOT__interconnect_inst__DOT__o_master_rdata, __VscopeHash, 5067023625478847929ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__o_slave_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15985282609056228350ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__o_slave_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15591347607763824847ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__o_slave_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9884669556030309464ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__i_slave_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1946584537990090638ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__grants = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10319415085011249518ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__granted_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 641719462289114861ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__granted_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13999216791985699776ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__granted_index = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16596097772167684699ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__slave_select = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13639051827979807382ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->gpu_top__DOT__interconnect_inst__DOT____Vlvbound_h40f0798e__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9962945939632051306ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT____Vlvbound_h3c2b5d2a__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1095167271318449580ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2092625952811025393ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10800830449766598405ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__i_requests = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 905109621751189078ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__o_grants = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1040528180918816016ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__last_grant_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5460303806462885840ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11952468772898594359ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__priority_mask = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13480980801042076000ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__masked_requests = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2721858490881299503ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__grant_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8465697475818986071ull);
    vlSelf->gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->gpu_top__DOT__vf_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2322283360338681285ull);
    vlSelf->gpu_top__DOT__vf_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13856314077535987777ull);
    vlSelf->gpu_top__DOT__vf_inst__DOT__i_start_fetch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16399815322207119568ull);
    vlSelf->gpu_top__DOT__vf_inst__DOT__i_base_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13359893469796734237ull);
    vlSelf->gpu_top__DOT__vf_inst__DOT__i_vertex_index = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10112433769917377230ull);
    vlSelf->gpu_top__DOT__vf_inst__DOT__o_fetch_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10473580672683468624ull);
    vlSelf->gpu_top__DOT__vf_inst__DOT__o_mem_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5895981284879754240ull);
    vlSelf->gpu_top__DOT__vf_inst__DOT__o_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1654967270863780732ull);
    vlSelf->gpu_top__DOT__vf_inst__DOT__i_mem_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10453198448973509243ull);
    VL_SCOPED_RAND_RESET_W(352, vlSelf->gpu_top__DOT__vf_inst__DOT__i_mem_rdata, __VscopeHash, 8480385623016870653ull);
    VL_SCOPED_RAND_RESET_W(352, vlSelf->gpu_top__DOT__vf_inst__DOT__o_vertex_data, __VscopeHash, 7817801603975400759ull);
    vlSelf->gpu_top__DOT__vf_inst__DOT__current_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12142711506065311372ull);
    vlSelf->gpu_top__DOT__vf_inst__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 561935389888037587ull);
    VL_SCOPED_RAND_RESET_W(352, vlSelf->gpu_top__DOT__vf_inst__DOT__data_reg, __VscopeHash, 9268369482843832804ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14363083704261998723ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9046549819333819021ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__i_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8830066876282461015ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__i_v0_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12606033355009460972ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__i_v0_y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17622936357147055554ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__i_v1_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1603225976339185929ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__i_v1_y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9845967945996754701ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__i_v2_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 770532175024955687ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__i_v2_y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13290950173008578465ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__o_fragment_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6411970974406090017ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__o_fragment_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15215238746885756476ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__o_fragment_y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15697816940758864752ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__o_lambda0 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 2827627607555819741ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__o_lambda1 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 6825777789072600688ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__o_lambda2 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 6653615272544700771ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__o_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16794667820602798725ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__is_running = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7744775330658620091ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__v0_x_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3887168899089267425ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__v0_y_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6709380126394510868ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__v1_x_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2120755180053857400ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__v1_y_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6475116230054785490ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__v2_x_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16048902929329882193ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__v2_y_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13134387364926884339ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__x_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4573981860830633409ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__y_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9489099075020546347ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__bbox_min_x_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1428172880379560759ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__bbox_min_y_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7565002481754334607ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__bbox_max_x_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7313154195164095878ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__bbox_max_y_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11335897802202490932ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__edge0 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 17537867305622554572ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__edge1 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 14462006772640405570ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__edge2 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 10192005170680197164ull);
    vlSelf->gpu_top__DOT__rast_inst__DOT__is_inside = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1003769882162315042ull);
    vlSelf->gpu_top__DOT__frag_fifo__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13607620379173110979ull);
    vlSelf->gpu_top__DOT__frag_fifo__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9166687136072727066ull);
    vlSelf->gpu_top__DOT__frag_fifo__DOT__i_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2391259238559344214ull);
    VL_SCOPED_RAND_RESET_W(83, vlSelf->gpu_top__DOT__frag_fifo__DOT__i_w_data, __VscopeHash, 18116169379109586174ull);
    vlSelf->gpu_top__DOT__frag_fifo__DOT__i_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8096106201854039383ull);
    VL_SCOPED_RAND_RESET_W(83, vlSelf->gpu_top__DOT__frag_fifo__DOT__o_r_data, __VscopeHash, 9349742115141532622ull);
    vlSelf->gpu_top__DOT__frag_fifo__DOT__o_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11982007364690122275ull);
    vlSelf->gpu_top__DOT__frag_fifo__DOT__o_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1068494307049388901ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(83, vlSelf->gpu_top__DOT__frag_fifo__DOT__mem_array[__Vi0], __VscopeHash, 3628373291044443244ull);
    }
    vlSelf->gpu_top__DOT__frag_fifo__DOT__wr_ptr_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5924598086203437287ull);
    vlSelf->gpu_top__DOT__frag_fifo__DOT__rd_ptr_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11809727491488515466ull);
    vlSelf->gpu_top__DOT__frag_fifo__DOT__wr_ptr_next = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9724415898476218500ull);
    vlSelf->gpu_top__DOT__frag_fifo__DOT__rd_ptr_next = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2997378320741197251ull);
    vlSelf->gpu_top__DOT__frag_fifo__DOT__count_reg = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10801104276580614720ull);
    vlSelf->gpu_top__DOT__frag_fifo__DOT__count_next = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11594069273551379381ull);
    vlSelf->gpu_top__DOT__color_interp__DOT__i_attr0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12728510029259208259ull);
    vlSelf->gpu_top__DOT__color_interp__DOT__i_attr1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11647384774914164848ull);
    vlSelf->gpu_top__DOT__color_interp__DOT__i_attr2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11805581851430536548ull);
    vlSelf->gpu_top__DOT__color_interp__DOT__i_lambda0 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 15157842104702949377ull);
    vlSelf->gpu_top__DOT__color_interp__DOT__i_lambda1 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 14674698497884790054ull);
    vlSelf->gpu_top__DOT__color_interp__DOT__i_lambda2 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 676408159712135594ull);
    vlSelf->gpu_top__DOT__color_interp__DOT__o_interpolated_attr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1224872186002838488ull);
    vlSelf->gpu_top__DOT__color_interp__DOT__term0 = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 17487641553307694223ull);
    vlSelf->gpu_top__DOT__color_interp__DOT__term1 = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 13673915364346731764ull);
    vlSelf->gpu_top__DOT__color_interp__DOT__term2 = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 16374750078022589401ull);
    vlSelf->gpu_top__DOT__color_interp__DOT__sum_terms = VL_SCOPED_RAND_RESET_Q(55, __VscopeHash, 9708361800954176805ull);
    vlSelf->gpu_top__DOT__u_interp__DOT__i_attr0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6701047171301364971ull);
    vlSelf->gpu_top__DOT__u_interp__DOT__i_attr1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13680593010828700343ull);
    vlSelf->gpu_top__DOT__u_interp__DOT__i_attr2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13010641439583810407ull);
    vlSelf->gpu_top__DOT__u_interp__DOT__i_lambda0 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 2978516925755603250ull);
    vlSelf->gpu_top__DOT__u_interp__DOT__i_lambda1 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 17359577733151459546ull);
    vlSelf->gpu_top__DOT__u_interp__DOT__i_lambda2 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 6184046295937029099ull);
    vlSelf->gpu_top__DOT__u_interp__DOT__o_interpolated_attr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15716224538681862588ull);
    vlSelf->gpu_top__DOT__u_interp__DOT__term0 = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 293426495245109920ull);
    vlSelf->gpu_top__DOT__u_interp__DOT__term1 = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 13471064014506024888ull);
    vlSelf->gpu_top__DOT__u_interp__DOT__term2 = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 11294234200913121980ull);
    vlSelf->gpu_top__DOT__u_interp__DOT__sum_terms = VL_SCOPED_RAND_RESET_Q(55, __VscopeHash, 9416618371835117519ull);
    vlSelf->gpu_top__DOT__v_interp__DOT__i_attr0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3531337775864431623ull);
    vlSelf->gpu_top__DOT__v_interp__DOT__i_attr1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 432423214295072225ull);
    vlSelf->gpu_top__DOT__v_interp__DOT__i_attr2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6937514254395466848ull);
    vlSelf->gpu_top__DOT__v_interp__DOT__i_lambda0 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 17811215132508738002ull);
    vlSelf->gpu_top__DOT__v_interp__DOT__i_lambda1 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 2511149513313448609ull);
    vlSelf->gpu_top__DOT__v_interp__DOT__i_lambda2 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 4070403878492198601ull);
    vlSelf->gpu_top__DOT__v_interp__DOT__o_interpolated_attr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8770706798567839522ull);
    vlSelf->gpu_top__DOT__v_interp__DOT__term0 = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 10296345066579314842ull);
    vlSelf->gpu_top__DOT__v_interp__DOT__term1 = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 9668978991524998770ull);
    vlSelf->gpu_top__DOT__v_interp__DOT__term2 = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 17999196328297739996ull);
    vlSelf->gpu_top__DOT__v_interp__DOT__sum_terms = VL_SCOPED_RAND_RESET_Q(55, __VscopeHash, 2309878871937257429ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6986112172743825434ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 955630928595012415ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__i_frag_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 903933690243901988ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__i_frag_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12919932607159123742ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__i_frag_y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9607031712058766632ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__fs_inst__DOT__i_frag_color, __VscopeHash, 889651555470234228ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__i_frag_tex_coord = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5598183368870923700ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__o_tex_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12621410102414506714ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__o_tex_u_coord = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3684878109350324472ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__o_tex_v_coord = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 452865906046631179ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__i_texel_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16256454675314250213ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__fs_inst__DOT__i_texel_color, __VscopeHash, 6323825656197250017ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__o_pixel_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4439197948590867062ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__o_pixel_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1006410943263450005ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__o_pixel_y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4591074696516366748ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__fs_inst__DOT__o_pixel_color, __VscopeHash, 14392185130682780967ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__fs_inst__DOT__modulated_color, __VscopeHash, 16901786747039276404ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__tex_request_sent = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 86816141436222402ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_a, __VscopeHash, 8811134137422110820ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_operand_b, __VscopeHash, 665918794826721705ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__i_opcode = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7904197989428575656ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__o_result, __VscopeHash, 7089186532098021142ull);
    vlSelf->gpu_top__DOT__fs_inst__DOT__alu_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->gpu_top__DOT__tex_unit__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14285488442040023592ull);
    vlSelf->gpu_top__DOT__tex_unit__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10559939534946830980ull);
    vlSelf->gpu_top__DOT__tex_unit__DOT__i_req_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13838506400607461410ull);
    vlSelf->gpu_top__DOT__tex_unit__DOT__i_u_coord = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14894953898175403350ull);
    vlSelf->gpu_top__DOT__tex_unit__DOT__i_v_coord = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11512073383897125663ull);
    vlSelf->gpu_top__DOT__tex_unit__DOT__o_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8618075880867016939ull);
    vlSelf->gpu_top__DOT__tex_unit__DOT__o_texel_color = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4619475036467142597ull);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->gpu_top__DOT__tex_unit__DOT__texture_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5420775219495589105ull);
    }
    vlSelf->gpu_top__DOT__tex_unit__DOT__tex_x = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1890154992725764626ull);
    vlSelf->gpu_top__DOT__tex_unit__DOT__tex_y = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6910155062644404492ull);
    vlSelf->gpu_top__DOT__tex_unit__DOT__tex_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8933026162319953825ull);
    vlSelf->gpu_top__DOT__fb_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13211579043136805482ull);
    vlSelf->gpu_top__DOT__fb_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15049182252638499555ull);
    vlSelf->gpu_top__DOT__fb_inst__DOT__i_pixel_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17936903924256456009ull);
    vlSelf->gpu_top__DOT__fb_inst__DOT__i_pixel_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 691595554646339462ull);
    vlSelf->gpu_top__DOT__fb_inst__DOT__i_pixel_y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12457296252275263450ull);
    vlSelf->gpu_top__DOT__fb_inst__DOT__i_pixel_color = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18058213422529709745ull);
    vlSelf->gpu_top__DOT__fb_inst__DOT__o_mem_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11951111942888257674ull);
    vlSelf->gpu_top__DOT__fb_inst__DOT__o_mem_addr = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 16201256636915856170ull);
    vlSelf->gpu_top__DOT__fb_inst__DOT__o_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 166246101269636344ull);
    vlSelf->gpu_top__DOT__fb_inst__DOT__write_addr = VL_SCOPED_RAND_RESET_I(19, __VscopeHash, 14964649198762837775ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3083986747038908849ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__glbl_rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7728479262988625804ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__reset_sync_inst__DOT__arst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13251645836090393517ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__reset_sync_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10383524498329822564ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__ctrl_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4412473519398721070ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__ctrl_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8865701202028440817ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__shader_loader_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9614649549134406225ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__core0__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14428562837432614712ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__core0__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15182631044037534869ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17135458603608545129ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16762446841415730020ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15668083459599116621ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12076544650313301689ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__vf_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5447109917898526241ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__vf_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8661889717648717073ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__rast_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4714182061427214937ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__rast_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6055747611402623577ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__frag_fifo__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8281685277707597269ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__frag_fifo__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15453176426537935563ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__fs_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16989166769266098618ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__fs_inst__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6638471552225475512ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__tex_unit__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13698209974805649515ull);
    vlSelf->__Vtrigprevexpr___TOP__gpu_top__DOT__tex_unit__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14623600410833403418ull);
}
