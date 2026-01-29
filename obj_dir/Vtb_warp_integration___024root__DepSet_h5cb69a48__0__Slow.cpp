// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_warp_integration.h for the primary calling header

#include "Vtb_warp_integration__pch.h"
#include "Vtb_warp_integration___024root.h"

VL_ATTR_COLD void Vtb_warp_integration___024root___eval_static__TOP(Vtb_warp_integration___024root* vlSelf);

VL_ATTR_COLD void Vtb_warp_integration___024root___eval_static(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_static\n"); );
    // Body
    Vtb_warp_integration___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_warp_integration___024root___eval_static__TOP(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_warp_integration__DOT__test_count = 0U;
    vlSelf->tb_warp_integration__DOT__pass_count = 0U;
    vlSelf->tb_warp_integration__DOT__fail_count = 0U;
    vlSelf->tb_warp_integration__DOT__monitor_counter = 0U;
}

VL_ATTR_COLD void Vtb_warp_integration___024root___eval_initial__TOP(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb_warp_integration__DOT__test_mem[0U] = 0x80000aU;
    vlSelf->tb_warp_integration__DOT__test_mem[1U] = 0x1000014U;
    vlSelf->tb_warp_integration__DOT__test_mem[2U] = 0x1844000U;
    vlSelf->tb_warp_integration__DOT__test_mem[3U] = 0x12044000U;
    vlSelf->tb_warp_integration__DOT__test_mem[4U] = 0x32844000U;
    vlSelf->tb_warp_integration__DOT__test_mem[5U] = 0x43040000U;
}

VL_ATTR_COLD void Vtb_warp_integration___024root___eval_final(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_warp_integration___024root___dump_triggers__stl(Vtb_warp_integration___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_warp_integration___024root___eval_phase__stl(Vtb_warp_integration___024root* vlSelf);

VL_ATTR_COLD void Vtb_warp_integration___024root___eval_settle(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_settle\n"); );
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
            Vtb_warp_integration___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_warp_integration.sv", 8, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_warp_integration___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_warp_integration___024root___dump_triggers__stl(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_warp_integration___024root___stl_sequent__TOP__0(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vfunc_get_opcode__4__Vfuncout;
    __Vfunc_get_opcode__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_opcode__4__inst;
    __Vfunc_get_opcode__4__inst = 0;
    CData/*4:0*/ __Vfunc_get_dst__5__Vfuncout;
    __Vfunc_get_dst__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_dst__5__inst;
    __Vfunc_get_dst__5__inst = 0;
    CData/*4:0*/ __Vfunc_get_src1__6__Vfuncout;
    __Vfunc_get_src1__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src1__6__inst;
    __Vfunc_get_src1__6__inst = 0;
    CData/*4:0*/ __Vfunc_get_src2__7__Vfuncout;
    __Vfunc_get_src2__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src2__7__inst;
    __Vfunc_get_src2__7__inst = 0;
    IData/*31:0*/ __Vfunc_get_imm__8__Vfuncout;
    __Vfunc_get_imm__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__8__inst;
    __Vfunc_get_imm__8__inst = 0;
    CData/*3:0*/ __Vfunc_get_opcode__9__Vfuncout;
    __Vfunc_get_opcode__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_opcode__9__inst;
    __Vfunc_get_opcode__9__inst = 0;
    CData/*4:0*/ __Vfunc_get_dst__10__Vfuncout;
    __Vfunc_get_dst__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_dst__10__inst;
    __Vfunc_get_dst__10__inst = 0;
    CData/*4:0*/ __Vfunc_get_src1__11__Vfuncout;
    __Vfunc_get_src1__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src1__11__inst;
    __Vfunc_get_src1__11__inst = 0;
    CData/*4:0*/ __Vfunc_get_src2__12__Vfuncout;
    __Vfunc_get_src2__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src2__12__inst;
    __Vfunc_get_src2__12__inst = 0;
    IData/*31:0*/ __Vfunc_get_imm__13__Vfuncout;
    __Vfunc_get_imm__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__13__inst;
    __Vfunc_get_imm__13__inst = 0;
    CData/*3:0*/ __Vfunc_get_opcode__14__Vfuncout;
    __Vfunc_get_opcode__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_opcode__14__inst;
    __Vfunc_get_opcode__14__inst = 0;
    CData/*4:0*/ __Vfunc_get_dst__15__Vfuncout;
    __Vfunc_get_dst__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_dst__15__inst;
    __Vfunc_get_dst__15__inst = 0;
    CData/*4:0*/ __Vfunc_get_src1__16__Vfuncout;
    __Vfunc_get_src1__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src1__16__inst;
    __Vfunc_get_src1__16__inst = 0;
    CData/*4:0*/ __Vfunc_get_src2__17__Vfuncout;
    __Vfunc_get_src2__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src2__17__inst;
    __Vfunc_get_src2__17__inst = 0;
    IData/*31:0*/ __Vfunc_get_imm__18__Vfuncout;
    __Vfunc_get_imm__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__18__inst;
    __Vfunc_get_imm__18__inst = 0;
    CData/*3:0*/ __Vfunc_get_opcode__19__Vfuncout;
    __Vfunc_get_opcode__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_opcode__19__inst;
    __Vfunc_get_opcode__19__inst = 0;
    CData/*4:0*/ __Vfunc_get_dst__20__Vfuncout;
    __Vfunc_get_dst__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_dst__20__inst;
    __Vfunc_get_dst__20__inst = 0;
    CData/*4:0*/ __Vfunc_get_src1__21__Vfuncout;
    __Vfunc_get_src1__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src1__21__inst;
    __Vfunc_get_src1__21__inst = 0;
    CData/*4:0*/ __Vfunc_get_src2__22__Vfuncout;
    __Vfunc_get_src2__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src2__22__inst;
    __Vfunc_get_src2__22__inst = 0;
    IData/*31:0*/ __Vfunc_get_imm__23__Vfuncout;
    __Vfunc_get_imm__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__23__inst;
    __Vfunc_get_imm__23__inst = 0;
    CData/*3:0*/ __Vfunc_get_opcode__24__Vfuncout;
    __Vfunc_get_opcode__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_opcode__24__inst;
    __Vfunc_get_opcode__24__inst = 0;
    CData/*4:0*/ __Vfunc_get_dst__25__Vfuncout;
    __Vfunc_get_dst__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_dst__25__inst;
    __Vfunc_get_dst__25__inst = 0;
    CData/*4:0*/ __Vfunc_get_src1__26__Vfuncout;
    __Vfunc_get_src1__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src1__26__inst;
    __Vfunc_get_src1__26__inst = 0;
    CData/*4:0*/ __Vfunc_get_src2__27__Vfuncout;
    __Vfunc_get_src2__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src2__27__inst;
    __Vfunc_get_src2__27__inst = 0;
    IData/*31:0*/ __Vfunc_get_imm__28__Vfuncout;
    __Vfunc_get_imm__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__28__inst;
    __Vfunc_get_imm__28__inst = 0;
    CData/*3:0*/ __Vfunc_get_opcode__29__Vfuncout;
    __Vfunc_get_opcode__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_opcode__29__inst;
    __Vfunc_get_opcode__29__inst = 0;
    CData/*4:0*/ __Vfunc_get_dst__30__Vfuncout;
    __Vfunc_get_dst__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_dst__30__inst;
    __Vfunc_get_dst__30__inst = 0;
    CData/*4:0*/ __Vfunc_get_src1__31__Vfuncout;
    __Vfunc_get_src1__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src1__31__inst;
    __Vfunc_get_src1__31__inst = 0;
    CData/*4:0*/ __Vfunc_get_src2__32__Vfuncout;
    __Vfunc_get_src2__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src2__32__inst;
    __Vfunc_get_src2__32__inst = 0;
    IData/*31:0*/ __Vfunc_get_imm__33__Vfuncout;
    __Vfunc_get_imm__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__33__inst;
    __Vfunc_get_imm__33__inst = 0;
    CData/*3:0*/ __Vfunc_get_opcode__34__Vfuncout;
    __Vfunc_get_opcode__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_opcode__34__inst;
    __Vfunc_get_opcode__34__inst = 0;
    CData/*4:0*/ __Vfunc_get_dst__35__Vfuncout;
    __Vfunc_get_dst__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_dst__35__inst;
    __Vfunc_get_dst__35__inst = 0;
    CData/*4:0*/ __Vfunc_get_src1__36__Vfuncout;
    __Vfunc_get_src1__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src1__36__inst;
    __Vfunc_get_src1__36__inst = 0;
    CData/*4:0*/ __Vfunc_get_src2__37__Vfuncout;
    __Vfunc_get_src2__37__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src2__37__inst;
    __Vfunc_get_src2__37__inst = 0;
    IData/*31:0*/ __Vfunc_get_imm__38__Vfuncout;
    __Vfunc_get_imm__38__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__38__inst;
    __Vfunc_get_imm__38__inst = 0;
    CData/*3:0*/ __Vfunc_get_opcode__39__Vfuncout;
    __Vfunc_get_opcode__39__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_opcode__39__inst;
    __Vfunc_get_opcode__39__inst = 0;
    CData/*4:0*/ __Vfunc_get_dst__40__Vfuncout;
    __Vfunc_get_dst__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_dst__40__inst;
    __Vfunc_get_dst__40__inst = 0;
    CData/*4:0*/ __Vfunc_get_src1__41__Vfuncout;
    __Vfunc_get_src1__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src1__41__inst;
    __Vfunc_get_src1__41__inst = 0;
    CData/*4:0*/ __Vfunc_get_src2__42__Vfuncout;
    __Vfunc_get_src2__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_src2__42__inst;
    __Vfunc_get_src2__42__inst = 0;
    IData/*31:0*/ __Vfunc_get_imm__43__Vfuncout;
    __Vfunc_get_imm__43__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__43__inst;
    __Vfunc_get_imm__43__inst = 0;
    // Body
    vlSelf->tb_warp_integration__DOT__cmd_ready = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_full 
        = (0x10U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count));
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_empty 
        = (0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count));
    vlSelf->tb_warp_integration__DOT__dut__DOT__mask_update = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_push 
        = ((0x10U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count)) 
           & (IData)(vlSelf->tb_warp_integration__DOT__mem_resp_valid));
    vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_length = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_addr = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__mask_value = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__ctrl_mem_req = 0U;
    __Vfunc_get_dst__5__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__5__Vfuncout = (0x1fU & (__Vfunc_get_dst__5__inst 
                                             >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__5__Vfuncout;
    __Vfunc_get_dst__10__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__10__Vfuncout = (0x1fU & (__Vfunc_get_dst__10__inst 
                                              >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__10__Vfuncout;
    __Vfunc_get_dst__15__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__15__Vfuncout = (0x1fU & (__Vfunc_get_dst__15__inst 
                                              >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__15__Vfuncout;
    __Vfunc_get_dst__20__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__20__Vfuncout = (0x1fU & (__Vfunc_get_dst__20__inst 
                                              >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__20__Vfuncout;
    __Vfunc_get_dst__25__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__25__Vfuncout = (0x1fU & (__Vfunc_get_dst__25__inst 
                                              >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__25__Vfuncout;
    __Vfunc_get_dst__30__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__30__Vfuncout = (0x1fU & (__Vfunc_get_dst__30__inst 
                                              >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__30__Vfuncout;
    __Vfunc_get_dst__35__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__35__Vfuncout = (0x1fU & (__Vfunc_get_dst__35__inst 
                                              >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__35__Vfuncout;
    __Vfunc_get_dst__40__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__40__Vfuncout = (0x1fU & (__Vfunc_get_dst__40__inst 
                                              >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__40__Vfuncout;
    vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_start = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r)))) {
            vlSelf->tb_warp_integration__DOT__cmd_ready = 1U;
        }
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r))) {
            if ((0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__opcode_r))) {
                if ((1U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__opcode_r))) {
                    vlSelf->tb_warp_integration__DOT__dut__DOT__mask_update = 1U;
                    vlSelf->tb_warp_integration__DOT__dut__DOT__mask_value 
                        = (0xffU & vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_rs1_data_r);
                }
            }
            if ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__opcode_r))) {
                vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_length 
                    = (0xffffU & vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_rs2_data_r);
                vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_addr 
                    = vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_rs1_data_r;
                vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_start = 1U;
            }
        }
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_done = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_error = 0U;
    __Vfunc_get_imm__8__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__8__Vfuncout = (((- (IData)((1U 
                                                 & (__Vfunc_get_imm__8__inst 
                                                    >> 0xcU)))) 
                                     << 0xdU) | (0x1fffU 
                                                 & __Vfunc_get_imm__8__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__8__Vfuncout;
    __Vfunc_get_imm__13__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__13__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__13__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__13__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__13__Vfuncout;
    __Vfunc_get_imm__18__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__18__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__18__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__18__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__18__Vfuncout;
    __Vfunc_get_imm__23__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__23__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__23__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__23__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__23__Vfuncout;
    __Vfunc_get_imm__28__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__28__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__28__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__28__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__28__Vfuncout;
    __Vfunc_get_imm__33__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__33__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__33__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__33__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__33__Vfuncout;
    __Vfunc_get_imm__38__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__38__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__38__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__38__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__38__Vfuncout;
    __Vfunc_get_imm__43__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__43__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__43__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__43__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__43__Vfuncout;
    __Vfunc_get_src1__6__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src1__6__Vfuncout = (0x1fU & (__Vfunc_get_src1__6__inst 
                                              >> 0x12U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src1_addr 
        = __Vfunc_get_src1__6__Vfuncout;
    __Vfunc_get_src2__7__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src2__7__Vfuncout = (0x1fU & (__Vfunc_get_src2__7__inst 
                                              >> 0xdU));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src2_addr 
        = __Vfunc_get_src2__7__Vfuncout;
    __Vfunc_get_src1__11__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src1__11__Vfuncout = (0x1fU & (__Vfunc_get_src1__11__inst 
                                               >> 0x12U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src1_addr 
        = __Vfunc_get_src1__11__Vfuncout;
    __Vfunc_get_src2__12__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src2__12__Vfuncout = (0x1fU & (__Vfunc_get_src2__12__inst 
                                               >> 0xdU));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src2_addr 
        = __Vfunc_get_src2__12__Vfuncout;
    __Vfunc_get_src1__16__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src1__16__Vfuncout = (0x1fU & (__Vfunc_get_src1__16__inst 
                                               >> 0x12U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src1_addr 
        = __Vfunc_get_src1__16__Vfuncout;
    __Vfunc_get_src2__17__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src2__17__Vfuncout = (0x1fU & (__Vfunc_get_src2__17__inst 
                                               >> 0xdU));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src2_addr 
        = __Vfunc_get_src2__17__Vfuncout;
    __Vfunc_get_src1__21__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src1__21__Vfuncout = (0x1fU & (__Vfunc_get_src1__21__inst 
                                               >> 0x12U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src1_addr 
        = __Vfunc_get_src1__21__Vfuncout;
    __Vfunc_get_src2__22__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src2__22__Vfuncout = (0x1fU & (__Vfunc_get_src2__22__inst 
                                               >> 0xdU));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src2_addr 
        = __Vfunc_get_src2__22__Vfuncout;
    __Vfunc_get_src1__26__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src1__26__Vfuncout = (0x1fU & (__Vfunc_get_src1__26__inst 
                                               >> 0x12U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__src1_addr 
        = __Vfunc_get_src1__26__Vfuncout;
    __Vfunc_get_src2__27__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src2__27__Vfuncout = (0x1fU & (__Vfunc_get_src2__27__inst 
                                               >> 0xdU));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__src2_addr 
        = __Vfunc_get_src2__27__Vfuncout;
    __Vfunc_get_src1__31__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src1__31__Vfuncout = (0x1fU & (__Vfunc_get_src1__31__inst 
                                               >> 0x12U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__src1_addr 
        = __Vfunc_get_src1__31__Vfuncout;
    __Vfunc_get_src2__32__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src2__32__Vfuncout = (0x1fU & (__Vfunc_get_src2__32__inst 
                                               >> 0xdU));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__src2_addr 
        = __Vfunc_get_src2__32__Vfuncout;
    __Vfunc_get_src1__36__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src1__36__Vfuncout = (0x1fU & (__Vfunc_get_src1__36__inst 
                                               >> 0x12U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__src1_addr 
        = __Vfunc_get_src1__36__Vfuncout;
    __Vfunc_get_src2__37__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src2__37__Vfuncout = (0x1fU & (__Vfunc_get_src2__37__inst 
                                               >> 0xdU));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__src2_addr 
        = __Vfunc_get_src2__37__Vfuncout;
    __Vfunc_get_src1__41__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src1__41__Vfuncout = (0x1fU & (__Vfunc_get_src1__41__inst 
                                               >> 0x12U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__src1_addr 
        = __Vfunc_get_src1__41__Vfuncout;
    __Vfunc_get_src2__42__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_src2__42__Vfuncout = (0x1fU & (__Vfunc_get_src2__42__inst 
                                               >> 0xdU));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__src2_addr 
        = __Vfunc_get_src2__42__Vfuncout;
    __Vfunc_get_opcode__4__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__4__Vfuncout = (__Vfunc_get_opcode__4__inst 
                                       >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__4__Vfuncout;
    __Vfunc_get_opcode__9__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__9__Vfuncout = (__Vfunc_get_opcode__9__inst 
                                       >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__9__Vfuncout;
    __Vfunc_get_opcode__14__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__14__Vfuncout = (__Vfunc_get_opcode__14__inst 
                                        >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__14__Vfuncout;
    __Vfunc_get_opcode__19__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__19__Vfuncout = (__Vfunc_get_opcode__19__inst 
                                        >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__19__Vfuncout;
    __Vfunc_get_opcode__24__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__24__Vfuncout = (__Vfunc_get_opcode__24__inst 
                                        >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__24__Vfuncout;
    __Vfunc_get_opcode__29__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__29__Vfuncout = (__Vfunc_get_opcode__29__inst 
                                        >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__29__Vfuncout;
    __Vfunc_get_opcode__34__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__34__Vfuncout = (__Vfunc_get_opcode__34__inst 
                                        >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__34__Vfuncout;
    __Vfunc_get_opcode__39__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__39__Vfuncout = (__Vfunc_get_opcode__39__inst 
                                        >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__39__Vfuncout;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__ready = 1U;
        }
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__ready = 1U;
        }
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__ready = 1U;
        }
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__ready = 1U;
        }
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__ready = 1U;
        }
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__ready = 1U;
        }
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__ready = 1U;
        }
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__ready = 1U;
        }
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_next 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r;
    if ((4U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r)))) {
                vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_done = 1U;
            }
        }
        if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_error = 1U;
        } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_error = 1U;
        }
    }
    if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r))) {
            if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r) 
                 & (IData)(vlSelf->tb_warp_integration__DOT__resp_ready))) {
                vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_next = 0U;
            }
        } else if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_done) 
                    | (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_error))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_next 
            = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__opcode_r))
                ? 2U : 3U);
    } else if (vlSelf->tb_warp_integration__DOT__cmd_valid) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_next = 1U;
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__lane_ready 
        = (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__ready) 
            << 7U) | (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__ready) 
                       << 6U) | (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__ready) 
                                  << 5U) | (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__ready) 
                                             << 4U) 
                                            | (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__ready) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__ready) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__ready) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__ready))))))));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2))));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__imm))));
    if ((8U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    } else if ((4U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode))) {
        if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
                = ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1 
                    >> 0x1fU) ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
                = (VL_GTS_III(32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2)
                    ? vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1
                    : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
                = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf 
                = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                            >> 0x20U)) != (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                                 >> 0x1fU))))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf 
                = (((1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                   >> 0x1fU))) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__imm 
                                                   >> 0x1fU)) 
                   & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
                       >> 0x1fU) != (1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                   >> 0x1fU)))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow 
                = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf) 
                   | (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow 
            = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
                        >> 0x20U)) != (- (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
                                                  >> 0x1fU))));
    } else {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow 
            = (((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1 
                 >> 0x1fU) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2 
                               >> 0x1fU)) & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result 
                                              >> 0x1fU) 
                                             != (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1 
                                                 >> 0x1fU)));
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2))));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__imm))));
    if ((8U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    } else if ((4U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode))) {
        if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
                = ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1 
                    >> 0x1fU) ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
                = (VL_GTS_III(32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2)
                    ? vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1
                    : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
                = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf 
                = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                            >> 0x20U)) != (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                                 >> 0x1fU))))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf 
                = (((1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                   >> 0x1fU))) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__imm 
                                                   >> 0x1fU)) 
                   & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
                       >> 0x1fU) != (1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                   >> 0x1fU)))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow 
                = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf) 
                   | (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow 
            = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
                        >> 0x20U)) != (- (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
                                                  >> 0x1fU))));
    } else {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow 
            = (((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1 
                 >> 0x1fU) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2 
                               >> 0x1fU)) & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result 
                                              >> 0x1fU) 
                                             != (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1 
                                                 >> 0x1fU)));
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2))));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__imm))));
    if ((8U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    } else if ((4U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode))) {
        if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
                = ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1 
                    >> 0x1fU) ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
                = (VL_GTS_III(32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2)
                    ? vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1
                    : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
                = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf 
                = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                            >> 0x20U)) != (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                                 >> 0x1fU))))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf 
                = (((1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                   >> 0x1fU))) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__imm 
                                                   >> 0x1fU)) 
                   & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
                       >> 0x1fU) != (1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                   >> 0x1fU)))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow 
                = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf) 
                   | (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow 
            = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
                        >> 0x20U)) != (- (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
                                                  >> 0x1fU))));
    } else {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow 
            = (((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1 
                 >> 0x1fU) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2 
                               >> 0x1fU)) & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result 
                                              >> 0x1fU) 
                                             != (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1 
                                                 >> 0x1fU)));
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2))));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__imm))));
    if ((8U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    } else if ((4U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode))) {
        if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
                = ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1 
                    >> 0x1fU) ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
                = (VL_GTS_III(32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2)
                    ? vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1
                    : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
                = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf 
                = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                            >> 0x20U)) != (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                                 >> 0x1fU))))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf 
                = (((1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                   >> 0x1fU))) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__imm 
                                                   >> 0x1fU)) 
                   & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
                       >> 0x1fU) != (1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                   >> 0x1fU)))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow 
                = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf) 
                   | (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow 
            = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
                        >> 0x20U)) != (- (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
                                                  >> 0x1fU))));
    } else {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow 
            = (((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1 
                 >> 0x1fU) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2 
                               >> 0x1fU)) & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result 
                                              >> 0x1fU) 
                                             != (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1 
                                                 >> 0x1fU)));
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_result = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data1)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data2))));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__imm))));
    if ((8U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_result = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    } else if ((4U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__opcode))) {
        if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_result 
                = ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data1 
                    >> 0x1fU) ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data1);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_result 
                = (VL_GTS_III(32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data1, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data2)
                    ? vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data1
                    : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data2);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_result 
                = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf 
                = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                            >> 0x20U)) != (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                                 >> 0x1fU))))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf 
                = (((1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                   >> 0x1fU))) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__imm 
                                                   >> 0x1fU)) 
                   & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_result 
                       >> 0x1fU) != (1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                   >> 0x1fU)))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_overflow 
                = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf) 
                   | (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_overflow 
            = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
                        >> 0x20U)) != (- (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_result 
                                                  >> 0x1fU))));
    } else {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_overflow 
            = (((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data1 
                 >> 0x1fU) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data2 
                               >> 0x1fU)) & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_result 
                                              >> 0x1fU) 
                                             != (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data1 
                                                 >> 0x1fU)));
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_result = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data1)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data2))));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__imm))));
    if ((8U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_result = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    } else if ((4U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__opcode))) {
        if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_result 
                = ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data1 
                    >> 0x1fU) ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data1);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_result 
                = (VL_GTS_III(32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data1, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data2)
                    ? vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data1
                    : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data2);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_result 
                = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf 
                = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                            >> 0x20U)) != (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                                 >> 0x1fU))))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf 
                = (((1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                   >> 0x1fU))) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__imm 
                                                   >> 0x1fU)) 
                   & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_result 
                       >> 0x1fU) != (1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                   >> 0x1fU)))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_overflow 
                = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf) 
                   | (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_overflow 
            = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
                        >> 0x20U)) != (- (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_result 
                                                  >> 0x1fU))));
    } else {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_overflow 
            = (((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data1 
                 >> 0x1fU) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data2 
                               >> 0x1fU)) & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_result 
                                              >> 0x1fU) 
                                             != (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data1 
                                                 >> 0x1fU)));
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_result = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data1)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data2))));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__imm))));
    if ((8U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_result = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    } else if ((4U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__opcode))) {
        if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_result 
                = ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data1 
                    >> 0x1fU) ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data1);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_result 
                = (VL_GTS_III(32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data1, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data2)
                    ? vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data1
                    : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data2);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_result 
                = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf 
                = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                            >> 0x20U)) != (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                                 >> 0x1fU))))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf 
                = (((1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                   >> 0x1fU))) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__imm 
                                                   >> 0x1fU)) 
                   & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_result 
                       >> 0x1fU) != (1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                   >> 0x1fU)))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_overflow 
                = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf) 
                   | (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_overflow 
            = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
                        >> 0x20U)) != (- (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_result 
                                                  >> 0x1fU))));
    } else {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_overflow 
            = (((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data1 
                 >> 0x1fU) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data2 
                               >> 0x1fU)) & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_result 
                                              >> 0x1fU) 
                                             != (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data1 
                                                 >> 0x1fU)));
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_result = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data1)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data2))));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data1), 
                      VL_EXTENDS_QI(64,32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data2));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result)) 
                             + (QData)((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__imm))));
    if ((8U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_result = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
    } else if ((4U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__opcode))) {
        if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_result = 0U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_result 
                = ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data1 
                    >> 0x1fU) ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data1);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        }
    } else if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__opcode))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_result 
                = (VL_GTS_III(32, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data1, vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data2)
                    ? vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data1
                    : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data2);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_overflow = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_result 
                = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext);
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf 
                = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                            >> 0x20U)) != (- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                                 >> 0x1fU))))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf 
                = (((1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                   >> 0x1fU))) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__imm 
                                                   >> 0x1fU)) 
                   & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_result 
                       >> 0x1fU) != (1U & (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result 
                                                   >> 0x1fU)))));
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_overflow 
                = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf) 
                   | (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf));
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__opcode))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_overflow 
            = ((IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext 
                        >> 0x20U)) != (- (IData)((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_result 
                                                  >> 0x1fU))));
    } else {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_result 
            = (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext);
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_overflow 
            = (((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data1 
                 >> 0x1fU) == (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data2 
                               >> 0x1fU)) & ((vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_result 
                                              >> 0x1fU) 
                                             != (vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data1 
                                                 >> 0x1fU)));
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready = 1U;
    if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready 
            = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready) 
               & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__lane_ready));
    }
    if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready 
            = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready) 
               & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__lane_ready) 
                  >> 1U));
    }
    if ((4U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready 
            = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready) 
               & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__lane_ready) 
                  >> 2U));
    }
    if ((8U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready 
            = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready) 
               & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__lane_ready) 
                  >> 3U));
    }
    if ((0x10U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready 
            = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready) 
               & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__lane_ready) 
                  >> 4U));
    }
    if ((0x20U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready 
            = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready) 
               & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__lane_ready) 
                  >> 5U));
    }
    if ((0x40U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready 
            = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready) 
               & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__lane_ready) 
                  >> 6U));
    }
    if ((0x80U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready 
            = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready) 
               & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__lane_ready) 
                  >> 7U));
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_pop = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lane_instruction = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_next 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r;
    if ((4U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_next = 0U;
    } else if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_next = 1U;
        } else if (((0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count)) 
                    & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready))) {
            if (((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count)) 
                 & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count) 
                    >= (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_length_r)))) {
                vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_next = 4U;
            }
        } else if (((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count)) 
                    & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count) 
                       >= (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_length_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_next = 4U;
        } else if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_next = 2U;
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r))) {
        if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count) 
             >= (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_length_r))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_next = 2U;
        }
    } else if (vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_start) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_next = 1U;
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r))) {
                vlSelf->tb_warp_integration__DOT__dut__DOT__ctrl_mem_req 
                    = ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count) 
                       < (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_length_r));
            }
        }
        if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r))) {
            if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r)))) {
                if (((0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count)) 
                     & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready))) {
                    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_pop = 1U;
                    vlSelf->tb_warp_integration__DOT__dut__DOT__lane_instruction 
                        = vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem
                        [vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__read_ptr];
                    vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute = 1U;
                }
            }
        }
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r;
    if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r))) {
            if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                 & (6U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result;
            }
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
                & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r;
    if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r))) {
            if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                  >> 1U) & (6U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result;
            }
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
                & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                   >> 1U))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r;
    if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r))) {
            if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                  >> 2U) & (6U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result;
            }
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
                & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                   >> 2U))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r;
    if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r))) {
            if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                  >> 3U) & (6U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result;
            }
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
                & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                   >> 3U))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_r;
    if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_r))) {
            if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                  >> 4U) & (6U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_result;
            }
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_next = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
                & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                   >> 4U))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_r;
    if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_r))) {
            if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                  >> 5U) & (6U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_result;
            }
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_next = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
                & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                   >> 5U))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_r;
    if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_r))) {
            if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                  >> 6U) & (6U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_result;
            }
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_next = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
                & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                   >> 6U))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_next 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_r;
    if ((2U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_r))) {
            if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                  >> 7U) & (6U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__opcode)))) {
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_write_en = 1U;
                vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_write_data 
                    = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_result;
            }
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_next = 0U;
        } else {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_r))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_next = 2U;
    } else if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
                & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                   >> 7U))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_next = 1U;
    }
}

