// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lane_array.h for the primary calling header

#include "Vtb_lane_array__pch.h"
#include "Vtb_lane_array___024root.h"

VlCoroutine Vtb_lane_array___024root___eval_initial__TOP__Vtiming__0(Vtb_lane_array___024root* vlSelf);
VlCoroutine Vtb_lane_array___024root___eval_initial__TOP__Vtiming__1(Vtb_lane_array___024root* vlSelf);

void Vtb_lane_array___024root___eval_initial(Vtb_lane_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_lane_array___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_lane_array___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_lane_array__DOT__clk__0 
        = vlSelf->tb_lane_array__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_lane_array__DOT__rst_n__0 
        = vlSelf->tb_lane_array__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_lane_array___024root___eval_initial__TOP__Vtiming__0(Vtb_lane_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_lane_array__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_lane_array.sv", 
                                           43);
        vlSelf->tb_lane_array__DOT__clk = (1U & (~ (IData)(vlSelf->tb_lane_array__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_lane_array___024root___act_comb__TOP__0(Vtb_lane_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_lane_array__DOT__ready = 1U;
    if ((1U & (IData)(vlSelf->tb_lane_array__DOT__lane_enable))) {
        vlSelf->tb_lane_array__DOT__ready = ((IData)(vlSelf->tb_lane_array__DOT__ready) 
                                             & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__lane_ready));
    }
    if ((2U & (IData)(vlSelf->tb_lane_array__DOT__lane_enable))) {
        vlSelf->tb_lane_array__DOT__ready = ((IData)(vlSelf->tb_lane_array__DOT__ready) 
                                             & ((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__lane_ready) 
                                                >> 1U));
    }
    if ((4U & (IData)(vlSelf->tb_lane_array__DOT__lane_enable))) {
        vlSelf->tb_lane_array__DOT__ready = ((IData)(vlSelf->tb_lane_array__DOT__ready) 
                                             & ((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__lane_ready) 
                                                >> 2U));
    }
    if ((8U & (IData)(vlSelf->tb_lane_array__DOT__lane_enable))) {
        vlSelf->tb_lane_array__DOT__ready = ((IData)(vlSelf->tb_lane_array__DOT__ready) 
                                             & ((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__lane_ready) 
                                                >> 3U));
    }
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next = 0U;
            if (((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                 & (6U != (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result;
            }
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_lane_array__DOT__execute) 
                & (IData)(vlSelf->tb_lane_array__DOT__lane_enable))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next = 0U;
            if ((((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                  >> 1U) & (6U != (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result;
            }
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_lane_array__DOT__execute) 
                & ((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                   >> 1U))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next = 0U;
            if ((((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                  >> 2U) & (6U != (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result;
            }
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_lane_array__DOT__execute) 
                & ((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                   >> 2U))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next = 0U;
            if ((((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                  >> 3U) & (6U != (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result;
            }
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_lane_array__DOT__execute) 
                & ((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                   >> 3U))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
}

void Vtb_lane_array___024root___eval_act(Vtb_lane_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_lane_array___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_lane_array___024root___nba_sequent__TOP__0(Vtb_lane_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vfunc_get_opcode__22__Vfuncout;
    __Vfunc_get_opcode__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_opcode__22__inst;
    __Vfunc_get_opcode__22__inst = 0;
    CData/*4:0*/ __Vfunc_get_dst__23__Vfuncout;
    __Vfunc_get_dst__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_dst__23__inst;
    __Vfunc_get_dst__23__inst = 0;
    CData/*4:0*/ __Vfunc_get_src1__24__Vfuncout;
    __Vfunc_get_src1__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src1__24__inst;
    __Vfunc_get_src1__24__inst = 0;
    CData/*4:0*/ __Vfunc_get_src2__25__Vfuncout;
    __Vfunc_get_src2__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src2__25__inst;
    __Vfunc_get_src2__25__inst = 0;
    IData/*31:0*/ __Vfunc_get_imm__26__Vfuncout;
    __Vfunc_get_imm__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__26__inst;
    __Vfunc_get_imm__26__inst = 0;
    CData/*3:0*/ __Vfunc_get_opcode__27__Vfuncout;
    __Vfunc_get_opcode__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_opcode__27__inst;
    __Vfunc_get_opcode__27__inst = 0;
    CData/*4:0*/ __Vfunc_get_dst__28__Vfuncout;
    __Vfunc_get_dst__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_dst__28__inst;
    __Vfunc_get_dst__28__inst = 0;
    CData/*4:0*/ __Vfunc_get_src1__29__Vfuncout;
    __Vfunc_get_src1__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src1__29__inst;
    __Vfunc_get_src1__29__inst = 0;
    CData/*4:0*/ __Vfunc_get_src2__30__Vfuncout;
    __Vfunc_get_src2__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src2__30__inst;
    __Vfunc_get_src2__30__inst = 0;
    IData/*31:0*/ __Vfunc_get_imm__31__Vfuncout;
    __Vfunc_get_imm__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__31__inst;
    __Vfunc_get_imm__31__inst = 0;
    CData/*3:0*/ __Vfunc_get_opcode__32__Vfuncout;
    __Vfunc_get_opcode__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_opcode__32__inst;
    __Vfunc_get_opcode__32__inst = 0;
    CData/*4:0*/ __Vfunc_get_dst__33__Vfuncout;
    __Vfunc_get_dst__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_dst__33__inst;
    __Vfunc_get_dst__33__inst = 0;
    CData/*4:0*/ __Vfunc_get_src1__34__Vfuncout;
    __Vfunc_get_src1__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src1__34__inst;
    __Vfunc_get_src1__34__inst = 0;
    CData/*4:0*/ __Vfunc_get_src2__35__Vfuncout;
    __Vfunc_get_src2__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src2__35__inst;
    __Vfunc_get_src2__35__inst = 0;
    IData/*31:0*/ __Vfunc_get_imm__36__Vfuncout;
    __Vfunc_get_imm__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__36__inst;
    __Vfunc_get_imm__36__inst = 0;
    CData/*3:0*/ __Vfunc_get_opcode__37__Vfuncout;
    __Vfunc_get_opcode__37__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_opcode__37__inst;
    __Vfunc_get_opcode__37__inst = 0;
    CData/*4:0*/ __Vfunc_get_dst__38__Vfuncout;
    __Vfunc_get_dst__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_dst__38__inst;
    __Vfunc_get_dst__38__inst = 0;
    CData/*4:0*/ __Vfunc_get_src1__39__Vfuncout;
    __Vfunc_get_src1__39__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src1__39__inst;
    __Vfunc_get_src1__39__inst = 0;
    CData/*4:0*/ __Vfunc_get_src2__40__Vfuncout;
    __Vfunc_get_src2__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src2__40__inst;
    __Vfunc_get_src2__40__inst = 0;
    IData/*31:0*/ __Vfunc_get_imm__41__Vfuncout;
    __Vfunc_get_imm__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__41__inst;
    __Vfunc_get_imm__41__inst = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1;
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1;
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1;
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1;
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0;
    // Body
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0U;
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0U;
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0U;
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0U;
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0U;
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0U;
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0U;
    __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->tb_lane_array__DOT__rst_n)))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSelf->tb_lane_array__DOT__rst_n) {
        if (((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_en) 
             & (0U != (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__dst_addr)))) {
            __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_data;
            __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 1U;
            __Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__dst_addr;
        }
        if (((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_en) 
             & (0U != (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__dst_addr)))) {
            __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_data;
            __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 1U;
            __Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__dst_addr;
        }
        if (((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_en) 
             & (0U != (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__dst_addr)))) {
            __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_data;
            __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 1U;
            __Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__dst_addr;
        }
        if (((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_en) 
             & (0U != (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__dst_addr)))) {
            __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_data;
            __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 1U;
            __Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__dst_addr;
        }
        if ((((IData)(vlSelf->tb_lane_array__DOT__execute) 
              & ((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                 >> 3U)) & (0U == (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r 
                = vlSelf->tb_lane_array__DOT__instruction;
        }
        if ((((IData)(vlSelf->tb_lane_array__DOT__execute) 
              & ((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                 >> 2U)) & (0U == (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r 
                = vlSelf->tb_lane_array__DOT__instruction;
        }
        if ((((IData)(vlSelf->tb_lane_array__DOT__execute) 
              & ((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                 >> 1U)) & (0U == (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r 
                = vlSelf->tb_lane_array__DOT__instruction;
        }
        if ((((IData)(vlSelf->tb_lane_array__DOT__execute) 
              & (IData)(vlSelf->tb_lane_array__DOT__lane_enable)) 
             & (0U == (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r 
                = vlSelf->tb_lane_array__DOT__instruction;
        }
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r 
            = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r 
            = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r 
            = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r 
            = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next;
    } else {
        __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 1U;
        __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 1U;
        __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 1U;
        __Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 1U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r = 0U;
    }
    if (__Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0] 
            = __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    }
    if (__Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xaU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xbU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xcU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xdU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xeU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xfU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x10U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x11U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x12U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x13U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x14U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x15U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x16U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x17U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x18U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x19U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1aU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1bU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1cU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1dU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1eU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1fU] = 0U;
    }
    if (__Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0] 
            = __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    }
    if (__Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xaU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xbU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xcU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xdU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xeU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xfU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x10U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x11U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x12U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x13U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x14U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x15U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x16U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x17U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x18U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x19U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1aU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1bU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1cU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1dU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1eU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1fU] = 0U;
    }
    if (__Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0] 
            = __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    }
    if (__Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xaU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xbU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xcU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xdU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xeU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xfU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x10U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x11U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x12U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x13U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x14U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x15U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x16U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x17U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x18U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x19U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1aU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1bU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1cU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1dU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1eU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1fU] = 0U;
    }
    if (__Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vdlyvdim0__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0] 
            = __Vdlyvval__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    }
    if (__Vdlyvset__tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xaU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xbU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xcU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xdU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xeU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xfU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x10U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x11U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x12U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x13U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x14U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x15U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x16U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x17U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x18U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x19U] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1aU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1bU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1cU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1dU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1eU] = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1fU] = 0U;
    }
    __Vfunc_get_dst__38__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__38__Vfuncout = (0x1fU & (__Vfunc_get_dst__38__inst 
                                              >> 0x17U));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__38__Vfuncout;
    __Vfunc_get_imm__41__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__41__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__41__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__41__inst));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__41__Vfuncout;
    __Vfunc_get_src1__39__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src1__39__Vfuncout = (0x1fU & (__Vfunc_get_src1__39__inst 
                                               >> 0x12U));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src1_addr 
        = __Vfunc_get_src1__39__Vfuncout;
    __Vfunc_get_src2__40__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src2__40__Vfuncout = (0x1fU & (__Vfunc_get_src2__40__inst 
                                               >> 0xdU));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src2_addr 
        = __Vfunc_get_src2__40__Vfuncout;
    __Vfunc_get_opcode__37__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__37__Vfuncout = (__Vfunc_get_opcode__37__inst 
                                        >> 0x1cU);
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__37__Vfuncout;
    __Vfunc_get_dst__33__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__33__Vfuncout = (0x1fU & (__Vfunc_get_dst__33__inst 
                                              >> 0x17U));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__33__Vfuncout;
    __Vfunc_get_imm__36__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__36__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__36__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__36__inst));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__36__Vfuncout;
    __Vfunc_get_src1__34__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src1__34__Vfuncout = (0x1fU & (__Vfunc_get_src1__34__inst 
                                               >> 0x12U));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src1_addr 
        = __Vfunc_get_src1__34__Vfuncout;
    __Vfunc_get_src2__35__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src2__35__Vfuncout = (0x1fU & (__Vfunc_get_src2__35__inst 
                                               >> 0xdU));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src2_addr 
        = __Vfunc_get_src2__35__Vfuncout;
    __Vfunc_get_opcode__32__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__32__Vfuncout = (__Vfunc_get_opcode__32__inst 
                                        >> 0x1cU);
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__32__Vfuncout;
    __Vfunc_get_dst__28__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__28__Vfuncout = (0x1fU & (__Vfunc_get_dst__28__inst 
                                              >> 0x17U));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__28__Vfuncout;
    __Vfunc_get_imm__31__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__31__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__31__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__31__inst));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__31__Vfuncout;
    __Vfunc_get_src1__29__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src1__29__Vfuncout = (0x1fU & (__Vfunc_get_src1__29__inst 
                                               >> 0x12U));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src1_addr 
        = __Vfunc_get_src1__29__Vfuncout;
    __Vfunc_get_src2__30__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src2__30__Vfuncout = (0x1fU & (__Vfunc_get_src2__30__inst 
                                               >> 0xdU));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src2_addr 
        = __Vfunc_get_src2__30__Vfuncout;
    __Vfunc_get_opcode__27__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__27__Vfuncout = (__Vfunc_get_opcode__27__inst 
                                        >> 0x1cU);
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__27__Vfuncout;
    __Vfunc_get_dst__23__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__23__Vfuncout = (0x1fU & (__Vfunc_get_dst__23__inst 
                                              >> 0x17U));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__23__Vfuncout;
    __Vfunc_get_imm__26__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__26__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__26__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__26__inst));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__26__Vfuncout;
    __Vfunc_get_src1__24__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src1__24__Vfuncout = (0x1fU & (__Vfunc_get_src1__24__inst 
                                               >> 0x12U));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src1_addr 
        = __Vfunc_get_src1__24__Vfuncout;
    __Vfunc_get_src2__25__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src2__25__Vfuncout = (0x1fU & (__Vfunc_get_src2__25__inst 
                                               >> 0xdU));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src2_addr 
        = __Vfunc_get_src2__25__Vfuncout;
    __Vfunc_get_opcode__22__inst = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__22__Vfuncout = (__Vfunc_get_opcode__22__inst 
                                        >> 0x1cU);
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__22__Vfuncout;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__ready = 1U;
        }
    }
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1)) 
                             + (QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2))));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result)) 
                             + (QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__imm))));
    if ((8U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    } else if ((4U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode))) {
        if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
                = ((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1 
                    >> 0x1fU) ? 0U : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1);
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
                = (VL_GTS_III(32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2)
                    ? vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1
                    : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2);
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
                = (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext);
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf 
                = ((IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                            >> 0x20U)) != (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                                 >> 0x1fU))))));
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf 
                = (((1U & (IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                   >> 0x1fU))) == (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__imm 
                                                   >> 0x1fU)) 
                   & ((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
                       >> 0x1fU) != (1U & (IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                   >> 0x1fU)))));
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow 
                = ((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf) 
                   | (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        }
    } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext);
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow 
            = ((IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
                        >> 0x20U)) != (- (IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
                                                  >> 0x1fU))));
    } else {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext);
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow 
            = (((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1 
                 >> 0x1fU) == (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2 
                               >> 0x1fU)) & ((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
                                              >> 0x1fU) 
                                             != (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1 
                                                 >> 0x1fU)));
    }
    vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__ready = 1U;
        }
    }
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1)) 
                             + (QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2))));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result)) 
                             + (QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__imm))));
    if ((8U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    } else if ((4U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode))) {
        if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
                = ((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1 
                    >> 0x1fU) ? 0U : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1);
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
                = (VL_GTS_III(32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2)
                    ? vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1
                    : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2);
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
                = (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext);
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf 
                = ((IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                            >> 0x20U)) != (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                                 >> 0x1fU))))));
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf 
                = (((1U & (IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                   >> 0x1fU))) == (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__imm 
                                                   >> 0x1fU)) 
                   & ((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
                       >> 0x1fU) != (1U & (IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                   >> 0x1fU)))));
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow 
                = ((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf) 
                   | (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        }
    } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext);
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow 
            = ((IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
                        >> 0x20U)) != (- (IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
                                                  >> 0x1fU))));
    } else {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext);
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow 
            = (((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1 
                 >> 0x1fU) == (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2 
                               >> 0x1fU)) & ((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
                                              >> 0x1fU) 
                                             != (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1 
                                                 >> 0x1fU)));
    }
    vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__ready = 1U;
        }
    }
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1)) 
                             + (QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2))));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result)) 
                             + (QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__imm))));
    if ((8U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    } else if ((4U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode))) {
        if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
                = ((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1 
                    >> 0x1fU) ? 0U : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1);
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
                = (VL_GTS_III(32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2)
                    ? vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1
                    : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2);
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
                = (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext);
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf 
                = ((IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                            >> 0x20U)) != (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                                 >> 0x1fU))))));
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf 
                = (((1U & (IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                   >> 0x1fU))) == (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__imm 
                                                   >> 0x1fU)) 
                   & ((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
                       >> 0x1fU) != (1U & (IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                   >> 0x1fU)))));
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow 
                = ((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf) 
                   | (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        }
    } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext);
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow 
            = ((IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
                        >> 0x20U)) != (- (IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
                                                  >> 0x1fU))));
    } else {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext);
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow 
            = (((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1 
                 >> 0x1fU) == (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2 
                               >> 0x1fU)) & ((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
                                              >> 0x1fU) 
                                             != (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1 
                                                 >> 0x1fU)));
    }
    vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__ready = 1U;
        }
    }
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1)) 
                             + (QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2))));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result)) 
                             + (QData)((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__imm))));
    if ((8U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result = 0U;
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    } else if ((4U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode))) {
        if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
                = ((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1 
                    >> 0x1fU) ? 0U : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1);
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
                = (VL_GTS_III(32, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1, vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2)
                    ? vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1
                    : vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2);
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
                = (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext);
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf 
                = ((IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                            >> 0x20U)) != (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                                 >> 0x1fU))))));
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf 
                = (((1U & (IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                   >> 0x1fU))) == (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__imm 
                                                   >> 0x1fU)) 
                   & ((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
                       >> 0x1fU) != (1U & (IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                   >> 0x1fU)))));
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow 
                = ((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf) 
                   | (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        }
    } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext);
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow 
            = ((IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
                        >> 0x20U)) != (- (IData)((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
                                                  >> 0x1fU))));
    } else {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext);
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow 
            = (((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1 
                 >> 0x1fU) == (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2 
                               >> 0x1fU)) & ((vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
                                              >> 0x1fU) 
                                             != (vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1 
                                                 >> 0x1fU)));
    }
    vlSelf->tb_lane_array__DOT__dut__DOT__lane_ready 
        = (((IData)(vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__ready) 
            << 3U) | (((IData)(vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__ready) 
                       << 2U) | (((IData)(vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__ready) 
                                  << 1U) | (IData)(vlSelf->tb_lane_array__DOT__dut__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__ready))));
}

