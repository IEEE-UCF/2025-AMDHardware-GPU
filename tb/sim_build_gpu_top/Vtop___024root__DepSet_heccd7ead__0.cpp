// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 16> Vtop__ConstPool__TABLE_h7a202c27_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_haed2dea1_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_he91046c0_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
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
    vlSelfRef.gpu_top__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.gpu_top__DOT__shader_exec_en = (2U == (IData)(vlSelfRef.gpu_top__DOT__pipe_state));
    vlSelfRef.gpu_top__DOT__rast_start = (3U == (IData)(vlSelfRef.gpu_top__DOT__pipe_state));
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
    vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__arst_n 
        = vlSelfRef.gpu_top__DOT__rst_n;
    vlSelfRef.gpu_top__DOT__core0__DOT__i_exec_en = vlSelfRef.gpu_top__DOT__shader_exec_en;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_start 
        = vlSelfRef.gpu_top__DOT__rast_start;
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
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__tex_unit__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__rst_n 
        = vlSelfRef.gpu_top__DOT__glbl_rst_n;
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

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x30ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x600ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x18000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x180ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x600000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x180000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x60000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x1800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x43ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x73ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x33ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x18000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x600000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x180003ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0x60000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x6000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((0x643ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x78000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x62000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x6003ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x186003ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x1e003ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0x187803ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__11(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__gpu_top__DOT__bram_memory__v0;
    __VdlyVal__gpu_top__DOT__bram_memory__v0 = 0;
    IData/*17:0*/ __VdlyDim0__gpu_top__DOT__bram_memory__v0;
    __VdlyDim0__gpu_top__DOT__bram_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu_top__DOT__bram_memory__v0;
    __VdlySet__gpu_top__DOT__bram_memory__v0 = 0;
    // Body
    __VdlySet__gpu_top__DOT__bram_memory__v0 = 0U;
    if (vlSelfRef.gpu_top__DOT__slave_req) {
        __VdlyVal__gpu_top__DOT__bram_memory__v0 = vlSelfRef.gpu_top__DOT__slave_wdata;
        __VdlyDim0__gpu_top__DOT__bram_memory__v0 = 
            (0x3ffffU & vlSelfRef.gpu_top__DOT__slave_addr);
        __VdlySet__gpu_top__DOT__bram_memory__v0 = 1U;
    }
    vlSelfRef.gpu_top__DOT__bram_rdata = vlSelfRef.gpu_top__DOT__bram_memory
        [(0x3ffffU & vlSelfRef.gpu_top__DOT__slave_addr)];
    if (__VdlySet__gpu_top__DOT__bram_memory__v0) {
        vlSelfRef.gpu_top__DOT__bram_memory[__VdlyDim0__gpu_top__DOT__bram_memory__v0] 
            = __VdlyVal__gpu_top__DOT__bram_memory__v0;
    }
    vlSelfRef.gpu_top__DOT__slave_rdata = vlSelfRef.gpu_top__DOT__bram_rdata;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_slave_rdata 
        = vlSelfRef.gpu_top__DOT__slave_rdata;
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h8fd30df8_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_h8368d86a_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__pending_starts_count) 
                     << 3U) | (((IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__fire_start_pulse) 
                                << 2U) | (((IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__start_cmd) 
                                           << 1U) | (IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__rst_n))));
    if (Vtop__ConstPool__TABLE_h8fd30df8_0[__Vtableidx1]) {
        vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__pending_starts_count 
            = Vtop__ConstPool__TABLE_h8368d86a_0[__Vtableidx1];
    }
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__o_start_pipeline 
        = ((IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__rst_n) 
           && (IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__fire_start_pulse));
    if (vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__rst_n) {
        if (((IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__busy_last_cycle) 
             & (~ (IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__i_pipeline_busy)))) {
            vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__irq_pending = 1U;
        } else if (vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__irq_clear_cmd) {
            vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__irq_pending = 0U;
        }
    } else {
        vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__irq_pending = 0U;
    }
    vlSelfRef.gpu_top__DOT__pipeline_start = vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__o_start_pipeline;
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__o_irq = vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__irq_pending;
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__busy_last_cycle 
        = ((IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__rst_n) 
           && (IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__i_pipeline_busy));
    vlSelfRef.gpu_top__DOT__controller_irq = vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__o_irq;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __VdlyVal__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0;
    VL_ZERO_W(128, __VdlyVal__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0);
    CData/*3:0*/ __VdlyDim0__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0;
    __VdlyDim0__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0;
    __VdlySet__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v1;
    __VdlySet__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v1 = 0;
    // Body
    __VdlySet__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0 = 0U;
    __VdlySet__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__rst_n)))) {
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 5U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 6U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 7U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 9U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0xbU;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0xcU;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0xdU;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0xeU;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0xfU;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x10U;
    }
    if (vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__rst_n) {
        if (vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_en) {
            __VdlyVal__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0[0U] 
                = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_data[0U];
            __VdlyVal__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0[1U] 
                = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_data[1U];
            __VdlyVal__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0[2U] 
                = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_data[2U];
            __VdlyVal__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0[3U] 
                = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_data[3U];
            __VdlyDim0__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0 
                = vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_addr;
            __VdlySet__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0 = 1U;
        }
    } else {
        __VdlySet__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v1 = 1U;
    }
    if (__VdlySet__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0) {
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[__VdlyDim0__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0][0U] 
            = __VdlyVal__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0[0U];
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[__VdlyDim0__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0][1U] 
            = __VdlyVal__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0[1U];
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[__VdlyDim0__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0][2U] 
            = __VdlyVal__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0[2U];
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[__VdlyDim0__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0][3U] 
            = __VdlyVal__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v0[3U];
    }
    if (__VdlySet__gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers__v1) {
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0U][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0U][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0U][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0U][3U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[1U][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[1U][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[1U][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[1U][3U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[2U][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[2U][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[2U][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[2U][3U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[3U][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[3U][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[3U][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[3U][3U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[4U][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[4U][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[4U][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[4U][3U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[5U][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[5U][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[5U][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[5U][3U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[6U][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[6U][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[6U][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[6U][3U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[7U][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[7U][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[7U][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[7U][3U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[8U][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[8U][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[8U][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[8U][3U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[9U][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[9U][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[9U][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[9U][3U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xaU][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xaU][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xaU][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xaU][3U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xbU][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xbU][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xbU][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xbU][3U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xcU][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xcU][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xcU][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xcU][3U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xdU][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xdU][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xdU][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xdU][3U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xeU][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xeU][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xeU][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xeU][3U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xfU][0U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xfU][1U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xfU][2U] = 0U;
        vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__registers[0xfU][3U] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__gpu_top__DOT__shader_loader_inst__DOT__instruction_mem__v0;
    __VdlyVal__gpu_top__DOT__shader_loader_inst__DOT__instruction_mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__gpu_top__DOT__shader_loader_inst__DOT__instruction_mem__v0;
    __VdlyDim0__gpu_top__DOT__shader_loader_inst__DOT__instruction_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu_top__DOT__shader_loader_inst__DOT__instruction_mem__v0;
    __VdlySet__gpu_top__DOT__shader_loader_inst__DOT__instruction_mem__v0 = 0;
    // Body
    __VdlySet__gpu_top__DOT__shader_loader_inst__DOT__instruction_mem__v0 = 0U;
    if (vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__i_host_we) {
        __VdlyVal__gpu_top__DOT__shader_loader_inst__DOT__instruction_mem__v0 
            = vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__i_host_wdata;
        __VdlyDim0__gpu_top__DOT__shader_loader_inst__DOT__instruction_mem__v0 
            = vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__i_host_addr;
        __VdlySet__gpu_top__DOT__shader_loader_inst__DOT__instruction_mem__v0 = 1U;
    }
    if (__VdlySet__gpu_top__DOT__shader_loader_inst__DOT__instruction_mem__v0) {
        vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__instruction_mem[__VdlyDim0__gpu_top__DOT__shader_loader_inst__DOT__instruction_mem__v0] 
            = __VdlyVal__gpu_top__DOT__shader_loader_inst__DOT__instruction_mem__v0;
    }
    vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__o_host_rdata 
        = vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__instruction_mem
        [vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__i_host_addr];
    vlSelfRef.gpu_top__DOT__shader_host_rdata = vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__o_host_rdata;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__gpu_top__DOT__current_vertex;
    __Vdly__gpu_top__DOT__current_vertex = 0;
    // Body
    __Vdly__gpu_top__DOT__current_vertex = vlSelfRef.gpu_top__DOT__current_vertex;
    if (vlSelfRef.gpu_top__DOT__glbl_rst_n) {
        if (((0U == (IData)(vlSelfRef.gpu_top__DOT__pipe_state)) 
             & (IData)(vlSelfRef.gpu_top__DOT__controller_start))) {
            __Vdly__gpu_top__DOT__current_vertex = 0U;
        } else if (((1U == (IData)(vlSelfRef.gpu_top__DOT__pipe_state)) 
                    & (IData)(vlSelfRef.gpu_top__DOT__vertex_fetch_done))) {
            __Vdly__gpu_top__DOT__current_vertex = 
                (0xffffU & ((IData)(3U) + (IData)(vlSelfRef.gpu_top__DOT__current_vertex)));
        }
        vlSelfRef.gpu_top__DOT__controller_start = 0U;
        if (vlSelfRef.gpu_top__DOT__i_bus_we) {
            if ((0U != vlSelfRef.gpu_top__DOT__i_bus_addr)) {
                if ((8U != vlSelfRef.gpu_top__DOT__i_bus_addr)) {
                    if ((0xcU == vlSelfRef.gpu_top__DOT__i_bus_addr)) {
                        vlSelfRef.gpu_top__DOT__vertex_count 
                            = (0xffffU & vlSelfRef.gpu_top__DOT__i_bus_wdata);
                    }
                    if ((0xcU != vlSelfRef.gpu_top__DOT__i_bus_addr)) {
                        if ((0x10U == vlSelfRef.gpu_top__DOT__i_bus_addr)) {
                            vlSelfRef.gpu_top__DOT__shader_pc 
                                = vlSelfRef.gpu_top__DOT__i_bus_wdata;
                        }
                    }
                }
                if ((8U == vlSelfRef.gpu_top__DOT__i_bus_addr)) {
                    vlSelfRef.gpu_top__DOT__vertex_base_addr 
                        = vlSelfRef.gpu_top__DOT__i_bus_wdata;
                }
            }
            if ((0U == vlSelfRef.gpu_top__DOT__i_bus_addr)) {
                if ((1U & vlSelfRef.gpu_top__DOT__i_bus_wdata)) {
                    vlSelfRef.gpu_top__DOT__controller_start = 1U;
                }
            }
        }
        vlSelfRef.gpu_top__DOT__pipe_state = vlSelfRef.gpu_top__DOT__next_pipe_state;
    } else {
        __Vdly__gpu_top__DOT__current_vertex = 0U;
        vlSelfRef.gpu_top__DOT__vertex_count = 0U;
        vlSelfRef.gpu_top__DOT__vertex_base_addr = 0U;
        vlSelfRef.gpu_top__DOT__shader_pc = 0U;
        vlSelfRef.gpu_top__DOT__controller_start = 0U;
        vlSelfRef.gpu_top__DOT__pipe_state = 0U;
    }
    vlSelfRef.gpu_top__DOT__current_vertex = __Vdly__gpu_top__DOT__current_vertex;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_vertex_index 
        = vlSelfRef.gpu_top__DOT__current_vertex;
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_base_addr 
        = vlSelfRef.gpu_top__DOT__vertex_base_addr;
    vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__i_gpu_addr 
        = (0xffU & vlSelfRef.gpu_top__DOT__shader_pc);
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_mem_addr 
        = (vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_base_addr 
           + ((IData)(0x2cU) * (IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_vertex_index)));
    vlSelfRef.gpu_top__DOT__shader_exec_en = (2U == (IData)(vlSelfRef.gpu_top__DOT__pipe_state));
    vlSelfRef.gpu_top__DOT__rast_start = (3U == (IData)(vlSelfRef.gpu_top__DOT__pipe_state));
    vlSelfRef.gpu_top__DOT__pipeline_busy = (0U != (IData)(vlSelfRef.gpu_top__DOT__pipe_state));
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_start_fetch 
        = (1U == (IData)(vlSelfRef.gpu_top__DOT__pipe_state));
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__i_pipeline_busy 
        = vlSelfRef.gpu_top__DOT__pipeline_busy;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__gpu_top__DOT__rast_inst__DOT__is_running;
    __Vdly__gpu_top__DOT__rast_inst__DOT__is_running = 0;
    SData/*9:0*/ __Vdly__gpu_top__DOT__rast_inst__DOT__x_reg;
    __Vdly__gpu_top__DOT__rast_inst__DOT__x_reg = 0;
    SData/*9:0*/ __Vdly__gpu_top__DOT__rast_inst__DOT__y_reg;
    __Vdly__gpu_top__DOT__rast_inst__DOT__y_reg = 0;
    // Body
    __Vdly__gpu_top__DOT__rast_inst__DOT__is_running 
        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__is_running;
    __Vdly__gpu_top__DOT__rast_inst__DOT__x_reg = vlSelfRef.gpu_top__DOT__rast_inst__DOT__x_reg;
    __Vdly__gpu_top__DOT__rast_inst__DOT__y_reg = vlSelfRef.gpu_top__DOT__rast_inst__DOT__y_reg;
    if (vlSelfRef.gpu_top__DOT__rast_inst__DOT__rst_n) {
        if (vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_start) {
            __Vdly__gpu_top__DOT__rast_inst__DOT__is_running = 1U;
            if (VL_LTS_III(10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_x), (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_x))) {
                if (VL_LTS_III(10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_x), (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_x))) {
                    __Vdly__gpu_top__DOT__rast_inst__DOT__x_reg 
                        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_x;
                    vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_min_x_reg 
                        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_x;
                } else {
                    __Vdly__gpu_top__DOT__rast_inst__DOT__x_reg 
                        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_x;
                    vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_min_x_reg 
                        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_x;
                }
            } else if (VL_LTS_III(10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_x), (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_x))) {
                __Vdly__gpu_top__DOT__rast_inst__DOT__x_reg 
                    = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_x;
                vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_min_x_reg 
                    = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_x;
            } else {
                __Vdly__gpu_top__DOT__rast_inst__DOT__x_reg 
                    = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_x;
                vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_min_x_reg 
                    = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_x;
            }
            if (VL_LTS_III(10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_y), (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_y))) {
                if (VL_LTS_III(10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_y), (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_y))) {
                    __Vdly__gpu_top__DOT__rast_inst__DOT__y_reg 
                        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_y;
                    vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_min_y_reg 
                        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_y;
                } else {
                    __Vdly__gpu_top__DOT__rast_inst__DOT__y_reg 
                        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_y;
                    vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_min_y_reg 
                        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_y;
                }
            } else if (VL_LTS_III(10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_y), (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_y))) {
                __Vdly__gpu_top__DOT__rast_inst__DOT__y_reg 
                    = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_y;
                vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_min_y_reg 
                    = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_y;
            } else {
                __Vdly__gpu_top__DOT__rast_inst__DOT__y_reg 
                    = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_y;
                vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_min_y_reg 
                    = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_y;
            }
            vlSelfRef.gpu_top__DOT__rast_inst__DOT__v1_x_reg 
                = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_x;
            vlSelfRef.gpu_top__DOT__rast_inst__DOT__v0_x_reg 
                = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_x;
            vlSelfRef.gpu_top__DOT__rast_inst__DOT__v0_y_reg 
                = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_y;
            vlSelfRef.gpu_top__DOT__rast_inst__DOT__v1_y_reg 
                = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_y;
            vlSelfRef.gpu_top__DOT__rast_inst__DOT__v2_x_reg 
                = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_x;
            vlSelfRef.gpu_top__DOT__rast_inst__DOT__v2_y_reg 
                = vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_y;
            vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_max_x_reg 
                = (VL_GTS_III(10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_x), (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_x))
                    ? (VL_GTS_III(10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_x), (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_x))
                        ? (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_x)
                        : (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_x))
                    : (VL_GTS_III(10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_x), (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_x))
                        ? (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_x)
                        : (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_x)));
            vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_max_y_reg 
                = (VL_GTS_III(10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_y), (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_y))
                    ? (VL_GTS_III(10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_y), (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_y))
                        ? (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v0_y)
                        : (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_y))
                    : (VL_GTS_III(10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_y), (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_y))
                        ? (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v1_y)
                        : (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_v2_y)));
        } else if (vlSelfRef.gpu_top__DOT__rast_inst__DOT__is_running) {
            if (((IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__x_reg) 
                 == (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_max_x_reg))) {
                __Vdly__gpu_top__DOT__rast_inst__DOT__x_reg 
                    = vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_min_x_reg;
                if (((IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__y_reg) 
                     == (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_max_y_reg))) {
                    __Vdly__gpu_top__DOT__rast_inst__DOT__is_running = 0U;
                } else {
                    __Vdly__gpu_top__DOT__rast_inst__DOT__y_reg 
                        = (0x3ffU & ((IData)(1U) + 
                                     VL_EXTENDS_II(10,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__y_reg))));
                }
            } else {
                __Vdly__gpu_top__DOT__rast_inst__DOT__x_reg 
                    = (0x3ffU & ((IData)(1U) + VL_EXTENDS_II(10,10, (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__x_reg))));
            }
        }
    } else {
        __Vdly__gpu_top__DOT__rast_inst__DOT__is_running = 0U;
        __Vdly__gpu_top__DOT__rast_inst__DOT__x_reg = 0U;
        __Vdly__gpu_top__DOT__rast_inst__DOT__y_reg = 0U;
        vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_min_y_reg = 0U;
        vlSelfRef.gpu_top__DOT__rast_inst__DOT__v1_x_reg = 0U;
        vlSelfRef.gpu_top__DOT__rast_inst__DOT__v0_x_reg = 0U;
        vlSelfRef.gpu_top__DOT__rast_inst__DOT__v0_y_reg = 0U;
        vlSelfRef.gpu_top__DOT__rast_inst__DOT__v1_y_reg = 0U;
        vlSelfRef.gpu_top__DOT__rast_inst__DOT__v2_x_reg = 0U;
        vlSelfRef.gpu_top__DOT__rast_inst__DOT__v2_y_reg = 0U;
        vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_max_x_reg = 0U;
        vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_min_x_reg = 0U;
        vlSelfRef.gpu_top__DOT__rast_inst__DOT__bbox_max_y_reg = 0U;
    }
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__is_running 
        = __Vdly__gpu_top__DOT__rast_inst__DOT__is_running;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__x_reg = __Vdly__gpu_top__DOT__rast_inst__DOT__x_reg;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__y_reg = __Vdly__gpu_top__DOT__rast_inst__DOT__y_reg;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_done 
        = (1U & (~ (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__is_running)));
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_fragment_x 
        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__x_reg;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_fragment_y 
        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__y_reg;
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
    vlSelfRef.gpu_top__DOT__rasterizer_done = vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_done;
    vlSelfRef.gpu_top__DOT__frag_x = vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_fragment_x;
    vlSelfRef.gpu_top__DOT__frag_y = vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_fragment_y;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_lambda2 
        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__edge2;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_lambda0 
        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__edge0;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_lambda1 
        = vlSelfRef.gpu_top__DOT__rast_inst__DOT__edge1;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__is_inside 
        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,21, vlSelfRef.gpu_top__DOT__rast_inst__DOT__edge0)) 
           & (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,21, vlSelfRef.gpu_top__DOT__rast_inst__DOT__edge1)) 
              & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,21, vlSelfRef.gpu_top__DOT__rast_inst__DOT__edge2))));
    vlSelfRef.gpu_top__DOT__lambda2 = vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_lambda2;
    vlSelfRef.gpu_top__DOT__lambda0 = vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_lambda0;
    vlSelfRef.gpu_top__DOT__lambda1 = vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_lambda1;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__o_fragment_valid 
        = ((IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__is_inside) 
           & (IData)(vlSelfRef.gpu_top__DOT__rast_inst__DOT__is_running));
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
    vlSelfRef.gpu_top__DOT__fifo_wr = vlSelfRef.gpu_top__DOT__rast_frag_valid;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*82:0*/ __VdlyVal__gpu_top__DOT__frag_fifo__DOT__mem_array__v0;
    VL_ZERO_W(83, __VdlyVal__gpu_top__DOT__frag_fifo__DOT__mem_array__v0);
    CData/*5:0*/ __VdlyDim0__gpu_top__DOT__frag_fifo__DOT__mem_array__v0;
    __VdlyDim0__gpu_top__DOT__frag_fifo__DOT__mem_array__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu_top__DOT__frag_fifo__DOT__mem_array__v0;
    __VdlySet__gpu_top__DOT__frag_fifo__DOT__mem_array__v0 = 0;
    // Body
    __VdlySet__gpu_top__DOT__frag_fifo__DOT__mem_array__v0 = 0U;
    if (((IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_wr_en) 
         & (~ (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_full)))) {
        __VdlyVal__gpu_top__DOT__frag_fifo__DOT__mem_array__v0[0U] 
            = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_w_data[0U];
        __VdlyVal__gpu_top__DOT__frag_fifo__DOT__mem_array__v0[1U] 
            = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_w_data[1U];
        __VdlyVal__gpu_top__DOT__frag_fifo__DOT__mem_array__v0[2U] 
            = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_w_data[2U];
        __VdlyDim0__gpu_top__DOT__frag_fifo__DOT__mem_array__v0 
            = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__wr_ptr_reg;
        __VdlySet__gpu_top__DOT__frag_fifo__DOT__mem_array__v0 = 1U;
    }
    if (__VdlySet__gpu_top__DOT__frag_fifo__DOT__mem_array__v0) {
        vlSelfRef.gpu_top__DOT__frag_fifo__DOT__mem_array[__VdlyDim0__gpu_top__DOT__frag_fifo__DOT__mem_array__v0][0U] 
            = __VdlyVal__gpu_top__DOT__frag_fifo__DOT__mem_array__v0[0U];
        vlSelfRef.gpu_top__DOT__frag_fifo__DOT__mem_array[__VdlyDim0__gpu_top__DOT__frag_fifo__DOT__mem_array__v0][1U] 
            = __VdlyVal__gpu_top__DOT__frag_fifo__DOT__mem_array__v0[1U];
        vlSelfRef.gpu_top__DOT__frag_fifo__DOT__mem_array[__VdlyDim0__gpu_top__DOT__frag_fifo__DOT__mem_array__v0][2U] 
            = __VdlyVal__gpu_top__DOT__frag_fifo__DOT__mem_array__v0[2U];
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_write_en 
        = ((IData)(vlSelfRef.gpu_top__DOT__core0__DOT__rst_n) 
           && (IData)(vlSelfRef.gpu_top__DOT__core0__DOT__i_exec_en));
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_en 
        = vlSelfRef.gpu_top__DOT__core0__DOT__reg_write_en;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__tex_unit__DOT__o_data_valid 
        = ((IData)(vlSelfRef.gpu_top__DOT__tex_unit__DOT__rst_n) 
           && (IData)(vlSelfRef.gpu_top__DOT__tex_unit__DOT__i_req_valid));
    vlSelfRef.gpu_top__DOT__texel_valid = vlSelfRef.gpu_top__DOT__tex_unit__DOT__o_data_valid;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.gpu_top__DOT__fs_inst__DOT__rst_n) {
        if (vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_texel_valid) {
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[0U] 
                = vlSelfRef.gpu_top__DOT__fs_inst__DOT__modulated_color[0U];
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[1U] 
                = vlSelfRef.gpu_top__DOT__fs_inst__DOT__modulated_color[1U];
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[2U] 
                = vlSelfRef.gpu_top__DOT__fs_inst__DOT__modulated_color[2U];
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[3U] 
                = vlSelfRef.gpu_top__DOT__fs_inst__DOT__modulated_color[3U];
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_x 
                = vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_x;
            vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_y 
                = vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_y;
        }
    } else {
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[0U] = 0U;
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[1U] = 0U;
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[2U] = 0U;
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[3U] = 0U;
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_x = 0U;
        vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_y = 0U;
    }
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_valid 
        = ((IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__rst_n) 
           && (IData)(vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_texel_valid));
    vlSelfRef.gpu_top__DOT__pixel_color[0U] = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[0U];
    vlSelfRef.gpu_top__DOT__pixel_color[1U] = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[1U];
    vlSelfRef.gpu_top__DOT__pixel_color[2U] = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[2U];
    vlSelfRef.gpu_top__DOT__pixel_color[3U] = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_color[3U];
    vlSelfRef.gpu_top__DOT__pixel_x = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_x;
    vlSelfRef.gpu_top__DOT__pixel_y = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_y;
    vlSelfRef.gpu_top__DOT__pixel_we = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_pixel_valid;
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_color 
        = vlSelfRef.gpu_top__DOT__pixel_color[0U];
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_x 
        = vlSelfRef.gpu_top__DOT__pixel_x;
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_y 
        = vlSelfRef.gpu_top__DOT__pixel_y;
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_we 
        = vlSelfRef.gpu_top__DOT__pixel_we;
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__o_mem_wdata 
        = vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_color;
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__write_addr 
        = (0x7ffffU & (((IData)(0x280U) * (IData)(vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_y)) 
                       + (IData)(vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_x)));
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__o_mem_req 
        = vlSelfRef.gpu_top__DOT__fb_inst__DOT__i_pixel_we;
    vlSelfRef.gpu_top__DOT__master_wdata[0U] = 0U;
    vlSelfRef.gpu_top__DOT__master_wdata[1U] = 0U;
    vlSelfRef.gpu_top__DOT__master_wdata[2U] = vlSelfRef.gpu_top__DOT__fb_inst__DOT__o_mem_wdata;
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__o_mem_addr 
        = vlSelfRef.gpu_top__DOT__fb_inst__DOT__write_addr;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_wdata[0U] 
        = vlSelfRef.gpu_top__DOT__master_wdata[0U];
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_wdata[1U] 
        = vlSelfRef.gpu_top__DOT__master_wdata[1U];
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_wdata[2U] 
        = vlSelfRef.gpu_top__DOT__master_wdata[2U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__rst_s2 
        = ((IData)(vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__arst_n) 
           && (IData)(vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__rst_s1));
    vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__rst_s1 
        = vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__arst_n;
    vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__srst_n 
        = vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__rst_s2;
    vlSelfRef.gpu_top__DOT__glbl_rst_n = vlSelfRef.gpu_top__DOT__reset_sync_inst__DOT__srst_n;
    vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__rst_n 
        = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__fb_inst__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__tex_unit__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__core0__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__rst_n 
        = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__rst_n 
        = vlSelfRef.gpu_top__DOT__core0__DOT__rst_n;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rst_n) {
        vlSelfRef.gpu_top__DOT__frag_fifo__DOT__count_reg 
            = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__count_next;
        vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rd_ptr_reg 
            = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rd_ptr_next;
        vlSelfRef.gpu_top__DOT__frag_fifo__DOT__wr_ptr_reg 
            = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__wr_ptr_next;
    } else {
        vlSelfRef.gpu_top__DOT__frag_fifo__DOT__count_reg = 0U;
        vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rd_ptr_reg = 0U;
        vlSelfRef.gpu_top__DOT__frag_fifo__DOT__wr_ptr_reg = 0U;
    }
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_full 
        = (0x40U == (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__count_reg));
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_empty 
        = (0U == (IData)(vlSelfRef.gpu_top__DOT__frag_fifo__DOT__count_reg));
    vlSelfRef.gpu_top__DOT__fifo_full = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_full;
    vlSelfRef.gpu_top__DOT__fifo_empty = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_empty;
    vlSelfRef.gpu_top__DOT__fs_in_valid = (1U & (~ (IData)(vlSelfRef.gpu_top__DOT__fifo_empty)));
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_valid 
        = vlSelfRef.gpu_top__DOT__fs_in_valid;
    vlSelfRef.gpu_top__DOT__fifo_rd = ((~ (IData)(vlSelfRef.gpu_top__DOT__fifo_full)) 
                                       & (IData)(vlSelfRef.gpu_top__DOT__fs_in_valid));
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_tex_req_valid 
        = vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_frag_valid;
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_rd_en 
        = vlSelfRef.gpu_top__DOT__fifo_rd;
    vlSelfRef.gpu_top__DOT__tex_req_valid = vlSelfRef.gpu_top__DOT__fs_inst__DOT__o_tex_req_valid;
    vlSelfRef.gpu_top__DOT__tex_unit__DOT__i_req_valid 
        = vlSelfRef.gpu_top__DOT__tex_req_valid;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__rst_n) {
        if ((0U != (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state))) {
            vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__last_grant_reg 
                = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state;
        }
    } else {
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__last_grant_reg = 1U;
    }
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__priority_mask 
        = (0x3fU & VL_SHIFTR_III(6,6,32, 0x38U, VL_COUNTONES_I((IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__last_grant_reg))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((1U == (IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__current_state)) 
         & (IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_ready))) {
        vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[0U] 
            = vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[0U];
        vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[1U] 
            = vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[1U];
        vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[2U] 
            = vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[2U];
        vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[3U] 
            = vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[3U];
        vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[4U] 
            = vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[4U];
        vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[5U] 
            = vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[5U];
        vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[6U] 
            = vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[6U];
        vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[7U] 
            = vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[7U];
        vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[8U] 
            = vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[8U];
        vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[9U] 
            = vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[9U];
        vlSelfRef.gpu_top__DOT__vf_inst__DOT__data_reg[0xaU] 
            = vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_rdata[0xaU];
    }
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
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__o_gpu_instr 
        = vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__instruction_mem
        [vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__i_gpu_addr];
    vlSelfRef.gpu_top__DOT__shader_instruction = vlSelfRef.gpu_top__DOT__shader_loader_inst__DOT__o_gpu_instr;
    vlSelfRef.gpu_top__DOT__decoder_inst__DOT__i_instruction_word 
        = vlSelfRef.gpu_top__DOT__shader_instruction;
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
    vlSelfRef.gpu_top__DOT__shader_imm = vlSelfRef.gpu_top__DOT__decoder_inst__DOT__o_imm;
    vlSelfRef.gpu_top__DOT__shader_rd = vlSelfRef.gpu_top__DOT__decoder_inst__DOT__o_rd_addr;
    vlSelfRef.gpu_top__DOT__shader_opcode = vlSelfRef.gpu_top__DOT__decoder_inst__DOT__o_opcode;
    vlSelfRef.gpu_top__DOT__shader_rs1 = vlSelfRef.gpu_top__DOT__decoder_inst__DOT__o_rs1_addr;
    vlSelfRef.gpu_top__DOT__shader_rs2 = vlSelfRef.gpu_top__DOT__decoder_inst__DOT__o_rs2_addr;
    vlSelfRef.gpu_top__DOT__core0__DOT__i_rd_addr = vlSelfRef.gpu_top__DOT__shader_rd;
    vlSelfRef.gpu_top__DOT__core0__DOT__i_opcode = vlSelfRef.gpu_top__DOT__shader_opcode;
    vlSelfRef.gpu_top__DOT__core0__DOT__i_rs1_addr 
        = vlSelfRef.gpu_top__DOT__shader_rs1;
    vlSelfRef.gpu_top__DOT__core0__DOT__i_rs2_addr 
        = vlSelfRef.gpu_top__DOT__shader_rs2;
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_addr 
        = vlSelfRef.gpu_top__DOT__core0__DOT__i_rd_addr;
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__i_opcode 
        = vlSelfRef.gpu_top__DOT__core0__DOT__i_opcode;
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_rd_addr_a 
        = vlSelfRef.gpu_top__DOT__core0__DOT__i_rs1_addr;
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_rd_addr_b 
        = vlSelfRef.gpu_top__DOT__core0__DOT__i_rs2_addr;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.o_bus_rdata = vlSelfRef.gpu_top__DOT__o_bus_rdata;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__fire_start_pulse 
        = ((~ (IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__i_pipeline_busy)) 
           & ((0U < (IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__pending_starts_count)) 
              | (IData)(vlSelfRef.gpu_top__DOT__ctrl_inst__DOT__start_cmd)));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__rast_inst__DOT__i_start 
        = vlSelfRef.gpu_top__DOT__rast_start;
    vlSelfRef.gpu_top__DOT__core0__DOT__i_exec_en = vlSelfRef.gpu_top__DOT__shader_exec_en;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_w_data[0U] 
        = vlSelfRef.gpu_top__DOT__fifo_wdata[0U];
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_w_data[1U] 
        = vlSelfRef.gpu_top__DOT__fifo_wdata[1U];
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_w_data[2U] 
        = vlSelfRef.gpu_top__DOT__fifo_wdata[2U];
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__i_wr_en 
        = vlSelfRef.gpu_top__DOT__fifo_wr;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__fs_inst__DOT__i_texel_valid 
        = vlSelfRef.gpu_top__DOT__texel_valid;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__master_addr[0U] = (IData)((QData)((IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_mem_addr)));
    vlSelfRef.gpu_top__DOT__master_addr[1U] = (IData)(
                                                      ((QData)((IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_mem_addr)) 
                                                       >> 0x20U));
    vlSelfRef.gpu_top__DOT__master_addr[2U] = vlSelfRef.gpu_top__DOT__fb_inst__DOT__o_mem_addr;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_addr[0U] 
        = vlSelfRef.gpu_top__DOT__master_addr[0U];
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_addr[1U] 
        = vlSelfRef.gpu_top__DOT__master_addr[1U];
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_addr[2U] 
        = vlSelfRef.gpu_top__DOT__master_addr[2U];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__rst_n 
        = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__rst_n;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_r_data[0U] 
        = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__mem_array
        [vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rd_ptr_reg][0U];
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_r_data[1U] 
        = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__mem_array
        [vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rd_ptr_reg][1U];
    vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_r_data[2U] 
        = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__mem_array
        [vlSelfRef.gpu_top__DOT__frag_fifo__DOT__rd_ptr_reg][2U];
    vlSelfRef.gpu_top__DOT__fifo_rdata[0U] = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_r_data[0U];
    vlSelfRef.gpu_top__DOT__fifo_rdata[1U] = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_r_data[1U];
    vlSelfRef.gpu_top__DOT__fifo_rdata[2U] = vlSelfRef.gpu_top__DOT__frag_fifo__DOT__o_r_data[2U];
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
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__current_state 
        = ((IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__rst_n)
            ? (IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__next_state)
            : 0U);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[0U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[0U];
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[1U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[1U];
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[2U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[2U];
    vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[3U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_inst__DOT__o_result[3U];
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_data[0U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[0U];
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_data[1U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[1U];
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_data[2U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[2U];
    vlSelfRef.gpu_top__DOT__core0__DOT__reg_file_inst__DOT__i_wr_data[3U] 
        = vlSelfRef.gpu_top__DOT__core0__DOT__alu_result[3U];
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__color_interp__DOT__term0 
        = (0x1fffffffffffffULL & VL_MULS_QQQ(53, (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,32, vlSelfRef.gpu_top__DOT__color_interp__DOT__i_attr0)), 
                                             (0x1fffffffffffffULL 
                                              & VL_EXTENDS_QI(53,21, vlSelfRef.gpu_top__DOT__color_interp__DOT__i_lambda0))));
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
    vlSelfRef.gpu_top__DOT__color_interp__DOT__term1 
        = (0x1fffffffffffffULL & VL_MULS_QQQ(53, (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,32, vlSelfRef.gpu_top__DOT__color_interp__DOT__i_attr1)), 
                                             (0x1fffffffffffffULL 
                                              & VL_EXTENDS_QI(53,21, vlSelfRef.gpu_top__DOT__color_interp__DOT__i_lambda1))));
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
    vlSelfRef.gpu_top__DOT__color_interp__DOT__term2 
        = (0x1fffffffffffffULL & VL_MULS_QQQ(53, (0x1fffffffffffffULL 
                                                  & VL_EXTENDS_QI(53,32, vlSelfRef.gpu_top__DOT__color_interp__DOT__i_attr2)), 
                                             (0x1fffffffffffffULL 
                                              & VL_EXTENDS_QI(53,21, vlSelfRef.gpu_top__DOT__color_interp__DOT__i_lambda2))));
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
    vlSelfRef.gpu_top__DOT__color_interp__DOT__o_interpolated_attr 
        = (IData)((0x7fffffffffffffULL & VL_SHIFTRS_QQI(55,55,32, vlSelfRef.gpu_top__DOT__color_interp__DOT__sum_terms, 0x15U)));
    vlSelfRef.gpu_top__DOT__u_interp__DOT__o_interpolated_attr 
        = (IData)((0x7fffffffffffffULL & VL_SHIFTRS_QQI(55,55,32, vlSelfRef.gpu_top__DOT__u_interp__DOT__sum_terms, 0x15U)));
    vlSelfRef.gpu_top__DOT__v_interp__DOT__o_interpolated_attr 
        = (IData)((0x7fffffffffffffULL & VL_SHIFTRS_QQI(55,55,32, vlSelfRef.gpu_top__DOT__v_interp__DOT__sum_terms, 0x15U)));
    vlSelfRef.gpu_top__DOT__interpolated_color = vlSelfRef.gpu_top__DOT__color_interp__DOT__o_interpolated_attr;
    vlSelfRef.gpu_top__DOT__interpolated_u = vlSelfRef.gpu_top__DOT__u_interp__DOT__o_interpolated_attr;
    vlSelfRef.gpu_top__DOT__interpolated_v = vlSelfRef.gpu_top__DOT__v_interp__DOT__o_interpolated_attr;
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
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__rst_n = vlSelfRef.gpu_top__DOT__glbl_rst_n;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = (((IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_start_fetch) 
                     << 3U) | (((IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__i_mem_ready) 
                                << 2U) | (IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__current_state)));
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__next_state 
        = Vtop__ConstPool__TABLE_h7a202c27_0[__Vtableidx2];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_mem_req 
        = Vtop__ConstPool__TABLE_haed2dea1_0[__Vtableidx2];
    vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_fetch_done 
        = Vtop__ConstPool__TABLE_he91046c0_0[__Vtableidx2];
    vlSelfRef.gpu_top__DOT__vertex_fetch_done = vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_fetch_done;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__master_req = (((IData)(vlSelfRef.gpu_top__DOT__fb_inst__DOT__o_mem_req) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.gpu_top__DOT__core0__DOT__o_mem_req) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.gpu_top__DOT__vf_inst__DOT__o_mem_req)));
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_req 
        = vlSelfRef.gpu_top__DOT__master_req;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__i_requests 
        = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__i_master_req;
    if ((0U != (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__i_requests))) {
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 1U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 2U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 3U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 4U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 5U;
        vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 6U;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state = 0U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__unnamedblk1__DOT__grant_found = 0U;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__masked_requests 
        = ((((IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__i_requests) 
             << 3U) | (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__i_requests)) 
           & (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__priority_mask));
    if ((0U != (IData)(vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__i_requests))) {
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
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__o_grants 
        = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__next_grant_state;
    vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__grants 
        = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__arbiter_inst__DOT__o_grants;
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
    vlSelfRef.gpu_top__DOT__slave_addr = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_slave_addr;
    vlSelfRef.gpu_top__DOT__slave_wdata = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_slave_wdata;
    vlSelfRef.gpu_top__DOT__slave_req = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_slave_req;
    vlSelfRef.gpu_top__DOT__master_rdata[0U] = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_master_rdata[0U];
    vlSelfRef.gpu_top__DOT__master_rdata[1U] = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_master_rdata[1U];
    vlSelfRef.gpu_top__DOT__master_rdata[2U] = vlSelfRef.gpu_top__DOT__interconnect_inst__DOT__o_master_rdata[2U];
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

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<23> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/anime/Desktop/Programming/2025-AMDHardware-GPU/tb/../src/gpu_top.sv", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/anime/Desktop/Programming/2025-AMDHardware-GPU/tb/../src/gpu_top.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/Users/anime/Desktop/Programming/2025-AMDHardware-GPU/tb/../src/gpu_top.sv", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.i_bus_we & 0xfeU)))) {
        Verilated::overWidthError("i_bus_we");}
}
#endif  // VL_DEBUG