VL_ATTR_COLD void Vtb_warp_integration___024root___eval_stl(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_warp_integration___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_warp_integration___024root___eval_triggers__stl(Vtb_warp_integration___024root* vlSelf);

VL_ATTR_COLD bool Vtb_warp_integration___024root___eval_phase__stl(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_warp_integration___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_warp_integration___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_warp_integration___024root___dump_triggers__act(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_warp_integration.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_warp_integration.clk or negedge tb_warp_integration.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_warp_integration___024root___dump_triggers__nba(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_warp_integration.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_warp_integration.clk or negedge tb_warp_integration.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_warp_integration___024root___ctor_var_reset(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_warp_integration__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__cmd_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__cmd_funct = VL_RAND_RESET_I(7);
    vlSelf->tb_warp_integration__DOT__cmd_rs1 = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__cmd_rs2 = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__cmd_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__cmd_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__cmd_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__resp_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__mem_req_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__mem_req_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__mem_req_write = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__mem_req_data = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__mem_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__mem_resp_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_warp_integration__DOT__test_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_warp_integration__DOT__test_count = 0;
    vlSelf->tb_warp_integration__DOT__pass_count = 0;
    vlSelf->tb_warp_integration__DOT__fail_count = 0;
    vlSelf->tb_warp_integration__DOT__monitor_counter = 0;
    vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout = 0;
    vlSelf->tb_warp_integration__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT___Vpast_1_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_start = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_length = VL_RAND_RESET_I(16);
    vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_done = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_error = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__mask_update = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__mask_value = VL_RAND_RESET_I(8);
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_push = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_pop = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_full = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lane_instruction = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lane_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__ctrl_mem_req = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_rd_r = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__opcode_r = VL_RAND_RESET_I(7);
    vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_rs1_data_r = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_rs2_data_r = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_next = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r = VL_RAND_RESET_I(3);
    vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_next = VL_RAND_RESET_I(3);
    vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count = VL_RAND_RESET_I(16);
    vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__fetch_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_start_r = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_addr_r = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_length_r = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__write_ptr = VL_RAND_RESET_I(4);
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__read_ptr = VL_RAND_RESET_I(4);
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r = VL_RAND_RESET_I(8);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__lane_ready = VL_RAND_RESET_I(8);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__ready = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode = VL_RAND_RESET_I(4);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__dst_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src1_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src2_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_en = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_overflow = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode = VL_RAND_RESET_I(4);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__dst_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src1_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src2_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_en = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_overflow = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode = VL_RAND_RESET_I(4);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__dst_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src1_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src2_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_en = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_overflow = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode = VL_RAND_RESET_I(4);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__dst_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src1_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src2_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_en = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_overflow = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__opcode = VL_RAND_RESET_I(4);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__dst_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__src1_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__src2_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_write_en = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_overflow = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_r = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__inst_r = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__opcode = VL_RAND_RESET_I(4);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__dst_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__src1_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__src2_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_write_en = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_overflow = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_r = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__inst_r = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__opcode = VL_RAND_RESET_I(4);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__dst_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__src1_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__src2_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_write_en = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_overflow = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_r = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__inst_r = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__opcode = VL_RAND_RESET_I(4);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__dst_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__src1_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__src2_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_write_en = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_overflow = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_r = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__inst_r = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_result_ext = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_mul_result = VL_RAND_RESET_Q(64);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__fma_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__mul_ovf = VL_RAND_RESET_I(1);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__alu_inst__DOT__add_ovf = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__tb_warp_integration__DOT__test_mem__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_integration__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_integration__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
