// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.gpu_top__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.gpu_top__DOT__glbl_rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__glbl_rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, ((~ (IData)(vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__arst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__reset_sync_inst__DOT__arst_n__0)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__reset_sync_inst__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__ctrl_inst__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(5U, ((~ (IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__ctrl_inst__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__shader_loader_inst__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(vlSelfRef.gpu_top__DOT__core0__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__core0__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(8U, ((~ (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__core0__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(9U, ((IData)(vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0xaU, ((~ (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__rst_n)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xbU, ((IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__clk) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0xcU, ((~ (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__rst_n)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xdU, ((IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__clk) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__vf_inst__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0xeU, ((~ (IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__rst_n)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__vf_inst__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0xfU, ((IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__clk) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__rast_inst__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x10U, ((~ (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__rst_n)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__rast_inst__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0x11U, ((IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__frag_fifo__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x12U, ((~ (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rst_n)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__frag_fifo__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0x13U, ((IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__fs_inst__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x14U, ((~ (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__rst_n)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__fs_inst__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0x15U, ((IData)(vlSelfRef.gpu_top__DOT__tex_unit__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__tex_unit__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x16U, ((~ (IData)(vlSelfRef.gpu_top__DOT__tex_unit__DOT__rst_n)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top__DOT__tex_unit__DOT__rst_n__0)));
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
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
