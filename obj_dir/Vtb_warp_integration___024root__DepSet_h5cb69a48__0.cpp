// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_warp_integration.h for the primary calling header

#include "Vtb_warp_integration__pch.h"
#include "Vtb_warp_integration___024root.h"

VL_ATTR_COLD void Vtb_warp_integration___024root___eval_initial__TOP(Vtb_warp_integration___024root* vlSelf);
VlCoroutine Vtb_warp_integration___024root___eval_initial__TOP__Vtiming__0(Vtb_warp_integration___024root* vlSelf);
VlCoroutine Vtb_warp_integration___024root___eval_initial__TOP__Vtiming__1(Vtb_warp_integration___024root* vlSelf);
VlCoroutine Vtb_warp_integration___024root___eval_initial__TOP__Vtiming__2(Vtb_warp_integration___024root* vlSelf);

void Vtb_warp_integration___024root___eval_initial(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_initial\n"); );
    // Body
    Vtb_warp_integration___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_warp_integration___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_warp_integration___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_warp_integration___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_integration__DOT__clk__0 
        = vlSelf->tb_warp_integration__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_integration__DOT__rst_n__0 
        = vlSelf->tb_warp_integration__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb_warp_integration___024root___eval_initial__TOP__Vtiming__0(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_warp_integration__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tb_warp_integration.sv", 
                                           138);
        vlSelf->tb_warp_integration__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelf->tb_warp_integration__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_warp_integration___024root___act_comb__TOP__0(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_next 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r;
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
}

void Vtb_warp_integration___024root___eval_act(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_act\n"); );
    // Body
    if ((5ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_warp_integration___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_warp_integration___024root___nba_sequent__TOP__0(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->tb_warp_integration__DOT__cmd_ready) 
                     & (IData)(vlSelf->tb_warp_integration__DOT___Vpast_0_0)))) {
        VL_WRITEF_NX("[MON] cmd_ready went HIGH at time %0t\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->tb_warp_integration__DOT__cmd_ready)) 
                     & (IData)(vlSelf->tb_warp_integration__DOT___Vpast_1_0)))) {
        VL_WRITEF_NX("[MON] cmd_ready went LOW at time %0t\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (VL_UNLIKELY((((IData)(vlSelf->tb_warp_integration__DOT__cmd_valid) 
                      & (~ (IData)(vlSelf->tb_warp_integration__DOT__cmd_ready))) 
                     & (0U == (IData)(vlSelf->tb_warp_integration__DOT__cmd_funct))))) {
        VL_WRITEF_NX("[MON] KERNEL_START sent, monitoring kernel signals...\n",0);
    }
    if (((0x493e0ULL <= VL_TIME_UNITED_Q(1000)) & (0xaae60ULL 
                                                   >= VL_TIME_UNITED_Q(1000)))) {
        if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_warp_integration__DOT__cmd_ready)) 
                                | (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r)) 
                               | (IData)(vlSelf->tb_warp_integration__DOT__cmd_valid))))) {
            VL_WRITEF_NX("[DETAIL] t=%0t: cmd_valid=%b, cmd_ready=%b, resp_valid=%b, resp_ready=%b, mem_req_valid=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,1,(IData)(vlSelf->tb_warp_integration__DOT__cmd_valid),
                         1,vlSelf->tb_warp_integration__DOT__cmd_ready,
                         1,(IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r),
                         1,vlSelf->tb_warp_integration__DOT__resp_ready,
                         1,(IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__ctrl_mem_req));
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r) 
                     & (IData)(vlSelf->tb_warp_integration__DOT__resp_ready)))) {
        VL_WRITEF_NX("[MON] Response handshake completed at time %0t\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r) 
                     & (~ (IData)(vlSelf->tb_warp_integration__DOT___Vpast_2_0))))) {
        VL_WRITEF_NX("[MON] resp_valid went HIGH at time %0t\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r)) 
                     & (IData)(vlSelf->tb_warp_integration__DOT___Vpast_3_0)))) {
        VL_WRITEF_NX("[MON] resp_valid went LOW at time %0t\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (vlSelf->tb_warp_integration__DOT__dut__DOT__ctrl_mem_req) {
        vlSelf->tb_warp_integration__DOT__mem_req_count 
            = ((IData)(1U) + vlSelf->tb_warp_integration__DOT__mem_req_count);
        if (VL_UNLIKELY(VL_GTES_III(32, 0xaU, vlSelf->tb_warp_integration__DOT__mem_req_count))) {
            VL_WRITEF_NX("[MON] Memory request #%0d: addr=0x%08x\n",0,
                         32,vlSelf->tb_warp_integration__DOT__mem_req_count,
                         32,vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__fetch_addr);
        }
    }
    if (((~ (IData)(vlSelf->tb_warp_integration__DOT__cmd_ready)) 
         & (IData)(vlSelf->tb_warp_integration__DOT__rst_n))) {
        vlSelf->tb_warp_integration__DOT__monitor_counter 
            = ((IData)(1U) + vlSelf->tb_warp_integration__DOT__monitor_counter);
        if (VL_UNLIKELY(((0xaU == vlSelf->tb_warp_integration__DOT__monitor_counter) 
                         | (0U == VL_MODDIVS_III(32, vlSelf->tb_warp_integration__DOT__monitor_counter, (IData)(0x64U)))))) {
            VL_WRITEF_NX("[MON] Waiting for cmd_ready (stuck for %0d cycles)... resp_valid=%b, resp_ready=%b, cmd_valid=%b\n[MON]   Internal state access attempt...\n",0,
                         32,vlSelf->tb_warp_integration__DOT__monitor_counter,
                         1,(IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r),
                         1,vlSelf->tb_warp_integration__DOT__resp_ready,
                         1,(IData)(vlSelf->tb_warp_integration__DOT__cmd_valid));
        }
    } else {
        vlSelf->tb_warp_integration__DOT__monitor_counter = 0U;
    }
    vlSelf->tb_warp_integration__DOT___Vpast_0_0 = 
        (1U & (~ (IData)(vlSelf->__Vsampled__TOP__tb_warp_integration__DOT__cmd_ready)));
    vlSelf->tb_warp_integration__DOT___Vpast_1_0 = vlSelf->__Vsampled__TOP__tb_warp_integration__DOT__cmd_ready;
    vlSelf->tb_warp_integration__DOT___Vpast_2_0 = vlSelf->__Vsampled__TOP__tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r;
    vlSelf->tb_warp_integration__DOT___Vpast_3_0 = vlSelf->__Vsampled__TOP__tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r;
}

