// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_processing_lane.h for the primary calling header

#include "Vtb_processing_lane__pch.h"
#include "Vtb_processing_lane___024root.h"

VL_ATTR_COLD void Vtb_processing_lane___024root___eval_static__TOP(Vtb_processing_lane___024root* vlSelf);

VL_ATTR_COLD void Vtb_processing_lane___024root___eval_static(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval_static\n"); );
    // Body
    Vtb_processing_lane___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_processing_lane___024root___eval_static__TOP(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_processing_lane__DOT__test_count = 0U;
    vlSelf->tb_processing_lane__DOT__pass_count = 0U;
    vlSelf->tb_processing_lane__DOT__fail_count = 0U;
}

VL_ATTR_COLD void Vtb_processing_lane___024root___eval_final(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processing_lane___024root___dump_triggers__stl(Vtb_processing_lane___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_processing_lane___024root___eval_phase__stl(Vtb_processing_lane___024root* vlSelf);

VL_ATTR_COLD void Vtb_processing_lane___024root___eval_settle(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_processing_lane___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_processing_lane.sv", 8, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_processing_lane___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processing_lane___024root___dump_triggers__stl(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_processing_lane___024root___stl_sequent__TOP__0(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vfunc_get_opcode__12__Vfuncout;
    __Vfunc_get_opcode__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_opcode__12__inst;
    __Vfunc_get_opcode__12__inst = 0;
    CData/*4:0*/ __Vfunc_get_dst__13__Vfuncout;
    __Vfunc_get_dst__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_dst__13__inst;
    __Vfunc_get_dst__13__inst = 0;
    CData/*4:0*/ __Vfunc_get_src1__14__Vfuncout;
    __Vfunc_get_src1__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src1__14__inst;
    __Vfunc_get_src1__14__inst = 0;
    CData/*4:0*/ __Vfunc_get_src2__15__Vfuncout;
    __Vfunc_get_src2__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src2__15__inst;
    __Vfunc_get_src2__15__inst = 0;
    IData/*31:0*/ __Vfunc_get_imm__16__Vfuncout;
    __Vfunc_get_imm__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__16__inst;
    __Vfunc_get_imm__16__inst = 0;
    // Body
    vlSelf->tb_processing_lane__DOT__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__state_r)))) {
            vlSelf->tb_processing_lane__DOT__ready = 1U;
        }
    }
    vlSelf->tb_processing_lane__DOT__dut__DOT__state_next 
        = vlSelf->tb_processing_lane__DOT__dut__DOT__state_r;
    __Vfunc_get_dst__13__inst = vlSelf->tb_processing_lane__DOT__dut__DOT__inst_r;
    __Vfunc_get_dst__13__Vfuncout = (0x1fU & (__Vfunc_get_dst__13__inst 
                                              >> 0x17U));
    vlSelf->tb_processing_lane__DOT__dut__DOT__dst_addr 
        = __Vfunc_get_dst__13__Vfuncout;
    __Vfunc_get_imm__16__inst = vlSelf->tb_processing_lane__DOT__dut__DOT__inst_r;
    __Vfunc_get_imm__16__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__16__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__16__inst));
    vlSelf->tb_processing_lane__DOT__dut__DOT__imm 
        = __Vfunc_get_imm__16__Vfuncout;
    __Vfunc_get_src1__14__inst = vlSelf->tb_processing_lane__DOT__dut__DOT__inst_r;
    __Vfunc_get_src1__14__Vfuncout = (0x1fU & (__Vfunc_get_src1__14__inst 
                                               >> 0x12U));
    vlSelf->tb_processing_lane__DOT__dut__DOT__src1_addr 
        = __Vfunc_get_src1__14__Vfuncout;
    __Vfunc_get_src2__15__inst = vlSelf->tb_processing_lane__DOT__dut__DOT__inst_r;
    __Vfunc_get_src2__15__Vfuncout = (0x1fU & (__Vfunc_get_src2__15__inst 
                                               >> 0xdU));
    vlSelf->tb_processing_lane__DOT__dut__DOT__src2_addr 
        = __Vfunc_get_src2__15__Vfuncout;
    __Vfunc_get_opcode__12__inst = vlSelf->tb_processing_lane__DOT__dut__DOT__inst_r;
    __Vfunc_get_opcode__12__Vfuncout = (__Vfunc_get_opcode__12__inst 
                                        >> 0x1cU);
    vlSelf->tb_processing_lane__DOT__dut__DOT__opcode 
        = __Vfunc_get_opcode__12__Vfuncout;
    vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__src1_addr))
            ? 0U : vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers
           [vlSelf->tb_processing_lane__DOT__dut__DOT__src1_addr]);
    vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__src2_addr))
            ? 0U : vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers
           [vlSelf->tb_processing_lane__DOT__dut__DOT__src2_addr]);
    vlSelf->tb_processing_lane__DOT__dut__DOT__rf_write_en = 0U;
    vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result = 0U;
    vlSelf->tb_processing_lane__DOT__dut__DOT__alu_overflow = 0U;
    vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__add_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data1)) 
                             + (QData)((IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data2))));
    vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__mul_result_ext 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data2));
    vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_mul_result 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data2));
    vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_mul_result)) 
                             + (QData)((IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__imm))));
    if ((8U & (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__opcode))) {
        vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__alu_overflow = 0U;
    } else if ((4U & (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__opcode))) {
        if ((2U & (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__opcode))) {
            vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result = 0U;
            vlSelf->tb_processing_lane__DOT__dut__DOT__alu_overflow = 0U;
        } else if ((1U & (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__opcode))) {
            vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result = 0U;
            vlSelf->tb_processing_lane__DOT__dut__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result 
                = ((vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data1 
                    >> 0x1fU) ? 0U : vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data1);
            vlSelf->tb_processing_lane__DOT__dut__DOT__alu_overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__opcode))) {
            vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result 
                = (VL_GTS_III(32, vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data1, vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data2)
                    ? vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data1
                    : vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data2);
            vlSelf->tb_processing_lane__DOT__dut__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result 
                = (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_result_ext);
            vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__mul_ovf 
                = ((IData)((vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_mul_result 
                            >> 0x20U)) != (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_mul_result 
                                                                 >> 0x1fU))))));
            vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__add_ovf 
                = (((1U & (IData)((vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_mul_result 
                                   >> 0x1fU))) == (vlSelf->tb_processing_lane__DOT__dut__DOT__imm 
                                                   >> 0x1fU)) 
                   & ((vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result 
                       >> 0x1fU) != (1U & (IData)((vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_mul_result 
                                                   >> 0x1fU)))));
            vlSelf->tb_processing_lane__DOT__dut__DOT__alu_overflow 
                = ((IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__mul_ovf) 
                   | (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__add_ovf));
        }
    } else if ((1U & (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__opcode))) {
        vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result 
            = (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__mul_result_ext);
        vlSelf->tb_processing_lane__DOT__dut__DOT__alu_overflow 
            = ((IData)((vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__mul_result_ext 
                        >> 0x20U)) != (- (IData)((vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result 
                                                  >> 0x1fU))));
    } else {
        vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result 
            = (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__add_result_ext);
        vlSelf->tb_processing_lane__DOT__dut__DOT__alu_overflow 
            = (((vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data1 
                 >> 0x1fU) == (vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data2 
                               >> 0x1fU)) & ((vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result 
                                              >> 0x1fU) 
                                             != (vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data1 
                                                 >> 0x1fU)));
    }
    vlSelf->tb_processing_lane__DOT__dut__DOT__rf_write_data = 0U;
    if ((2U & (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__state_r))) {
            vlSelf->tb_processing_lane__DOT__dut__DOT__state_next = 0U;
            if (((IData)(vlSelf->tb_processing_lane__DOT__lane_enable) 
                 & (6U != (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__opcode)))) {
                vlSelf->tb_processing_lane__DOT__dut__DOT__rf_write_en = 1U;
                vlSelf->tb_processing_lane__DOT__dut__DOT__rf_write_data 
                    = vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result;
            }
        } else {
            vlSelf->tb_processing_lane__DOT__dut__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__state_r))) {
        vlSelf->tb_processing_lane__DOT__dut__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_processing_lane__DOT__execute) 
                & (IData)(vlSelf->tb_processing_lane__DOT__lane_enable))) {
        vlSelf->tb_processing_lane__DOT__dut__DOT__state_next = 1U;
    }
}

