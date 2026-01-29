// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_processing_lane.h for the primary calling header

#include "Vtb_processing_lane__pch.h"
#include "Vtb_processing_lane___024root.h"

VlCoroutine Vtb_processing_lane___024root___eval_initial__TOP__Vtiming__0(Vtb_processing_lane___024root* vlSelf);
VlCoroutine Vtb_processing_lane___024root___eval_initial__TOP__Vtiming__1(Vtb_processing_lane___024root* vlSelf);

void Vtb_processing_lane___024root___eval_initial(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_processing_lane___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_processing_lane___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_processing_lane__DOT__clk__0 
        = vlSelf->tb_processing_lane__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_processing_lane__DOT__rst_n__0 
        = vlSelf->tb_processing_lane__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_processing_lane___024root___eval_initial__TOP__Vtiming__0(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_processing_lane__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_processing_lane.sv", 
                                           39);
        vlSelf->tb_processing_lane__DOT__clk = (1U 
                                                & (~ (IData)(vlSelf->tb_processing_lane__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_processing_lane___024root___act_comb__TOP__0(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_processing_lane__DOT__dut__DOT__state_next 
        = vlSelf->tb_processing_lane__DOT__dut__DOT__state_r;
    vlSelf->tb_processing_lane__DOT__dut__DOT__rf_write_en = 0U;
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

void Vtb_processing_lane___024root___eval_act(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_processing_lane___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_processing_lane___024root___nba_sequent__TOP__0(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___nba_sequent__TOP__0\n"); );
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
    CData/*4:0*/ __Vdlyvdim0__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvdim0__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvval__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvset__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v1;
    __Vdlyvset__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v1 = 0;
    // Body
    __Vdlyvset__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v0 = 0U;
    __Vdlyvset__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_processing_lane__DOT__rst_n)))) {
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSelf->tb_processing_lane__DOT__rst_n) {
        if (((IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__rf_write_en) 
             & (0U != (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__dst_addr)))) {
            __Vdlyvval__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_processing_lane__DOT__dut__DOT__rf_write_data;
            __Vdlyvset__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v0 = 1U;
            __Vdlyvdim0__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_processing_lane__DOT__dut__DOT__dst_addr;
        }
        if ((((IData)(vlSelf->tb_processing_lane__DOT__execute) 
              & (IData)(vlSelf->tb_processing_lane__DOT__lane_enable)) 
             & (0U == (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__state_r)))) {
            vlSelf->tb_processing_lane__DOT__dut__DOT__inst_r 
                = vlSelf->tb_processing_lane__DOT__instruction;
        }
        vlSelf->tb_processing_lane__DOT__dut__DOT__state_r 
            = vlSelf->tb_processing_lane__DOT__dut__DOT__state_next;
    } else {
        __Vdlyvset__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v1 = 1U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__inst_r = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__state_r = 0U;
    }
    if (__Vdlyvset__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v0) {
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[__Vdlyvdim0__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v0] 
            = __Vdlyvval__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v0;
    }
    if (__Vdlyvset__tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers__v1) {
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[1U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[2U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[3U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[4U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[5U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[6U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[7U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[8U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[9U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0xaU] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0xbU] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0xcU] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0xdU] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0xeU] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0xfU] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x10U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x11U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x12U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x13U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x14U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x15U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x16U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x17U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x18U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x19U] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x1aU] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x1bU] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x1cU] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x1dU] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x1eU] = 0U;
        vlSelf->tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers[0x1fU] = 0U;
    }
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
    vlSelf->tb_processing_lane__DOT__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_processing_lane__DOT__dut__DOT__state_r)))) {
            vlSelf->tb_processing_lane__DOT__ready = 1U;
        }
    }
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
}

void Vtb_processing_lane___024root___eval_nba(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_processing_lane___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_processing_lane___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_processing_lane___024root___timing_resume(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_ha9211336__0.resume("@(posedge tb_processing_lane.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_processing_lane___024root___timing_commit(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_ha9211336__0.commit("@(posedge tb_processing_lane.clk)");
    }
}

void Vtb_processing_lane___024root___eval_triggers__act(Vtb_processing_lane___024root* vlSelf);

bool Vtb_processing_lane___024root___eval_phase__act(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_processing_lane___024root___eval_triggers__act(vlSelf);
    Vtb_processing_lane___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_processing_lane___024root___timing_resume(vlSelf);
        Vtb_processing_lane___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_processing_lane___024root___eval_phase__nba(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_processing_lane___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processing_lane___024root___dump_triggers__nba(Vtb_processing_lane___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processing_lane___024root___dump_triggers__act(Vtb_processing_lane___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_processing_lane___024root___eval(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_processing_lane___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_processing_lane.sv", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_processing_lane___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_processing_lane.sv", 8, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_processing_lane___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_processing_lane___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_processing_lane___024root___eval_debug_assertions(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