VL_INLINE_OPT void Vtb_warp_integration___024root___nba_sequent__TOP__1(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___nba_sequent__TOP__1\n"); );
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
    SData/*15:0*/ __Vdly__tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count;
    __Vdly__tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v0;
    __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v0;
    __Vdlyvval__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v0;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v0 = 0;
    CData/*3:0*/ __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__write_ptr;
    __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__write_ptr = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v1;
    __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v1 = 0;
    IData/*31:0*/ __Vdlyvval__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v1;
    __Vdlyvval__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v1;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v1 = 0;
    CData/*4:0*/ __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count;
    __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count = 0;
    CData/*3:0*/ __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__read_ptr;
    __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__read_ptr = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0;
    // Body
    __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__read_ptr 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__read_ptr;
    __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__write_ptr 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__write_ptr;
    __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v0 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v1 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 0U;
    __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 0U;
    vlSelf->__Vdly__tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__fetch_addr 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__fetch_addr;
    __Vdly__tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count;
    if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__rst_n)))) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSelf->tb_warp_integration__DOT__rst_n) {
        if ((2U != ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_push) 
                      & (0x10U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count))) 
                     << 1U) | ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_pop) 
                               & (0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count)))))) {
            if ((1U == ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_push) 
                          & (0x10U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count))) 
                         << 1U) | ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_pop) 
                                   & (0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count)))))) {
                __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__read_ptr 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__read_ptr)));
            } else if ((3U == ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_push) 
                                 & (0x10U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count))) 
                                << 1U) | ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_pop) 
                                          & (0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count)))))) {
                __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__read_ptr 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__read_ptr)));
            }
        }
        if ((2U == ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_push) 
                      & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_full))) 
                     << 1U) | ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_pop) 
                               & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_empty)))))) {
            __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count)));
        } else if ((1U == ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_push) 
                             & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_full))) 
                            << 1U) | ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_pop) 
                                      & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_empty)))))) {
            __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count 
                = (0x1fU & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count) 
                            - (IData)(1U)));
        }
        if ((2U == ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_push) 
                      & (0x10U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count))) 
                     << 1U) | ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_pop) 
                               & (0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count)))))) {
            __Vdlyvval__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v0 
                = vlSelf->tb_warp_integration__DOT__mem_resp_data;
            __Vdlyvset__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v0 = 1U;
            __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__write_ptr;
            __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__write_ptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__write_ptr)));
        } else if ((1U != ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_push) 
                             & (0x10U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count))) 
                            << 1U) | ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_pop) 
                                      & (0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count)))))) {
            if ((3U == ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_push) 
                          & (0x10U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count))) 
                         << 1U) | ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_pop) 
                                   & (0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count)))))) {
                __Vdlyvval__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v1 
                    = vlSelf->tb_warp_integration__DOT__mem_resp_data;
                __Vdlyvset__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v1 = 1U;
                __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v1 
                    = vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__write_ptr;
                __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__write_ptr 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__write_ptr)));
            }
        }
        if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_write_en) 
             & (0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__dst_addr)))) {
            __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_write_data;
            __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 1U;
            __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__dst_addr;
        }
        if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_write_en) 
             & (0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__dst_addr)))) {
            __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_write_data;
            __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 1U;
            __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__dst_addr;
        }
        if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_write_en) 
             & (0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__dst_addr)))) {
            __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_write_data;
            __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 1U;
            __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__dst_addr;
        }
        if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_write_en) 
             & (0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__dst_addr)))) {
            __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_write_data;
            __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 1U;
            __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__dst_addr;
        }
        if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_en) 
             & (0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__dst_addr)))) {
            __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_data;
            __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 1U;
            __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__dst_addr;
        }
        if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_en) 
             & (0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__dst_addr)))) {
            __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_data;
            __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 1U;
            __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__dst_addr;
        }
        if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_en) 
             & (0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__dst_addr)))) {
            __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_data;
            __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 1U;
            __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__dst_addr;
        }
        if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_en) 
             & (0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__dst_addr)))) {
            __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_data;
            __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 = 1U;
            __Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__dst_addr;
        }
        if (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_start) 
             & (0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_start_r = 1U;
            vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_addr_r 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_addr;
            vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_length_r 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_length;
            vlSelf->__Vdly__tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__fetch_addr 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_addr;
            __Vdly__tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count = 0U;
        } else if ((0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_start_r = 0U;
        }
        if ((((1U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r)) 
              & (IData)(vlSelf->tb_warp_integration__DOT__mem_resp_valid)) 
             & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_pop)))) {
            __Vdly__tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count)));
            vlSelf->__Vdly__tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__fetch_addr 
                = ((IData)(4U) + vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__fetch_addr);
        }
        if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
              & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                 >> 7U)) & (0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__inst_r 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lane_instruction;
        }
        if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
              & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                 >> 6U)) & (0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__inst_r 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lane_instruction;
        }
        if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
              & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                 >> 5U)) & (0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__inst_r 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lane_instruction;
        }
        if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
              & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                 >> 4U)) & (0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__inst_r 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lane_instruction;
        }
        if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
              & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                 >> 3U)) & (0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lane_instruction;
        }
        if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
              & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                 >> 2U)) & (0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lane_instruction;
        }
        if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
              & ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r) 
                 >> 1U)) & (0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lane_instruction;
        }
        if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute) 
              & (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r)) 
             & (0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__lane_instruction;
        }
        if ((1U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r 
                = ((2U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__opcode_r))
                    ? (((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r)) 
                        << 5U) | (((2U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r)) 
                                   << 4U) | (((4U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r)) 
                                              << 3U) 
                                             | (((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_error) 
                                                 << 2U) 
                                                | (0U 
                                                   == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count))))))
                    : 0U);
        }
        if (((3U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_next)) 
             & (3U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r = 1U;
        } else if (((3U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r)) 
                    & (0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_next)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r = 0U;
        }
        if (((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r)) 
             & (IData)(vlSelf->tb_warp_integration__DOT__cmd_valid))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__opcode_r 
                = vlSelf->tb_warp_integration__DOT__cmd_funct;
            vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_rs1_data_r 
                = vlSelf->tb_warp_integration__DOT__cmd_rs1_data;
            vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_rs2_data_r 
                = vlSelf->tb_warp_integration__DOT__cmd_rs2_data;
            vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_rd_r 
                = vlSelf->tb_warp_integration__DOT__cmd_rd;
        }
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_r 
            = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_next;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_r 
            = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_next;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_r 
            = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_next;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_r 
            = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_next;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r 
            = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_next;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r 
            = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_next;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r 
            = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_next;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r 
            = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_next;
        if (vlSelf->tb_warp_integration__DOT__dut__DOT__mask_update) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r 
                = vlSelf->tb_warp_integration__DOT__dut__DOT__mask_value;
        }
        vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r 
            = vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_next;
        vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r 
            = vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_next;
    } else {
        __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__read_ptr = 0U;
        __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count = 0U;
        __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__write_ptr = 0U;
        __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 1U;
        __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 1U;
        __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 1U;
        __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 1U;
        __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 1U;
        __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 1U;
        __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 1U;
        __Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1 = 1U;
        __Vdly__tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count = 0U;
        vlSelf->__Vdly__tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__fetch_addr = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_start_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_addr_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_length_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__inst_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__inst_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__inst_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__inst_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_rd_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__opcode_r = 2U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_rs1_data_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_rs2_data_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__mask_inst__DOT__mask_r = 0xffU;
        vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__cmd_state_r = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r = 0U;
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__read_ptr 
        = __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__read_ptr;
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__write_ptr 
        = __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__write_ptr;
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem[__Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v0] 
            = __Vdlyvval__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v0;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v1) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem[__Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v1] 
            = __Vdlyvval__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__fifo_mem__v1;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0] 
            = __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xaU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xbU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xcU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xdU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xeU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xfU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x10U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x11U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x12U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x13U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x14U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x15U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x16U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x17U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x18U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x19U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1aU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1bU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1cU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1dU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1eU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1fU] = 0U;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0] 
            = __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xaU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xbU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xcU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xdU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xeU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xfU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x10U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x11U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x12U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x13U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x14U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x15U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x16U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x17U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x18U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x19U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1aU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1bU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1cU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1dU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1eU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1fU] = 0U;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0] 
            = __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xaU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xbU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xcU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xdU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xeU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xfU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x10U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x11U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x12U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x13U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x14U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x15U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x16U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x17U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x18U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x19U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1aU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1bU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1cU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1dU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1eU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1fU] = 0U;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0] 
            = __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xaU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xbU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xcU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xdU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xeU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xfU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x10U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x11U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x12U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x13U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x14U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x15U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x16U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x17U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x18U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x19U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1aU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1bU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1cU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1dU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1eU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1fU] = 0U;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0] 
            = __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xaU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xbU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xcU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xdU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xeU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xfU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x10U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x11U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x12U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x13U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x14U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x15U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x16U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x17U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x18U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x19U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1aU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1bU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1cU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1dU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1eU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1fU] = 0U;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0] 
            = __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xaU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xbU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xcU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xdU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xeU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xfU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x10U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x11U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x12U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x13U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x14U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x15U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x16U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x17U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x18U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x19U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1aU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1bU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1cU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1dU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1eU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1fU] = 0U;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0] 
            = __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xaU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xbU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xcU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xdU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xeU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xfU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x10U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x11U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x12U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x13U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x14U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x15U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x16U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x17U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x18U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x19U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1aU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1bU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1cU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1dU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1eU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1fU] = 0U;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[__Vdlyvdim0__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0] 
            = __Vdlyvval__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v0;
    }
    if (__Vdlyvset__tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers__v1) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[1U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[2U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[3U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[4U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[5U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[6U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[7U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[8U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[9U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xaU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xbU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xcU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xdU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xeU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0xfU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x10U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x11U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x12U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x13U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x14U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x15U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x16U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x17U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x18U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x19U] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1aU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1bU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1cU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1dU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1eU] = 0U;
        vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers[0x1fU] = 0U;
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count 
        = __Vdly__tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count;
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count 
        = __Vdly__tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count;
    __Vfunc_get_dst__40__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__40__Vfuncout = (0x1fU & (__Vfunc_get_dst__40__inst 
                                              >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__40__Vfuncout;
    __Vfunc_get_imm__43__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__43__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__43__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__43__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__43__Vfuncout;
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
    __Vfunc_get_opcode__39__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__39__Vfuncout = (__Vfunc_get_opcode__39__inst 
                                        >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__39__Vfuncout;
    __Vfunc_get_dst__35__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__35__Vfuncout = (0x1fU & (__Vfunc_get_dst__35__inst 
                                              >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__35__Vfuncout;
    __Vfunc_get_imm__38__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__38__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__38__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__38__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__38__Vfuncout;
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
    __Vfunc_get_opcode__34__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__34__Vfuncout = (__Vfunc_get_opcode__34__inst 
                                        >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__34__Vfuncout;
    __Vfunc_get_dst__30__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__30__Vfuncout = (0x1fU & (__Vfunc_get_dst__30__inst 
                                              >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__30__Vfuncout;
    __Vfunc_get_imm__33__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__33__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__33__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__33__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__33__Vfuncout;
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
    __Vfunc_get_opcode__29__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__29__Vfuncout = (__Vfunc_get_opcode__29__inst 
                                        >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__29__Vfuncout;
    __Vfunc_get_dst__25__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__25__Vfuncout = (0x1fU & (__Vfunc_get_dst__25__inst 
                                              >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__25__Vfuncout;
    __Vfunc_get_imm__28__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__28__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__28__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__28__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__28__Vfuncout;
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
    __Vfunc_get_opcode__24__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__24__Vfuncout = (__Vfunc_get_opcode__24__inst 
                                        >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__24__Vfuncout;
    __Vfunc_get_dst__20__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__20__Vfuncout = (0x1fU & (__Vfunc_get_dst__20__inst 
                                              >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__20__Vfuncout;
    __Vfunc_get_imm__23__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__23__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__23__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__23__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__23__Vfuncout;
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
    __Vfunc_get_opcode__19__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__19__Vfuncout = (__Vfunc_get_opcode__19__inst 
                                        >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__19__Vfuncout;
    __Vfunc_get_dst__15__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__15__Vfuncout = (0x1fU & (__Vfunc_get_dst__15__inst 
                                              >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__15__Vfuncout;
    __Vfunc_get_imm__18__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__18__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__18__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__18__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__18__Vfuncout;
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
    __Vfunc_get_opcode__14__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__14__Vfuncout = (__Vfunc_get_opcode__14__inst 
                                        >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__14__Vfuncout;
    __Vfunc_get_dst__10__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__10__Vfuncout = (0x1fU & (__Vfunc_get_dst__10__inst 
                                              >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__10__Vfuncout;
    __Vfunc_get_imm__13__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__13__Vfuncout = (((- (IData)((1U 
                                                  & (__Vfunc_get_imm__13__inst 
                                                     >> 0xcU)))) 
                                      << 0xdU) | (0x1fffU 
                                                  & __Vfunc_get_imm__13__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__13__Vfuncout;
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
    __Vfunc_get_opcode__9__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__9__Vfuncout = (__Vfunc_get_opcode__9__inst 
                                       >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__9__Vfuncout;
    __Vfunc_get_dst__5__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_dst__5__Vfuncout = (0x1fU & (__Vfunc_get_dst__5__inst 
                                             >> 0x17U));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__dst_addr 
        = __Vfunc_get_dst__5__Vfuncout;
    __Vfunc_get_imm__8__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_imm__8__Vfuncout = (((- (IData)((1U 
                                                 & (__Vfunc_get_imm__8__inst 
                                                    >> 0xcU)))) 
                                     << 0xdU) | (0x1fffU 
                                                 & __Vfunc_get_imm__8__inst));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__imm 
        = __Vfunc_get_imm__8__Vfuncout;
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
    __Vfunc_get_opcode__4__inst = vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__inst_r;
    __Vfunc_get_opcode__4__Vfuncout = (__Vfunc_get_opcode__4__inst 
                                       >> 0x1cU);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__opcode 
        = __Vfunc_get_opcode__4__Vfuncout;
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_full 
        = (0x10U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count));
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_empty 
        = (0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count));
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__src2_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data1 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src1_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src1_addr]);
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_read_data2 
        = ((0U == (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src2_addr))
            ? 0U : vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_inst__DOT__registers
           [vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__src2_addr]);
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
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__7__KET____DOT__lane_inst__ready = 1U;
        }
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
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__6__KET____DOT__lane_inst__ready = 1U;
        }
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
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__5__KET____DOT__lane_inst__ready = 1U;
        }
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
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__4__KET____DOT__lane_inst__ready = 1U;
        }
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
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__lane_inst__ready = 1U;
        }
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
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__lane_inst__ready = 1U;
        }
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
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__lane_inst__ready = 1U;
        }
    }
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
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__ready = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__state_r)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__lane_inst__ready = 1U;
        }
    }
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_write_en = 0U;
    vlSelf->tb_warp_integration__DOT__cmd_ready = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__mask_update = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_length = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_addr = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__mask_value = 0U;
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
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__7__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__6__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__5__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__4__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__3__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__2__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__1__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lanes_inst__DOT__gen_lanes__BRA__0__KET____DOT__lane_inst__DOT__rf_write_data = 0U;
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
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_pop = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lane_instruction = 0U;
    vlSelf->tb_warp_integration__DOT__dut__DOT__lane_execute = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r) 
                  >> 2U)))) {
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
    vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_next 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_r;
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
        if ((((IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__inst_count) 
              >= (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__kernel_length_r)) 
             & (0U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count)))) {
            vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_next = 2U;
        }
    } else if (vlSelf->tb_warp_integration__DOT__dut__DOT__kernel_start) {
        vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__state_next = 1U;
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

VL_INLINE_OPT void Vtb_warp_integration___024root___nba_sequent__TOP__2(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->tb_warp_integration__DOT__dut__DOT__ctrl_mem_req)) {
        VL_WRITEF_NX("[MEM] Read: addr=0x%08x, data=0x%08x\n",0,
                     32,vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__fetch_addr,
                     32,vlSelf->tb_warp_integration__DOT__test_mem
                     [(0x3ffU & (vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__fetch_addr 
                                 >> 2U))]);
        vlSelf->tb_warp_integration__DOT__mem_resp_data 
            = vlSelf->tb_warp_integration__DOT__test_mem
            [(0x3ffU & (vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__fetch_addr 
                        >> 2U))];
        vlSelf->tb_warp_integration__DOT__mem_resp_valid = 1U;
    } else {
        vlSelf->tb_warp_integration__DOT__mem_resp_valid = 0U;
    }
}

VL_INLINE_OPT void Vtb_warp_integration___024root___nba_sequent__TOP__3(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__fetch_addr 
        = vlSelf->__Vdly__tb_warp_integration__DOT__dut__DOT__controller_inst__DOT__fetch_addr;
    vlSelf->tb_warp_integration__DOT__dut__DOT__ctrl_mem_req = 0U;
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
    }
}

VL_INLINE_OPT void Vtb_warp_integration___024root___nba_comb__TOP__1(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_push 
        = ((0x10U != (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__fifo_inst__DOT__count)) 
           & (IData)(vlSelf->tb_warp_integration__DOT__mem_resp_valid));
}

void Vtb_warp_integration___024root___eval_nba(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_warp_integration___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_warp_integration___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_warp_integration___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_warp_integration___024root___act_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_warp_integration___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_warp_integration___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_warp_integration___024root___timing_resume(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hce2080ec__0.resume("@(posedge tb_warp_integration.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_warp_integration___024root___timing_commit(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hce2080ec__0.commit("@(posedge tb_warp_integration.clk)");
    }
}

void Vtb_warp_integration___024root___eval_triggers__act(Vtb_warp_integration___024root* vlSelf);

bool Vtb_warp_integration___024root___eval_phase__act(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_warp_integration___024root___eval_triggers__act(vlSelf);
    Vtb_warp_integration___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_warp_integration___024root___timing_resume(vlSelf);
        Vtb_warp_integration___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_warp_integration___024root___eval_phase__nba(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_warp_integration___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_warp_integration___024root___dump_triggers__nba(Vtb_warp_integration___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_warp_integration___024root___dump_triggers__act(Vtb_warp_integration___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_warp_integration___024root___eval(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval\n"); );
    // Init
    vlSelf->__Vsampled__TOP__tb_warp_integration__DOT__cmd_ready 
        = vlSelf->tb_warp_integration__DOT__cmd_ready;
    vlSelf->__Vsampled__TOP__tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r 
        = vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_warp_integration___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_warp_integration.sv", 8, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_warp_integration___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_warp_integration.sv", 8, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_warp_integration___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_warp_integration___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_warp_integration___024root___eval_debug_assertions(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
