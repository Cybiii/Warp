// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_instruction_fifo.h for the primary calling header

#include "Vtb_instruction_fifo__pch.h"
#include "Vtb_instruction_fifo___024root.h"

VlCoroutine Vtb_instruction_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_instruction_fifo___024root* vlSelf);
VlCoroutine Vtb_instruction_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_instruction_fifo___024root* vlSelf);

void Vtb_instruction_fifo___024root___eval_initial(Vtb_instruction_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_instruction_fifo___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_instruction_fifo___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_instruction_fifo__DOT__clk__0 
        = vlSelf->tb_instruction_fifo__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_instruction_fifo__DOT__rst_n__0 
        = vlSelf->tb_instruction_fifo__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_instruction_fifo___024root___eval_initial__TOP__Vtiming__0(Vtb_instruction_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_instruction_fifo__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_instruction_fifo.sv", 
                                           42);
        vlSelf->tb_instruction_fifo__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelf->tb_instruction_fifo__DOT__clk)));
    }
}

void Vtb_instruction_fifo___024root___eval_act(Vtb_instruction_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_instruction_fifo___024root___nba_sequent__TOP__0(Vtb_instruction_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v0;
    __Vdlyvdim0__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v0;
    __Vdlyvval__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v0;
    __Vdlyvset__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v0 = 0;
    CData/*3:0*/ __Vdly__tb_instruction_fifo__DOT__dut__DOT__write_ptr;
    __Vdly__tb_instruction_fifo__DOT__dut__DOT__write_ptr = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v1;
    __Vdlyvdim0__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v1 = 0;
    IData/*31:0*/ __Vdlyvval__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v1;
    __Vdlyvval__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v1;
    __Vdlyvset__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v1 = 0;
    CData/*4:0*/ __Vdly__tb_instruction_fifo__DOT__dut__DOT__count;
    __Vdly__tb_instruction_fifo__DOT__dut__DOT__count = 0;
    CData/*3:0*/ __Vdly__tb_instruction_fifo__DOT__dut__DOT__read_ptr;
    __Vdly__tb_instruction_fifo__DOT__dut__DOT__read_ptr = 0;
    // Body
    __Vdly__tb_instruction_fifo__DOT__dut__DOT__read_ptr 
        = vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr;
    __Vdly__tb_instruction_fifo__DOT__dut__DOT__count 
        = vlSelf->tb_instruction_fifo__DOT__dut__DOT__count;
    __Vdly__tb_instruction_fifo__DOT__dut__DOT__write_ptr 
        = vlSelf->tb_instruction_fifo__DOT__dut__DOT__write_ptr;
    __Vdlyvset__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v0 = 0U;
    __Vdlyvset__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v1 = 0U;
    if (vlSelf->tb_instruction_fifo__DOT__rst_n) {
        if ((2U != ((((IData)(vlSelf->tb_instruction_fifo__DOT__push) 
                      & (0x10U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))) 
                     << 1U) | ((IData)(vlSelf->tb_instruction_fifo__DOT__pop) 
                               & (0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)))))) {
            if ((1U == ((((IData)(vlSelf->tb_instruction_fifo__DOT__push) 
                          & (0x10U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))) 
                         << 1U) | ((IData)(vlSelf->tb_instruction_fifo__DOT__pop) 
                                   & (0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)))))) {
                __Vdly__tb_instruction_fifo__DOT__dut__DOT__read_ptr 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr)));
            } else if ((3U == ((((IData)(vlSelf->tb_instruction_fifo__DOT__push) 
                                 & (0x10U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))) 
                                << 1U) | ((IData)(vlSelf->tb_instruction_fifo__DOT__pop) 
                                          & (0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)))))) {
                __Vdly__tb_instruction_fifo__DOT__dut__DOT__read_ptr 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr)));
            }
        }
        if ((2U == ((((IData)(vlSelf->tb_instruction_fifo__DOT__push) 
                      & (~ (IData)(vlSelf->tb_instruction_fifo__DOT__full))) 
                     << 1U) | ((IData)(vlSelf->tb_instruction_fifo__DOT__pop) 
                               & (~ (IData)(vlSelf->tb_instruction_fifo__DOT__empty)))))) {
            __Vdly__tb_instruction_fifo__DOT__dut__DOT__count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)));
        } else if ((1U == ((((IData)(vlSelf->tb_instruction_fifo__DOT__push) 
                             & (~ (IData)(vlSelf->tb_instruction_fifo__DOT__full))) 
                            << 1U) | ((IData)(vlSelf->tb_instruction_fifo__DOT__pop) 
                                      & (~ (IData)(vlSelf->tb_instruction_fifo__DOT__empty)))))) {
            __Vdly__tb_instruction_fifo__DOT__dut__DOT__count 
                = (0x1fU & ((IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count) 
                            - (IData)(1U)));
        }
        if ((2U == ((((IData)(vlSelf->tb_instruction_fifo__DOT__push) 
                      & (0x10U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))) 
                     << 1U) | ((IData)(vlSelf->tb_instruction_fifo__DOT__pop) 
                               & (0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)))))) {
            __Vdlyvval__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v0 
                = vlSelf->tb_instruction_fifo__DOT__data_in;
            __Vdlyvset__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v0 = 1U;
            __Vdlyvdim0__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v0 
                = vlSelf->tb_instruction_fifo__DOT__dut__DOT__write_ptr;
            __Vdly__tb_instruction_fifo__DOT__dut__DOT__write_ptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__write_ptr)));
        } else if ((1U != ((((IData)(vlSelf->tb_instruction_fifo__DOT__push) 
                             & (0x10U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))) 
                            << 1U) | ((IData)(vlSelf->tb_instruction_fifo__DOT__pop) 
                                      & (0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)))))) {
            if ((3U == ((((IData)(vlSelf->tb_instruction_fifo__DOT__push) 
                          & (0x10U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))) 
                         << 1U) | ((IData)(vlSelf->tb_instruction_fifo__DOT__pop) 
                                   & (0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)))))) {
                __Vdlyvval__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v1 
                    = vlSelf->tb_instruction_fifo__DOT__data_in;
                __Vdlyvset__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v1 = 1U;
                __Vdlyvdim0__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v1 
                    = vlSelf->tb_instruction_fifo__DOT__dut__DOT__write_ptr;
                __Vdly__tb_instruction_fifo__DOT__dut__DOT__write_ptr 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__write_ptr)));
            }
        }
    } else {
        __Vdly__tb_instruction_fifo__DOT__dut__DOT__read_ptr = 0U;
        __Vdly__tb_instruction_fifo__DOT__dut__DOT__count = 0U;
        __Vdly__tb_instruction_fifo__DOT__dut__DOT__write_ptr = 0U;
    }
    vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr 
        = __Vdly__tb_instruction_fifo__DOT__dut__DOT__read_ptr;
    vlSelf->tb_instruction_fifo__DOT__dut__DOT__write_ptr 
        = __Vdly__tb_instruction_fifo__DOT__dut__DOT__write_ptr;
    if (__Vdlyvset__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v0) {
        vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[__Vdlyvdim0__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v0] 
            = __Vdlyvval__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v0;
    }
    if (__Vdlyvset__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v1) {
        vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem[__Vdlyvdim0__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v1] 
            = __Vdlyvval__tb_instruction_fifo__DOT__dut__DOT__fifo_mem__v1;
    }
    vlSelf->tb_instruction_fifo__DOT__dut__DOT__count 
        = __Vdly__tb_instruction_fifo__DOT__dut__DOT__count;
    vlSelf->tb_instruction_fifo__DOT__empty = (0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count));
    vlSelf->tb_instruction_fifo__DOT__full = (0x10U 
                                              == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count));
}

