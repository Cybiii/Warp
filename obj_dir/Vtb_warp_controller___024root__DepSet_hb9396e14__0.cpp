// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_warp_controller.h for the primary calling header

#include "Vtb_warp_controller__pch.h"
#include "Vtb_warp_controller___024root.h"

VlCoroutine Vtb_warp_controller___024root___eval_initial__TOP__Vtiming__0(Vtb_warp_controller___024root* vlSelf);
VlCoroutine Vtb_warp_controller___024root___eval_initial__TOP__Vtiming__1(Vtb_warp_controller___024root* vlSelf);

void Vtb_warp_controller___024root___eval_initial(Vtb_warp_controller___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_warp_controller___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_warp_controller___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_controller__DOT__clk__0 
        = vlSelf->tb_warp_controller__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_controller__DOT__rst_n__0 
        = vlSelf->tb_warp_controller__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_warp_controller___024root___eval_initial__TOP__Vtiming__0(Vtb_warp_controller___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_warp_controller__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_warp_controller.sv", 
                                           65);
        vlSelf->tb_warp_controller__DOT__clk = (1U 
                                                & (~ (IData)(vlSelf->tb_warp_controller__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_warp_controller___024root___act_comb__TOP__0(Vtb_warp_controller___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_warp_controller__DOT__lane_execute = 0U;
    vlSelf->tb_warp_controller__DOT__fifo_pop = 0U;
    vlSelf->tb_warp_controller__DOT__lane_instruction = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r))) {
            if ((1U & (~ (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r)))) {
                if (((~ (IData)(vlSelf->tb_warp_controller__DOT__fifo_empty)) 
                     & (IData)(vlSelf->tb_warp_controller__DOT__lane_ready))) {
                    vlSelf->tb_warp_controller__DOT__lane_execute = 1U;
                    vlSelf->tb_warp_controller__DOT__fifo_pop = 1U;
                    vlSelf->tb_warp_controller__DOT__lane_instruction 
                        = vlSelf->tb_warp_controller__DOT__fifo_data;
                }
            }
        }
    }
    vlSelf->tb_warp_controller__DOT__dut__DOT__state_next 
        = vlSelf->tb_warp_controller__DOT__dut__DOT__state_r;
    if ((4U & (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r))) {
        vlSelf->tb_warp_controller__DOT__dut__DOT__state_next = 0U;
    } else if ((2U & (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r))) {
            if (vlSelf->tb_warp_controller__DOT__mem_ready) {
                vlSelf->tb_warp_controller__DOT__dut__DOT__state_next = 1U;
            }
        } else if (((~ (IData)(vlSelf->tb_warp_controller__DOT__fifo_empty)) 
                    & (IData)(vlSelf->tb_warp_controller__DOT__lane_ready))) {
            if (((IData)(vlSelf->tb_warp_controller__DOT__fifo_empty) 
                 & ((IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__inst_count) 
                    >= (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_length_r)))) {
                vlSelf->tb_warp_controller__DOT__dut__DOT__state_next = 4U;
            }
        } else if (((IData)(vlSelf->tb_warp_controller__DOT__fifo_empty) 
                    & ((IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__inst_count) 
                       >= (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_length_r)))) {
            vlSelf->tb_warp_controller__DOT__dut__DOT__state_next = 4U;
        } else if ((1U & (~ (IData)(vlSelf->tb_warp_controller__DOT__lane_ready)))) {
            vlSelf->tb_warp_controller__DOT__dut__DOT__state_next = 2U;
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r))) {
        if (((IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__inst_count) 
             >= (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_length_r))) {
            vlSelf->tb_warp_controller__DOT__dut__DOT__state_next = 2U;
        } else if ((1U & (~ (IData)(vlSelf->tb_warp_controller__DOT__mem_ready)))) {
            vlSelf->tb_warp_controller__DOT__dut__DOT__state_next = 3U;
        }
    } else if (vlSelf->tb_warp_controller__DOT__kernel_start) {
        vlSelf->tb_warp_controller__DOT__dut__DOT__state_next = 1U;
    }
}