VL_INLINE_OPT void Vtb_lane_array___024root___nba_comb__TOP__0(Vtb_lane_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next = 0U;
            if ((((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                  >> 3U) & (6U != (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result;
            }
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_lane_array__DOT__execute) 
                & ((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                   >> 3U))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next = 0U;
            if ((((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                  >> 2U) & (6U != (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result;
            }
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_lane_array__DOT__execute) 
                & ((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                   >> 2U))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next = 0U;
            if ((((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                  >> 1U) & (6U != (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result;
            }
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_lane_array__DOT__execute) 
                & ((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                   >> 1U))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
    vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    if ((2U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r))) {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next = 0U;
            if (((IData)(vlSelf->tb_lane_array__DOT__lane_enable) 
                 & (6U != (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result;
            }
        } else {
            vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_lane_array__DOT__execute) 
                & (IData)(vlSelf->tb_lane_array__DOT__lane_enable))) {
        vlSelf->tb_lane_array__DOT__dut__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
    vlSelf->tb_lane_array__DOT__ready = 1U;
    if ((1U & (IData)(vlSelf->tb_lane_array__DOT__lane_enable))) {
        vlSelf->tb_lane_array__DOT__ready = ((IData)(vlSelf->tb_lane_array__DOT__ready) 
                                             & (IData)(vlSelf->tb_lane_array__DOT__dut__DOT__lane_ready));
    }
    if ((2U & (IData)(vlSelf->tb_lane_array__DOT__lane_enable))) {
        vlSelf->tb_lane_array__DOT__ready = ((IData)(vlSelf->tb_lane_array__DOT__ready) 
                                             & ((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__lane_ready) 
                                                >> 1U));
    }
    if ((4U & (IData)(vlSelf->tb_lane_array__DOT__lane_enable))) {
        vlSelf->tb_lane_array__DOT__ready = ((IData)(vlSelf->tb_lane_array__DOT__ready) 
                                             & ((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__lane_ready) 
                                                >> 2U));
    }
    if ((8U & (IData)(vlSelf->tb_lane_array__DOT__lane_enable))) {
        vlSelf->tb_lane_array__DOT__ready = ((IData)(vlSelf->tb_lane_array__DOT__ready) 
                                             & ((IData)(vlSelf->tb_lane_array__DOT__dut__DOT__lane_ready) 
                                                >> 3U));
    }
}

void Vtb_lane_array___024root___eval_nba(Vtb_lane_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_lane_array___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_lane_array___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vtb_lane_array___024root___timing_resume(Vtb_lane_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h435c7f1d__0.resume("@(posedge tb_lane_array.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_lane_array___024root___timing_commit(Vtb_lane_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h435c7f1d__0.commit("@(posedge tb_lane_array.clk)");
    }
}

void Vtb_lane_array___024root___eval_triggers__act(Vtb_lane_array___024root* vlSelf);

bool Vtb_lane_array___024root___eval_phase__act(Vtb_lane_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_lane_array___024root___eval_triggers__act(vlSelf);
    Vtb_lane_array___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_lane_array___024root___timing_resume(vlSelf);
        Vtb_lane_array___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_lane_array___024root___eval_phase__nba(Vtb_lane_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_lane_array___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lane_array___024root___dump_triggers__nba(Vtb_lane_array___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lane_array___024root___dump_triggers__act(Vtb_lane_array___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_lane_array___024root___eval(Vtb_lane_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_lane_array___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_lane_array.sv", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_lane_array___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_lane_array.sv", 8, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_lane_array___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_lane_array___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_lane_array___024root___eval_debug_assertions(Vtb_lane_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