void Vtb_instruction_fifo___024root___eval_nba(Vtb_instruction_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_instruction_fifo___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_instruction_fifo___024root___timing_resume(Vtb_instruction_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hfc7ebaab__0.resume("@(posedge tb_instruction_fifo.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_instruction_fifo___024root___timing_commit(Vtb_instruction_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hfc7ebaab__0.commit("@(posedge tb_instruction_fifo.clk)");
    }
}

void Vtb_instruction_fifo___024root___eval_triggers__act(Vtb_instruction_fifo___024root* vlSelf);

bool Vtb_instruction_fifo___024root___eval_phase__act(Vtb_instruction_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_instruction_fifo___024root___eval_triggers__act(vlSelf);
    Vtb_instruction_fifo___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_instruction_fifo___024root___timing_resume(vlSelf);
        Vtb_instruction_fifo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_instruction_fifo___024root___eval_phase__nba(Vtb_instruction_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_instruction_fifo___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_instruction_fifo___024root___dump_triggers__nba(Vtb_instruction_fifo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_instruction_fifo___024root___dump_triggers__act(Vtb_instruction_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_instruction_fifo___024root___eval(Vtb_instruction_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_instruction_fifo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_instruction_fifo.sv", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_instruction_fifo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_instruction_fifo.sv", 8, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_instruction_fifo___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_instruction_fifo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_instruction_fifo___024root___eval_debug_assertions(Vtb_instruction_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
