// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_warp_mask.h for the primary calling header

#include "Vtb_warp_mask__pch.h"
#include "Vtb_warp_mask___024root.h"

VlCoroutine Vtb_warp_mask___024root___eval_initial__TOP__Vtiming__0(Vtb_warp_mask___024root* vlSelf);
VlCoroutine Vtb_warp_mask___024root___eval_initial__TOP__Vtiming__1(Vtb_warp_mask___024root* vlSelf);

void Vtb_warp_mask___024root___eval_initial(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_warp_mask___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_warp_mask___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_mask__DOT__clk__0 
        = vlSelf->tb_warp_mask__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_mask__DOT__rst_n__0 
        = vlSelf->tb_warp_mask__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_warp_mask___024root___eval_initial__TOP__Vtiming__0(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_warp_mask__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_warp_mask.sv", 
                                           39);
        vlSelf->tb_warp_mask__DOT__clk = (1U & (~ (IData)(vlSelf->tb_warp_mask__DOT__clk)));
    }
}

void Vtb_warp_mask___024root___eval_act(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_warp_mask___024root___nba_sequent__TOP__0(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_warp_mask__DOT__rst_n) {
        if (vlSelf->tb_warp_mask__DOT__mask_update) {
            vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r 
                = vlSelf->tb_warp_mask__DOT__mask_in;
        }
    } else {
        vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r = 0xffU;
    }
}

void Vtb_warp_mask___024root___eval_nba(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_warp_mask___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_warp_mask___024root___timing_resume(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h6be9514e__0.resume("@(posedge tb_warp_mask.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_warp_mask___024root___timing_commit(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h6be9514e__0.commit("@(posedge tb_warp_mask.clk)");
    }
}

void Vtb_warp_mask___024root___eval_triggers__act(Vtb_warp_mask___024root* vlSelf);

bool Vtb_warp_mask___024root___eval_phase__act(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_warp_mask___024root___eval_triggers__act(vlSelf);
    Vtb_warp_mask___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_warp_mask___024root___timing_resume(vlSelf);
        Vtb_warp_mask___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_warp_mask___024root___eval_phase__nba(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_warp_mask___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_warp_mask___024root___dump_triggers__nba(Vtb_warp_mask___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_warp_mask___024root___dump_triggers__act(Vtb_warp_mask___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_warp_mask___024root___eval(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_warp_mask___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_warp_mask.sv", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_warp_mask___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_warp_mask.sv", 8, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_warp_mask___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_warp_mask___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_warp_mask___024root___eval_debug_assertions(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
