// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_warp_mask.h for the primary calling header

#include "Vtb_warp_mask__pch.h"
#include "Vtb_warp_mask___024root.h"

VL_ATTR_COLD void Vtb_warp_mask___024root___eval_static__TOP(Vtb_warp_mask___024root* vlSelf);

VL_ATTR_COLD void Vtb_warp_mask___024root___eval_static(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___eval_static\n"); );
    // Body
    Vtb_warp_mask___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_warp_mask___024root___eval_static__TOP(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_warp_mask__DOT__test_count = 0U;
    vlSelf->tb_warp_mask__DOT__pass_count = 0U;
    vlSelf->tb_warp_mask__DOT__fail_count = 0U;
}

VL_ATTR_COLD void Vtb_warp_mask___024root___eval_final(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_warp_mask___024root___eval_settle(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_warp_mask___024root___dump_triggers__act(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_warp_mask.clk or negedge tb_warp_mask.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_warp_mask.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_warp_mask___024root___dump_triggers__nba(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_warp_mask.clk or negedge tb_warp_mask.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_warp_mask.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_warp_mask___024root___ctor_var_reset(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_warp_mask__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_mask__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_mask__DOT__mask_update = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_mask__DOT__mask_in = VL_RAND_RESET_I(8);
    vlSelf->tb_warp_mask__DOT__test_count = 0;
    vlSelf->tb_warp_mask__DOT__pass_count = 0;
    vlSelf->tb_warp_mask__DOT__fail_count = 0;
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_warp_mask__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_mask__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_mask__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