void Vtb_warp_controller___024root___eval_act(Vtb_warp_controller___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_warp_controller___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_warp_controller___024root___nba_sequent__TOP__0(Vtb_warp_controller___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__tb_warp_controller__DOT__dut__DOT__fetch_addr;
    __Vdly__tb_warp_controller__DOT__dut__DOT__fetch_addr = 0;
    SData/*15:0*/ __Vdly__tb_warp_controller__DOT__dut__DOT__inst_count;
    __Vdly__tb_warp_controller__DOT__dut__DOT__inst_count = 0;
    // Body
    __Vdly__tb_warp_controller__DOT__dut__DOT__fetch_addr 
        = vlSelf->tb_warp_controller__DOT__dut__DOT__fetch_addr;
    __Vdly__tb_warp_controller__DOT__dut__DOT__inst_count 
        = vlSelf->tb_warp_controller__DOT__dut__DOT__inst_count;
    vlSelf->tb_warp_controller__DOT__mem_ready = ((1U 
                                                   & (~ (IData)(vlSelf->tb_warp_controller__DOT__rst_n))) 
                                                  || (1U 
                                                      & (~ (IData)(vlSelf->tb_warp_controller__DOT__mem_req))));
    if (vlSelf->tb_warp_controller__DOT__rst_n) {
        if (((IData)(vlSelf->tb_warp_controller__DOT__kernel_start) 
             & (0U == (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r)))) {
            vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_start_r = 1U;
            vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_addr_r 
                = vlSelf->tb_warp_controller__DOT__kernel_addr;
            vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_length_r 
                = vlSelf->tb_warp_controller__DOT__kernel_length;
            __Vdly__tb_warp_controller__DOT__dut__DOT__fetch_addr 
                = vlSelf->tb_warp_controller__DOT__kernel_addr;
            __Vdly__tb_warp_controller__DOT__dut__DOT__inst_count = 0U;
        } else if ((0U != (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r))) {
            vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_start_r = 0U;
        }
        if ((((1U == (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r)) 
              & (IData)(vlSelf->tb_warp_controller__DOT__mem_valid)) 
             & (~ (IData)(vlSelf->tb_warp_controller__DOT__fifo_pop)))) {
            __Vdly__tb_warp_controller__DOT__dut__DOT__inst_count 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__inst_count)));
            __Vdly__tb_warp_controller__DOT__dut__DOT__fetch_addr 
                = ((IData)(4U) + vlSelf->tb_warp_controller__DOT__dut__DOT__fetch_addr);
        }
        vlSelf->tb_warp_controller__DOT__mem_valid 
            = vlSelf->tb_warp_controller__DOT__mem_req;
        vlSelf->tb_warp_controller__DOT__dut__DOT__state_r 
            = vlSelf->tb_warp_controller__DOT__dut__DOT__state_next;
    } else {
        __Vdly__tb_warp_controller__DOT__dut__DOT__inst_count = 0U;
        __Vdly__tb_warp_controller__DOT__dut__DOT__fetch_addr = 0U;
        vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_start_r = 0U;
        vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_addr_r = 0U;
        vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_length_r = 0U;
        vlSelf->tb_warp_controller__DOT__dut__DOT__state_r = 0U;
    }
    vlSelf->tb_warp_controller__DOT__dut__DOT__fetch_addr 
        = __Vdly__tb_warp_controller__DOT__dut__DOT__fetch_addr;
    vlSelf->tb_warp_controller__DOT__dut__DOT__inst_count 
        = __Vdly__tb_warp_controller__DOT__dut__DOT__inst_count;
    vlSelf->tb_warp_controller__DOT__kernel_done = 0U;
    vlSelf->tb_warp_controller__DOT__kernel_error = 0U;
    if ((4U & (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r)))) {
                vlSelf->tb_warp_controller__DOT__kernel_done = 1U;
            }
        }
        if ((2U & (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r))) {
            vlSelf->tb_warp_controller__DOT__kernel_error = 1U;
        } else if ((1U & (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r))) {
            vlSelf->tb_warp_controller__DOT__kernel_error = 1U;
        }
    }
    vlSelf->tb_warp_controller__DOT__mem_req = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__state_r))) {
                vlSelf->tb_warp_controller__DOT__mem_req 
                    = ((IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__inst_count) 
                       < (IData)(vlSelf->tb_warp_controller__DOT__dut__DOT__kernel_length_r));
            }
        }
    }
}

void Vtb_warp_controller___024root___eval_nba(Vtb_warp_controller___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_warp_controller___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_warp_controller___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_warp_controller___024root___timing_resume(Vtb_warp_controller___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h0dfe4411__0.resume("@(posedge tb_warp_controller.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_warp_controller___024root___timing_commit(Vtb_warp_controller___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h0dfe4411__0.commit("@(posedge tb_warp_controller.clk)");
    }
}

void Vtb_warp_controller___024root___eval_triggers__act(Vtb_warp_controller___024root* vlSelf);

bool Vtb_warp_controller___024root___eval_phase__act(Vtb_warp_controller___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_warp_controller___024root___eval_triggers__act(vlSelf);
    Vtb_warp_controller___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_warp_controller___024root___timing_resume(vlSelf);
        Vtb_warp_controller___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_warp_controller___024root___eval_phase__nba(Vtb_warp_controller___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_warp_controller___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_warp_controller___024root___dump_triggers__nba(Vtb_warp_controller___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_warp_controller___024root___dump_triggers__act(Vtb_warp_controller___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_warp_controller___024root___eval(Vtb_warp_controller___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_warp_controller___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_warp_controller.sv", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_warp_controller___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_warp_controller.sv", 8, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_warp_controller___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_warp_controller___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_warp_controller___024root___eval_debug_assertions(Vtb_warp_controller___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
