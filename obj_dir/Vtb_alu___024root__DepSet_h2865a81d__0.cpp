// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_alu.h for the primary calling header

#include "Vtb_alu__pch.h"
#include "Vtb_alu___024root.h"

VlCoroutine Vtb_alu___024root___eval_initial__TOP__Vtiming__0(Vtb_alu___024root* vlSelf);
VlCoroutine Vtb_alu___024root___eval_initial__TOP__Vtiming__1(Vtb_alu___024root* vlSelf);
VlCoroutine Vtb_alu___024root___eval_initial__TOP__Vtiming__2(Vtb_alu___024root* vlSelf);

void Vtb_alu___024root___eval_initial(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_alu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_alu___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_alu___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_alu__DOT__rst_n__0 
        = vlSelf->tb_alu__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_alu___024root___eval_initial__TOP__Vtiming__0(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_alu__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_alu.sv", 
                                           38);
        vlSelf->tb_alu__DOT__clk = (1U & (~ (IData)(vlSelf->tb_alu__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_alu___024root___eval_initial__TOP__Vtiming__1(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->tb_alu__DOT__rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_alu.sv", 
                                       44);
    vlSelf->tb_alu__DOT__rst_n = 1U;
}

VL_INLINE_OPT void Vtb_alu___024root___act_comb__TOP__0(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_alu__DOT__result = 0U;
    vlSelf->tb_alu__DOT__overflow = 0U;
    vlSelf->tb_alu__DOT__dut__DOT__add_result_ext = 
        (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_alu__DOT__operand1)) 
                           + (QData)((IData)(vlSelf->tb_alu__DOT__operand2))));
    vlSelf->tb_alu__DOT__dut__DOT__mul_result_ext = 
        VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_alu__DOT__operand1), 
                    VL_EXTENDS_QI(64,32, vlSelf->tb_alu__DOT__operand2));
    vlSelf->tb_alu__DOT__dut__DOT__fma_mul_result = 
        VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_alu__DOT__operand1), 
                    VL_EXTENDS_QI(64,32, vlSelf->tb_alu__DOT__operand2));
    vlSelf->tb_alu__DOT__dut__DOT__fma_result_ext = 
        (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_alu__DOT__dut__DOT__fma_mul_result)) 
                           + (QData)((IData)(vlSelf->tb_alu__DOT__operand3))));
    if ((8U & (IData)(vlSelf->tb_alu__DOT__opcode))) {
        vlSelf->tb_alu__DOT__result = 0U;
        vlSelf->tb_alu__DOT__overflow = 0U;
    } else if ((4U & (IData)(vlSelf->tb_alu__DOT__opcode))) {
        if ((2U & (IData)(vlSelf->tb_alu__DOT__opcode))) {
            vlSelf->tb_alu__DOT__result = 0U;
            vlSelf->tb_alu__DOT__overflow = 0U;
        } else if ((1U & (IData)(vlSelf->tb_alu__DOT__opcode))) {
            vlSelf->tb_alu__DOT__result = 0U;
            vlSelf->tb_alu__DOT__overflow = 0U;
        } else {
            vlSelf->tb_alu__DOT__result = ((vlSelf->tb_alu__DOT__operand1 
                                            >> 0x1fU)
                                            ? 0U : vlSelf->tb_alu__DOT__operand1);
            vlSelf->tb_alu__DOT__overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb_alu__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->tb_alu__DOT__opcode))) {
            vlSelf->tb_alu__DOT__result = (VL_GTS_III(32, vlSelf->tb_alu__DOT__operand1, vlSelf->tb_alu__DOT__operand2)
                                            ? vlSelf->tb_alu__DOT__operand1
                                            : vlSelf->tb_alu__DOT__operand2);
            vlSelf->tb_alu__DOT__overflow = 0U;
        } else {
            vlSelf->tb_alu__DOT__result = (IData)(vlSelf->tb_alu__DOT__dut__DOT__fma_result_ext);
            vlSelf->tb_alu__DOT__dut__DOT__mul_ovf 
                = ((IData)((vlSelf->tb_alu__DOT__dut__DOT__fma_mul_result 
                            >> 0x20U)) != (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_alu__DOT__dut__DOT__fma_mul_result 
                                                                 >> 0x1fU))))));
            vlSelf->tb_alu__DOT__dut__DOT__add_ovf 
                = (((1U & (IData)((vlSelf->tb_alu__DOT__dut__DOT__fma_mul_result 
                                   >> 0x1fU))) == (vlSelf->tb_alu__DOT__operand3 
                                                   >> 0x1fU)) 
                   & ((vlSelf->tb_alu__DOT__result 
                       >> 0x1fU) != (1U & (IData)((vlSelf->tb_alu__DOT__dut__DOT__fma_mul_result 
                                                   >> 0x1fU)))));
            vlSelf->tb_alu__DOT__overflow = ((IData)(vlSelf->tb_alu__DOT__dut__DOT__mul_ovf) 
                                             | (IData)(vlSelf->tb_alu__DOT__dut__DOT__add_ovf));
        }
    } else if ((1U & (IData)(vlSelf->tb_alu__DOT__opcode))) {
        vlSelf->tb_alu__DOT__result = (IData)(vlSelf->tb_alu__DOT__dut__DOT__mul_result_ext);
        vlSelf->tb_alu__DOT__overflow = ((IData)((vlSelf->tb_alu__DOT__dut__DOT__mul_result_ext 
                                                  >> 0x20U)) 
                                         != (- (IData)(
                                                       (vlSelf->tb_alu__DOT__result 
                                                        >> 0x1fU))));
    } else {
        vlSelf->tb_alu__DOT__result = (IData)(vlSelf->tb_alu__DOT__dut__DOT__add_result_ext);
        vlSelf->tb_alu__DOT__overflow = (((vlSelf->tb_alu__DOT__operand1 
                                           >> 0x1fU) 
                                          == (vlSelf->tb_alu__DOT__operand2 
                                              >> 0x1fU)) 
                                         & ((vlSelf->tb_alu__DOT__result 
                                             >> 0x1fU) 
                                            != (vlSelf->tb_alu__DOT__operand1 
                                                >> 0x1fU)));
    }
}

void Vtb_alu___024root___eval_act(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_alu___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_alu___024root___eval_nba(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_nba\n"); );
    // Body
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_alu___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vtb_alu___024root___timing_resume(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h6352b31c__0.resume("@([changed] tb_alu.rst_n)");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_alu___024root___timing_commit(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h6352b31c__0.commit("@([changed] tb_alu.rst_n)");
    }
}

void Vtb_alu___024root___eval_triggers__act(Vtb_alu___024root* vlSelf);

bool Vtb_alu___024root___eval_phase__act(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_alu___024root___eval_triggers__act(vlSelf);
    Vtb_alu___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_alu___024root___timing_resume(vlSelf);
        Vtb_alu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_alu___024root___eval_phase__nba(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_alu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_alu___024root___dump_triggers__nba(Vtb_alu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_alu___024root___dump_triggers__act(Vtb_alu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_alu___024root___eval(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_alu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_alu.sv", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_alu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_alu.sv", 8, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_alu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_alu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_alu___024root___eval_debug_assertions(Vtb_alu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