VL_ATTR_COLD void Vtb_processing_lane___024root___eval_stl(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_processing_lane___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_processing_lane___024root___eval_triggers__stl(Vtb_processing_lane___024root* vlSelf);

VL_ATTR_COLD bool Vtb_processing_lane___024root___eval_phase__stl(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_processing_lane___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_processing_lane___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processing_lane___024root___dump_triggers__act(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_processing_lane.clk or negedge tb_processing_lane.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_processing_lane.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processing_lane___024root___dump_triggers__nba(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_processing_lane.clk or negedge tb_processing_lane.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_processing_lane.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_processing_lane___024root___ctor_var_reset(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_processing_lane__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_processing_lane__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_processing_lane__DOT__lane_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_processing_lane__DOT__execute = VL_RAND_RESET_I(1);
    vlSelf->tb_processing_lane__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->tb_processing_lane__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_processing_lane__DOT__test_count = 0;
    vlSelf->tb_processing_lane__DOT__pass_count = 0;
    vlSelf->tb_processing_lane__DOT__fail_count = 0;
    vlSelf->tb_processing_lane__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_processing_lane__DOT__dut__DOT__opcode = VL_RAND_RESET_I(4);
    vlSelf->tb_processing_lane__DOT__dut__DOT__dst_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_processing_lane__DOT__dut__DOT__src1_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_processing_lane__DOT__dut__DOT__src2_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_processing_lane__DOT__dut__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->tb_processing_lane__DOT__dut__DOT__rf_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->tb_processing_lane__DOT__dut__DOT__rf_write_en = VL_RAND_RESET_I(1);
    vlSelf->tb_processing_lane__DOT__dut__DOT__rf_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_processing_lane__DOT__dut__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_processing_lane__DOT__dut__DOT__alu_overflow = VL_RAND_RESET_I(1);
    vlSelf->tb_processing_lane__DOT__dut__DOT__state_r = VL_RAND_RESET_I(2);
    vlSelf->tb_processing_lane__DOT__dut__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->tb_processing_lane__DOT__dut__DOT__inst_r = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__add_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__mul_result_ext = VL_RAND_RESET_Q(64);
    vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_mul_result = VL_RAND_RESET_Q(64);
    vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__mul_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__add_ovf = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_processing_lane__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_processing_lane__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
