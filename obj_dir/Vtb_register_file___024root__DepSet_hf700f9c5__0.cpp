// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_register_file.h for the primary calling header

#include "Vtb_register_file__pch.h"
#include "Vtb_register_file___024root.h"

VlCoroutine Vtb_register_file___024root___eval_initial__TOP__Vtiming__0(Vtb_register_file___024root* vlSelf);
VlCoroutine Vtb_register_file___024root___eval_initial__TOP__Vtiming__1(Vtb_register_file___024root* vlSelf);

void Vtb_register_file___024root___eval_initial(Vtb_register_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_register_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_file___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_register_file___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_register_file___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_register_file__DOT__clk__0 
        = vlSelf->tb_register_file__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_register_file__DOT__rst_n__0 
        = vlSelf->tb_register_file__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_register_file___024root___eval_initial__TOP__Vtiming__0(Vtb_register_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_register_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_file___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_register_file__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_register_file.sv", 
                                           39);
        vlSelf->tb_register_file__DOT__clk = (1U & 
                                              (~ (IData)(vlSelf->tb_register_file__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_register_file___024root___act_comb__TOP__0(Vtb_register_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_register_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_file___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_register_file__DOT__read_data1 = ((0U 
                                                  == (IData)(vlSelf->tb_register_file__DOT__read_addr1))
                                                  ? 0U
                                                  : 
                                                 vlSelf->tb_register_file__DOT__dut__DOT__registers
                                                 [vlSelf->tb_register_file__DOT__read_addr1]);
    vlSelf->tb_register_file__DOT__read_data2 = ((0U 
                                                  == (IData)(vlSelf->tb_register_file__DOT__read_addr2))
                                                  ? 0U
                                                  : 
                                                 vlSelf->tb_register_file__DOT__dut__DOT__registers
                                                 [vlSelf->tb_register_file__DOT__read_addr2]);
}

void Vtb_register_file___024root___eval_act(Vtb_register_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_register_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_file___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_register_file___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_register_file___024root___nba_sequent__TOP__0(Vtb_register_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_register_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_file___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__tb_register_file__DOT__dut__DOT__registers__v0;
    __Vdlyvdim0__tb_register_file__DOT__dut__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_register_file__DOT__dut__DOT__registers__v0;
    __Vdlyvval__tb_register_file__DOT__dut__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_register_file__DOT__dut__DOT__registers__v0;
    __Vdlyvset__tb_register_file__DOT__dut__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_register_file__DOT__dut__DOT__registers__v1;
    __Vdlyvset__tb_register_file__DOT__dut__DOT__registers__v1 = 0;
    // Body
    __Vdlyvset__tb_register_file__DOT__dut__DOT__registers__v0 = 0U;
    __Vdlyvset__tb_register_file__DOT__dut__DOT__registers__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_register_file__DOT__rst_n)))) {
        vlSelf->tb_register_file__DOT__dut__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSelf->tb_register_file__DOT__rst_n) {
        if (((IData)(vlSelf->tb_register_file__DOT__write_en) 
             & (0U != (IData)(vlSelf->tb_register_file__DOT__write_addr)))) {
            __Vdlyvval__tb_register_file__DOT__dut__DOT__registers__v0 
                = vlSelf->tb_register_file__DOT__write_data;
            __Vdlyvset__tb_register_file__DOT__dut__DOT__registers__v0 = 1U;
            __Vdlyvdim0__tb_register_file__DOT__dut__DOT__registers__v0 
                = vlSelf->tb_register_file__DOT__write_addr;
        }
    } else {
        __Vdlyvset__tb_register_file__DOT__dut__DOT__registers__v1 = 1U;
    }
    if (__Vdlyvset__tb_register_file__DOT__dut__DOT__registers__v0) {
        vlSelf->tb_register_file__DOT__dut__DOT__registers[__Vdlyvdim0__tb_register_file__DOT__dut__DOT__registers__v0] 
            = __Vdlyvval__tb_register_file__DOT__dut__DOT__registers__v0;
    }
    if (__Vdlyvset__tb_register_file__DOT__dut__DOT__registers__v1) {
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[1U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[2U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[3U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[4U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[5U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[6U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[7U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[8U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[9U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0xaU] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0xbU] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0xcU] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0xdU] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0xeU] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0xfU] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x10U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x11U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x12U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x13U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x14U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x15U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x16U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x17U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x18U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x19U] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x1aU] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x1bU] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x1cU] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x1dU] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x1eU] = 0U;
        vlSelf->tb_register_file__DOT__dut__DOT__registers[0x1fU] = 0U;
    }
}

void Vtb_register_file___024root___eval_nba(Vtb_register_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_register_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_file___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_register_file___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_register_file___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_register_file___024root___timing_resume(Vtb_register_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_register_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_file___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h95e0c51c__0.resume("@(posedge tb_register_file.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_register_file___024root___timing_commit(Vtb_register_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_register_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_file___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h95e0c51c__0.commit("@(posedge tb_register_file.clk)");
    }
}

void Vtb_register_file___024root___eval_triggers__act(Vtb_register_file___024root* vlSelf);

bool Vtb_register_file___024root___eval_phase__act(Vtb_register_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_register_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_file___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_register_file___024root___eval_triggers__act(vlSelf);
    Vtb_register_file___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_register_file___024root___timing_resume(vlSelf);
        Vtb_register_file___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_register_file___024root___eval_phase__nba(Vtb_register_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_register_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_file___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_register_file___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_register_file___024root___dump_triggers__nba(Vtb_register_file___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_register_file___024root___dump_triggers__act(Vtb_register_file___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_register_file___024root___eval(Vtb_register_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_register_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_file___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_register_file___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_register_file.sv", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_register_file___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_register_file.sv", 8, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_register_file___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_register_file___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_register_file___024root___eval_debug_assertions(Vtb_register_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_register_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_file___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
