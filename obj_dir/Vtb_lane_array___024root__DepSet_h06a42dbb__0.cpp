// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lane_array.h for the primary calling header

#include "Vtb_lane_array__pch.h"
#include "Vtb_lane_array__Syms.h"
#include "Vtb_lane_array___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_lane_array___024root___eval_initial__TOP__Vtiming__1(Vtb_lane_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ tb_lane_array__DOT____Vrepeat0;
    tb_lane_array__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_lane_array__DOT____Vrepeat2;
    tb_lane_array__DOT____Vrepeat2 = 0;
    std::string __Vtask_tb_lane_array__DOT__test_lane_array_instruction__0__test_name;
    IData/*31:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__0__inst;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__0__inst = 0;
    CData/*3:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__0__mask;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__0__mask = 0;
    IData/*31:0*/ __Vfunc_tb_lane_array__DOT__make_inst__1__Vfuncout;
    __Vfunc_tb_lane_array__DOT__make_inst__1__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__1__dst;
    __Vfunc_tb_lane_array__DOT__make_inst__1__dst = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__1__src1;
    __Vfunc_tb_lane_array__DOT__make_inst__1__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__1__src2;
    __Vfunc_tb_lane_array__DOT__make_inst__1__src2 = 0;
    std::string __Vtask_tb_lane_array__DOT__test_lane_array_instruction__2__test_name;
    IData/*31:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__2__inst;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__2__inst = 0;
    CData/*3:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__2__mask;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__2__mask = 0;
    IData/*31:0*/ __Vfunc_tb_lane_array__DOT__make_inst__3__Vfuncout;
    __Vfunc_tb_lane_array__DOT__make_inst__3__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__3__dst;
    __Vfunc_tb_lane_array__DOT__make_inst__3__dst = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__3__src1;
    __Vfunc_tb_lane_array__DOT__make_inst__3__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__3__src2;
    __Vfunc_tb_lane_array__DOT__make_inst__3__src2 = 0;
    std::string __Vtask_tb_lane_array__DOT__test_lane_array_instruction__4__test_name;
    IData/*31:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__4__inst;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__4__inst = 0;
    CData/*3:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__4__mask;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__4__mask = 0;
    IData/*31:0*/ __Vfunc_tb_lane_array__DOT__make_inst__5__Vfuncout;
    __Vfunc_tb_lane_array__DOT__make_inst__5__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__5__dst;
    __Vfunc_tb_lane_array__DOT__make_inst__5__dst = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__5__src1;
    __Vfunc_tb_lane_array__DOT__make_inst__5__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__5__src2;
    __Vfunc_tb_lane_array__DOT__make_inst__5__src2 = 0;
    std::string __Vtask_tb_lane_array__DOT__test_lane_array_instruction__6__test_name;
    IData/*31:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__6__inst;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__6__inst = 0;
    CData/*3:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__6__mask;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__6__mask = 0;
    IData/*31:0*/ __Vfunc_tb_lane_array__DOT__make_inst__7__Vfuncout;
    __Vfunc_tb_lane_array__DOT__make_inst__7__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__7__dst;
    __Vfunc_tb_lane_array__DOT__make_inst__7__dst = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__7__src1;
    __Vfunc_tb_lane_array__DOT__make_inst__7__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__7__src2;
    __Vfunc_tb_lane_array__DOT__make_inst__7__src2 = 0;
    std::string __Vtask_tb_lane_array__DOT__test_lane_array_instruction__8__test_name;
    IData/*31:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__8__inst;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__8__inst = 0;
    CData/*3:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__8__mask;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__8__mask = 0;
    IData/*31:0*/ __Vfunc_tb_lane_array__DOT__make_inst__9__Vfuncout;
    __Vfunc_tb_lane_array__DOT__make_inst__9__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__9__dst;
    __Vfunc_tb_lane_array__DOT__make_inst__9__dst = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__9__src1;
    __Vfunc_tb_lane_array__DOT__make_inst__9__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__9__src2;
    __Vfunc_tb_lane_array__DOT__make_inst__9__src2 = 0;
    IData/*31:0*/ __Vfunc_tb_lane_array__DOT__make_inst__10__Vfuncout;
    __Vfunc_tb_lane_array__DOT__make_inst__10__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__10__dst;
    __Vfunc_tb_lane_array__DOT__make_inst__10__dst = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__10__src1;
    __Vfunc_tb_lane_array__DOT__make_inst__10__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__10__src2;
    __Vfunc_tb_lane_array__DOT__make_inst__10__src2 = 0;
    std::string __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__test_name;
    IData/*31:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__inst;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__inst = 0;
    CData/*3:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__mask;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__mask = 0;
    IData/*31:0*/ __Vfunc_tb_lane_array__DOT__make_inst__12__Vfuncout;
    __Vfunc_tb_lane_array__DOT__make_inst__12__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__12__dst;
    __Vfunc_tb_lane_array__DOT__make_inst__12__dst = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__12__src1;
    __Vfunc_tb_lane_array__DOT__make_inst__12__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__12__src2;
    __Vfunc_tb_lane_array__DOT__make_inst__12__src2 = 0;
    std::string __Vtask_tb_lane_array__DOT__test_lane_array_instruction__13__test_name;
    IData/*31:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__13__inst;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__13__inst = 0;
    CData/*3:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__13__mask;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__13__mask = 0;
    IData/*31:0*/ __Vfunc_tb_lane_array__DOT__make_inst__14__Vfuncout;
    __Vfunc_tb_lane_array__DOT__make_inst__14__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__14__dst;
    __Vfunc_tb_lane_array__DOT__make_inst__14__dst = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__14__src1;
    __Vfunc_tb_lane_array__DOT__make_inst__14__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__14__src2;
    __Vfunc_tb_lane_array__DOT__make_inst__14__src2 = 0;
    std::string __Vtask_tb_lane_array__DOT__test_lane_array_instruction__15__test_name;
    IData/*31:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__15__inst;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__15__inst = 0;
    CData/*3:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__15__mask;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__15__mask = 0;
    IData/*31:0*/ __Vfunc_tb_lane_array__DOT__make_inst__16__Vfuncout;
    __Vfunc_tb_lane_array__DOT__make_inst__16__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__16__dst;
    __Vfunc_tb_lane_array__DOT__make_inst__16__dst = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__16__src1;
    __Vfunc_tb_lane_array__DOT__make_inst__16__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__16__src2;
    __Vfunc_tb_lane_array__DOT__make_inst__16__src2 = 0;
    std::string __Vtask_tb_lane_array__DOT__test_lane_array_instruction__17__test_name;
    IData/*31:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__17__inst;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__17__inst = 0;
    CData/*3:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__17__mask;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__17__mask = 0;
    IData/*31:0*/ __Vfunc_tb_lane_array__DOT__make_inst__18__Vfuncout;
    __Vfunc_tb_lane_array__DOT__make_inst__18__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__18__dst;
    __Vfunc_tb_lane_array__DOT__make_inst__18__dst = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__18__src1;
    __Vfunc_tb_lane_array__DOT__make_inst__18__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__18__src2;
    __Vfunc_tb_lane_array__DOT__make_inst__18__src2 = 0;
    std::string __Vtask_tb_lane_array__DOT__test_lane_array_instruction__19__test_name;
    IData/*31:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__19__inst;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__19__inst = 0;
    CData/*3:0*/ __Vtask_tb_lane_array__DOT__test_lane_array_instruction__19__mask;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__19__mask = 0;
    IData/*31:0*/ __Vfunc_tb_lane_array__DOT__make_inst__20__Vfuncout;
    __Vfunc_tb_lane_array__DOT__make_inst__20__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__20__dst;
    __Vfunc_tb_lane_array__DOT__make_inst__20__dst = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__20__src1;
    __Vfunc_tb_lane_array__DOT__make_inst__20__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__20__src2;
    __Vfunc_tb_lane_array__DOT__make_inst__20__src2 = 0;
    IData/*31:0*/ __Vfunc_tb_lane_array__DOT__make_inst__21__Vfuncout;
    __Vfunc_tb_lane_array__DOT__make_inst__21__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__21__dst;
    __Vfunc_tb_lane_array__DOT__make_inst__21__dst = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__21__src1;
    __Vfunc_tb_lane_array__DOT__make_inst__21__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_lane_array__DOT__make_inst__21__src2;
    __Vfunc_tb_lane_array__DOT__make_inst__21__src2 = 0;
    // Body
    VL_WRITEF_NX("========================================\nLane Array Testbench\nNUM_LANES = 4\n========================================\n",0);
    vlSelf->tb_lane_array__DOT__rst_n = 0U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    vlSelf->tb_lane_array__DOT__instruction = 0U;
    vlSelf->tb_lane_array__DOT__lane_enable = 0xfU;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_lane_array.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "tb/tb_lane_array.sv", 
                                       108);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    VL_WRITEF_NX("\n--- Test 1: Initial state (all lanes ready) ---\n",0);
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Lane array ready after reset\n",0);
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:117: Assertion failed in %Ntb_lane_array: [FAIL] Lane array not ready after reset\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_lane_array.sv", 117, "");
    }
    VL_WRITEF_NX("\n--- Test 2: Execute with all lanes enabled ---\n",0);
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__0__mask = 0xfU;
    __Vfunc_tb_lane_array__DOT__make_inst__1__src2 = 3U;
    __Vfunc_tb_lane_array__DOT__make_inst__1__src1 = 2U;
    __Vfunc_tb_lane_array__DOT__make_inst__1__dst = 1U;
    __Vfunc_tb_lane_array__DOT__make_inst__1__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_lane_array__DOT__make_inst__1__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_lane_array__DOT__make_inst__1__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_lane_array__DOT__make_inst__1__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__0__inst 
        = __Vfunc_tb_lane_array__DOT__make_inst__1__Vfuncout;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__0__test_name = 
        std::string{"ADD with all lanes"};
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 1U;
    vlSelf->tb_lane_array__DOT__lane_enable = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__0__mask;
    vlSelf->tb_lane_array__DOT__instruction = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__0__inst;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    tb_lane_array__DOT____Vrepeat0 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_lane_array__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_lane_array.clk)", 
                                                               "tb/tb_lane_array.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_lane_array__DOT__ready) {
                goto __Vlabel1;
            }
            tb_lane_array__DOT____Vrepeat0 = (tb_lane_array__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        __Vlabel1: ;
    }
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed with mask 0b%04b\n",0,
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__0__test_name),
                     4,(IData)(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__0__mask));
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:88: Assertion failed in %Ntb_lane_array.test_lane_array_instruction: [FAIL] %@: did not complete (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__0__test_name),
                     1,(IData)(vlSelf->tb_lane_array__DOT__ready));
        VL_STOP_MT("tb/tb_lane_array.sv", 88, "");
    }
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n--- Test 3: Execute with single lane enabled ---\n",0);
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__2__mask = 1U;
    __Vfunc_tb_lane_array__DOT__make_inst__3__src2 = 6U;
    __Vfunc_tb_lane_array__DOT__make_inst__3__src1 = 5U;
    __Vfunc_tb_lane_array__DOT__make_inst__3__dst = 4U;
    __Vfunc_tb_lane_array__DOT__make_inst__3__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_lane_array__DOT__make_inst__3__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_lane_array__DOT__make_inst__3__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_lane_array__DOT__make_inst__3__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__2__inst 
        = __Vfunc_tb_lane_array__DOT__make_inst__3__Vfuncout;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__2__test_name = 
        std::string{"MUL with lane 0 only"};
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 1U;
    vlSelf->tb_lane_array__DOT__lane_enable = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__2__mask;
    vlSelf->tb_lane_array__DOT__instruction = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__2__inst;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    tb_lane_array__DOT____Vrepeat0 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_lane_array__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_lane_array.clk)", 
                                                               "tb/tb_lane_array.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_lane_array__DOT__ready) {
                goto __Vlabel2;
            }
            tb_lane_array__DOT____Vrepeat0 = (tb_lane_array__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        __Vlabel2: ;
    }
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed with mask 0b%04b\n",0,
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__2__test_name),
                     4,(IData)(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__2__mask));
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:88: Assertion failed in %Ntb_lane_array.test_lane_array_instruction: [FAIL] %@: did not complete (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__2__test_name),
                     1,(IData)(vlSelf->tb_lane_array__DOT__ready));
        VL_STOP_MT("tb/tb_lane_array.sv", 88, "");
    }
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__4__mask = 8U;
    __Vfunc_tb_lane_array__DOT__make_inst__5__src2 = 9U;
    __Vfunc_tb_lane_array__DOT__make_inst__5__src1 = 8U;
    __Vfunc_tb_lane_array__DOT__make_inst__5__dst = 7U;
    __Vfunc_tb_lane_array__DOT__make_inst__5__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_lane_array__DOT__make_inst__5__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_lane_array__DOT__make_inst__5__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_lane_array__DOT__make_inst__5__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__4__inst 
        = __Vfunc_tb_lane_array__DOT__make_inst__5__Vfuncout;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__4__test_name = 
        std::string{"ADD with lane 3 only"};
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 1U;
    vlSelf->tb_lane_array__DOT__lane_enable = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__4__mask;
    vlSelf->tb_lane_array__DOT__instruction = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__4__inst;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    tb_lane_array__DOT____Vrepeat0 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_lane_array__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_lane_array.clk)", 
                                                               "tb/tb_lane_array.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_lane_array__DOT__ready) {
                goto __Vlabel3;
            }
            tb_lane_array__DOT____Vrepeat0 = (tb_lane_array__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        __Vlabel3: ;
    }
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed with mask 0b%04b\n",0,
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__4__test_name),
                     4,(IData)(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__4__mask));
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:88: Assertion failed in %Ntb_lane_array.test_lane_array_instruction: [FAIL] %@: did not complete (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__4__test_name),
                     1,(IData)(vlSelf->tb_lane_array__DOT__ready));
        VL_STOP_MT("tb/tb_lane_array.sv", 88, "");
    }
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n--- Test 4: Execute with alternating lanes ---\n",0);
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__6__mask = 5U;
    __Vfunc_tb_lane_array__DOT__make_inst__7__src2 = 0xcU;
    __Vfunc_tb_lane_array__DOT__make_inst__7__src1 = 0xbU;
    __Vfunc_tb_lane_array__DOT__make_inst__7__dst = 0xaU;
    __Vfunc_tb_lane_array__DOT__make_inst__7__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_lane_array__DOT__make_inst__7__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_lane_array__DOT__make_inst__7__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_lane_array__DOT__make_inst__7__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__6__inst 
        = __Vfunc_tb_lane_array__DOT__make_inst__7__Vfuncout;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__6__test_name = 
        std::string{"MAX with lanes 0,2"};
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 1U;
    vlSelf->tb_lane_array__DOT__lane_enable = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__6__mask;
    vlSelf->tb_lane_array__DOT__instruction = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__6__inst;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    tb_lane_array__DOT____Vrepeat0 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_lane_array__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_lane_array.clk)", 
                                                               "tb/tb_lane_array.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_lane_array__DOT__ready) {
                goto __Vlabel4;
            }
            tb_lane_array__DOT____Vrepeat0 = (tb_lane_array__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        __Vlabel4: ;
    }
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed with mask 0b%04b\n",0,
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__6__test_name),
                     4,(IData)(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__6__mask));
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:88: Assertion failed in %Ntb_lane_array.test_lane_array_instruction: [FAIL] %@: did not complete (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__6__test_name),
                     1,(IData)(vlSelf->tb_lane_array__DOT__ready));
        VL_STOP_MT("tb/tb_lane_array.sv", 88, "");
    }
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__8__mask = 0xaU;
    __Vfunc_tb_lane_array__DOT__make_inst__9__src2 = 0xfU;
    __Vfunc_tb_lane_array__DOT__make_inst__9__src1 = 0xeU;
    __Vfunc_tb_lane_array__DOT__make_inst__9__dst = 0xdU;
    __Vfunc_tb_lane_array__DOT__make_inst__9__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_lane_array__DOT__make_inst__9__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_lane_array__DOT__make_inst__9__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_lane_array__DOT__make_inst__9__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__8__inst 
        = __Vfunc_tb_lane_array__DOT__make_inst__9__Vfuncout;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__8__test_name = 
        std::string{"ADD with lanes 1,3"};
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 1U;
    vlSelf->tb_lane_array__DOT__lane_enable = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__8__mask;
    vlSelf->tb_lane_array__DOT__instruction = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__8__inst;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    tb_lane_array__DOT____Vrepeat0 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_lane_array__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_lane_array.clk)", 
                                                               "tb/tb_lane_array.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_lane_array__DOT__ready) {
                goto __Vlabel5;
            }
            tb_lane_array__DOT____Vrepeat0 = (tb_lane_array__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        __Vlabel5: ;
    }
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed with mask 0b%04b\n",0,
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__8__test_name),
                     4,(IData)(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__8__mask));
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:88: Assertion failed in %Ntb_lane_array.test_lane_array_instruction: [FAIL] %@: did not complete (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__8__test_name),
                     1,(IData)(vlSelf->tb_lane_array__DOT__ready));
        VL_STOP_MT("tb/tb_lane_array.sv", 88, "");
    }
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n--- Test 5: Execute with no lanes enabled (immediate ready) ---\n",0);
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 1U;
    vlSelf->tb_lane_array__DOT__lane_enable = 0U;
    __Vfunc_tb_lane_array__DOT__make_inst__10__src2 = 3U;
    __Vfunc_tb_lane_array__DOT__make_inst__10__src1 = 2U;
    __Vfunc_tb_lane_array__DOT__make_inst__10__dst = 1U;
    __Vfunc_tb_lane_array__DOT__make_inst__10__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_lane_array__DOT__make_inst__10__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_lane_array__DOT__make_inst__10__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_lane_array__DOT__make_inst__10__src2) 
                                                    << 0xdU))))));
    vlSelf->tb_lane_array__DOT__instruction = __Vfunc_tb_lane_array__DOT__make_inst__10__Vfuncout;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       137);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       141);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       141);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       141);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] No lanes enabled: remains ready\n",0);
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:148: Assertion failed in %Ntb_lane_array: [FAIL] No lanes enabled: not ready\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_lane_array.sv", 148, "");
    }
    VL_WRITEF_NX("\n--- Test 6: Back-to-back operations ---\n",0);
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__mask = 0xfU;
    __Vfunc_tb_lane_array__DOT__make_inst__12__src2 = 2U;
    __Vfunc_tb_lane_array__DOT__make_inst__12__src1 = 1U;
    __Vfunc_tb_lane_array__DOT__make_inst__12__dst = 0U;
    __Vfunc_tb_lane_array__DOT__make_inst__12__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_lane_array__DOT__make_inst__12__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_lane_array__DOT__make_inst__12__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_lane_array__DOT__make_inst__12__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__inst 
        = __Vfunc_tb_lane_array__DOT__make_inst__12__Vfuncout;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__test_name = 
        std::string{"Back-to-back op 0"};
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 1U;
    vlSelf->tb_lane_array__DOT__lane_enable = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__mask;
    vlSelf->tb_lane_array__DOT__instruction = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__inst;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    tb_lane_array__DOT____Vrepeat0 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_lane_array__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_lane_array.clk)", 
                                                               "tb/tb_lane_array.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_lane_array__DOT__ready) {
                goto __Vlabel6;
            }
            tb_lane_array__DOT____Vrepeat0 = (tb_lane_array__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        __Vlabel6: ;
    }
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed with mask 0b%04b\n",0,
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__test_name),
                     4,(IData)(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__mask));
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:88: Assertion failed in %Ntb_lane_array.test_lane_array_instruction: [FAIL] %@: did not complete (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__test_name),
                     1,(IData)(vlSelf->tb_lane_array__DOT__ready));
        VL_STOP_MT("tb/tb_lane_array.sv", 88, "");
    }
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__unnamedblk1__DOT__i = 1U;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__mask = 0xfU;
    __Vfunc_tb_lane_array__DOT__make_inst__12__src2 = 3U;
    __Vfunc_tb_lane_array__DOT__make_inst__12__src1 = 2U;
    __Vfunc_tb_lane_array__DOT__make_inst__12__dst = 1U;
    __Vfunc_tb_lane_array__DOT__make_inst__12__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_lane_array__DOT__make_inst__12__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_lane_array__DOT__make_inst__12__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_lane_array__DOT__make_inst__12__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__inst 
        = __Vfunc_tb_lane_array__DOT__make_inst__12__Vfuncout;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__test_name = 
        std::string{"Back-to-back op 1"};
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 1U;
    vlSelf->tb_lane_array__DOT__lane_enable = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__mask;
    vlSelf->tb_lane_array__DOT__instruction = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__inst;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    tb_lane_array__DOT____Vrepeat0 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_lane_array__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_lane_array.clk)", 
                                                               "tb/tb_lane_array.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_lane_array__DOT__ready) {
                goto __Vlabel7;
            }
            tb_lane_array__DOT____Vrepeat0 = (tb_lane_array__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        __Vlabel7: ;
    }
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed with mask 0b%04b\n",0,
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__test_name),
                     4,(IData)(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__mask));
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:88: Assertion failed in %Ntb_lane_array.test_lane_array_instruction: [FAIL] %@: did not complete (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__test_name),
                     1,(IData)(vlSelf->tb_lane_array__DOT__ready));
        VL_STOP_MT("tb/tb_lane_array.sv", 88, "");
    }
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__unnamedblk1__DOT__i = 2U;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__mask = 0xfU;
    __Vfunc_tb_lane_array__DOT__make_inst__12__src2 = 4U;
    __Vfunc_tb_lane_array__DOT__make_inst__12__src1 = 3U;
    __Vfunc_tb_lane_array__DOT__make_inst__12__dst = 2U;
    __Vfunc_tb_lane_array__DOT__make_inst__12__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_lane_array__DOT__make_inst__12__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_lane_array__DOT__make_inst__12__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_lane_array__DOT__make_inst__12__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__inst 
        = __Vfunc_tb_lane_array__DOT__make_inst__12__Vfuncout;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__test_name = 
        std::string{"Back-to-back op 2"};
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 1U;
    vlSelf->tb_lane_array__DOT__lane_enable = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__mask;
    vlSelf->tb_lane_array__DOT__instruction = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__inst;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    tb_lane_array__DOT____Vrepeat0 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_lane_array__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_lane_array.clk)", 
                                                               "tb/tb_lane_array.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_lane_array__DOT__ready) {
                goto __Vlabel8;
            }
            tb_lane_array__DOT____Vrepeat0 = (tb_lane_array__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        __Vlabel8: ;
    }
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed with mask 0b%04b\n",0,
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__test_name),
                     4,(IData)(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__mask));
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:88: Assertion failed in %Ntb_lane_array.test_lane_array_instruction: [FAIL] %@: did not complete (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__test_name),
                     1,(IData)(vlSelf->tb_lane_array__DOT__ready));
        VL_STOP_MT("tb/tb_lane_array.sv", 88, "");
    }
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__unnamedblk1__DOT__i = 3U;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__mask = 0xfU;
    __Vfunc_tb_lane_array__DOT__make_inst__12__src2 = 5U;
    __Vfunc_tb_lane_array__DOT__make_inst__12__src1 = 4U;
    __Vfunc_tb_lane_array__DOT__make_inst__12__dst = 3U;
    __Vfunc_tb_lane_array__DOT__make_inst__12__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_lane_array__DOT__make_inst__12__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_lane_array__DOT__make_inst__12__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_lane_array__DOT__make_inst__12__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__inst 
        = __Vfunc_tb_lane_array__DOT__make_inst__12__Vfuncout;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__test_name = 
        std::string{"Back-to-back op 3"};
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 1U;
    vlSelf->tb_lane_array__DOT__lane_enable = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__mask;
    vlSelf->tb_lane_array__DOT__instruction = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__inst;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    tb_lane_array__DOT____Vrepeat0 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_lane_array__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_lane_array.clk)", 
                                                               "tb/tb_lane_array.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_lane_array__DOT__ready) {
                goto __Vlabel9;
            }
            tb_lane_array__DOT____Vrepeat0 = (tb_lane_array__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        __Vlabel9: ;
    }
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed with mask 0b%04b\n",0,
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__test_name),
                     4,(IData)(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__mask));
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:88: Assertion failed in %Ntb_lane_array.test_lane_array_instruction: [FAIL] %@: did not complete (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__11__test_name),
                     1,(IData)(vlSelf->tb_lane_array__DOT__ready));
        VL_STOP_MT("tb/tb_lane_array.sv", 88, "");
    }
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__unnamedblk1__DOT__i = 4U;
    VL_WRITEF_NX("\n--- Test 7: Different masks for each operation ---\n",0);
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__13__mask = 0xfU;
    __Vfunc_tb_lane_array__DOT__make_inst__14__src2 = 3U;
    __Vfunc_tb_lane_array__DOT__make_inst__14__src1 = 2U;
    __Vfunc_tb_lane_array__DOT__make_inst__14__dst = 1U;
    __Vfunc_tb_lane_array__DOT__make_inst__14__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_lane_array__DOT__make_inst__14__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_lane_array__DOT__make_inst__14__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_lane_array__DOT__make_inst__14__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__13__inst 
        = __Vfunc_tb_lane_array__DOT__make_inst__14__Vfuncout;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__13__test_name = 
        std::string{"Mask 0b1111"};
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 1U;
    vlSelf->tb_lane_array__DOT__lane_enable = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__13__mask;
    vlSelf->tb_lane_array__DOT__instruction = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__13__inst;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    tb_lane_array__DOT____Vrepeat0 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_lane_array__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_lane_array.clk)", 
                                                               "tb/tb_lane_array.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_lane_array__DOT__ready) {
                goto __Vlabel10;
            }
            tb_lane_array__DOT____Vrepeat0 = (tb_lane_array__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        __Vlabel10: ;
    }
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed with mask 0b%04b\n",0,
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__13__test_name),
                     4,(IData)(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__13__mask));
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:88: Assertion failed in %Ntb_lane_array.test_lane_array_instruction: [FAIL] %@: did not complete (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__13__test_name),
                     1,(IData)(vlSelf->tb_lane_array__DOT__ready));
        VL_STOP_MT("tb/tb_lane_array.sv", 88, "");
    }
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__15__mask = 0xeU;
    __Vfunc_tb_lane_array__DOT__make_inst__16__src2 = 6U;
    __Vfunc_tb_lane_array__DOT__make_inst__16__src1 = 5U;
    __Vfunc_tb_lane_array__DOT__make_inst__16__dst = 4U;
    __Vfunc_tb_lane_array__DOT__make_inst__16__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_lane_array__DOT__make_inst__16__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_lane_array__DOT__make_inst__16__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_lane_array__DOT__make_inst__16__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__15__inst 
        = __Vfunc_tb_lane_array__DOT__make_inst__16__Vfuncout;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__15__test_name = 
        std::string{"Mask 0b1110"};
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 1U;
    vlSelf->tb_lane_array__DOT__lane_enable = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__15__mask;
    vlSelf->tb_lane_array__DOT__instruction = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__15__inst;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    tb_lane_array__DOT____Vrepeat0 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_lane_array__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_lane_array.clk)", 
                                                               "tb/tb_lane_array.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_lane_array__DOT__ready) {
                goto __Vlabel11;
            }
            tb_lane_array__DOT____Vrepeat0 = (tb_lane_array__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        __Vlabel11: ;
    }
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed with mask 0b%04b\n",0,
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__15__test_name),
                     4,(IData)(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__15__mask));
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:88: Assertion failed in %Ntb_lane_array.test_lane_array_instruction: [FAIL] %@: did not complete (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__15__test_name),
                     1,(IData)(vlSelf->tb_lane_array__DOT__ready));
        VL_STOP_MT("tb/tb_lane_array.sv", 88, "");
    }
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__17__mask = 0xcU;
    __Vfunc_tb_lane_array__DOT__make_inst__18__src2 = 9U;
    __Vfunc_tb_lane_array__DOT__make_inst__18__src1 = 8U;
    __Vfunc_tb_lane_array__DOT__make_inst__18__dst = 7U;
    __Vfunc_tb_lane_array__DOT__make_inst__18__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_lane_array__DOT__make_inst__18__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_lane_array__DOT__make_inst__18__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_lane_array__DOT__make_inst__18__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__17__inst 
        = __Vfunc_tb_lane_array__DOT__make_inst__18__Vfuncout;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__17__test_name = 
        std::string{"Mask 0b1100"};
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 1U;
    vlSelf->tb_lane_array__DOT__lane_enable = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__17__mask;
    vlSelf->tb_lane_array__DOT__instruction = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__17__inst;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    tb_lane_array__DOT____Vrepeat0 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_lane_array__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_lane_array.clk)", 
                                                               "tb/tb_lane_array.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_lane_array__DOT__ready) {
                goto __Vlabel12;
            }
            tb_lane_array__DOT____Vrepeat0 = (tb_lane_array__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        __Vlabel12: ;
    }
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed with mask 0b%04b\n",0,
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__17__test_name),
                     4,(IData)(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__17__mask));
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:88: Assertion failed in %Ntb_lane_array.test_lane_array_instruction: [FAIL] %@: did not complete (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__17__test_name),
                     1,(IData)(vlSelf->tb_lane_array__DOT__ready));
        VL_STOP_MT("tb/tb_lane_array.sv", 88, "");
    }
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__19__mask = 8U;
    __Vfunc_tb_lane_array__DOT__make_inst__20__src2 = 0xcU;
    __Vfunc_tb_lane_array__DOT__make_inst__20__src1 = 0xbU;
    __Vfunc_tb_lane_array__DOT__make_inst__20__dst = 0xaU;
    __Vfunc_tb_lane_array__DOT__make_inst__20__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_lane_array__DOT__make_inst__20__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_lane_array__DOT__make_inst__20__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_lane_array__DOT__make_inst__20__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__19__inst 
        = __Vfunc_tb_lane_array__DOT__make_inst__20__Vfuncout;
    __Vtask_tb_lane_array__DOT__test_lane_array_instruction__19__test_name = 
        std::string{"Mask 0b1000"};
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 1U;
    vlSelf->tb_lane_array__DOT__lane_enable = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__19__mask;
    vlSelf->tb_lane_array__DOT__instruction = __Vtask_tb_lane_array__DOT__test_lane_array_instruction__19__inst;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    tb_lane_array__DOT____Vrepeat0 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_lane_array__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_lane_array.clk)", 
                                                               "tb/tb_lane_array.sv", 
                                                               79);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_lane_array__DOT__ready) {
                goto __Vlabel13;
            }
            tb_lane_array__DOT____Vrepeat0 = (tb_lane_array__DOT____Vrepeat0 
                                              - (IData)(1U));
        }
        __Vlabel13: ;
    }
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed with mask 0b%04b\n",0,
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__19__test_name),
                     4,(IData)(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__19__mask));
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:88: Assertion failed in %Ntb_lane_array.test_lane_array_instruction: [FAIL] %@: did not complete (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_lane_array__DOT__test_lane_array_instruction__19__test_name),
                     1,(IData)(vlSelf->tb_lane_array__DOT__ready));
        VL_STOP_MT("tb/tb_lane_array.sv", 88, "");
    }
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n--- Test 8: All lanes synchronize ---\n",0);
    vlSelf->tb_lane_array__DOT__test_count = ((IData)(1U) 
                                              + vlSelf->tb_lane_array__DOT__test_count);
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       166);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 1U;
    vlSelf->tb_lane_array__DOT__lane_enable = 0xfU;
    __Vfunc_tb_lane_array__DOT__make_inst__21__src2 = 0x16U;
    __Vfunc_tb_lane_array__DOT__make_inst__21__src1 = 0x15U;
    __Vfunc_tb_lane_array__DOT__make_inst__21__dst = 0x14U;
    __Vfunc_tb_lane_array__DOT__make_inst__21__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_lane_array__DOT__make_inst__21__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_lane_array__DOT__make_inst__21__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_lane_array__DOT__make_inst__21__src2) 
                                                    << 0xdU))))));
    vlSelf->tb_lane_array__DOT__instruction = __Vfunc_tb_lane_array__DOT__make_inst__21__Vfuncout;
    co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_lane_array.clk)", 
                                                       "tb/tb_lane_array.sv", 
                                                       170);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_lane_array__DOT__execute = 0U;
    tb_lane_array__DOT____Vrepeat2 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_lane_array__DOT____Vrepeat2)) {
            co_await vlSelf->__VtrigSched_h435c7f1d__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_lane_array.clk)", 
                                                               "tb/tb_lane_array.sv", 
                                                               175);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_lane_array__DOT__ready) {
                goto __Vlabel14;
            }
            tb_lane_array__DOT____Vrepeat2 = (tb_lane_array__DOT____Vrepeat2 
                                              - (IData)(1U));
        }
        __Vlabel14: ;
    }
    if (VL_LIKELY(vlSelf->tb_lane_array__DOT__ready)) {
        vlSelf->tb_lane_array__DOT__pass_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__pass_count);
        VL_WRITEF_NX("[PASS] All lanes synchronized and completed\n",0);
    } else {
        vlSelf->tb_lane_array__DOT__fail_count = ((IData)(1U) 
                                                  + vlSelf->tb_lane_array__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:184: Assertion failed in %Ntb_lane_array: [FAIL] Lanes did not synchronize\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_lane_array.sv", 184, "");
    }
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_lane_array.sv", 
                                       188);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n========================================\nTest Summary\n========================================\nTotal Tests: %0d\nPassed:      %0d\nFailed:      %0d\n========================================\n",0,
                 32,vlSelf->tb_lane_array__DOT__test_count,
                 32,vlSelf->tb_lane_array__DOT__pass_count,
                 32,vlSelf->tb_lane_array__DOT__fail_count);
    if (VL_LIKELY((0U == vlSelf->tb_lane_array__DOT__fail_count))) {
        VL_WRITEF_NX("ALL TESTS PASSED!\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Error: tb_lane_array.sv:200: Assertion failed in %Ntb_lane_array: SOME TESTS FAILED!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_lane_array.sv", 200, "");
    }
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_lane_array.sv", 
                                       203);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb/tb_lane_array.sv", 204, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lane_array___024root___dump_triggers__act(Vtb_lane_array___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_lane_array___024root___eval_triggers__act(Vtb_lane_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_lane_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lane_array___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_lane_array__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_lane_array__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_lane_array__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_lane_array__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_lane_array__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_lane_array__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_lane_array__DOT__clk__0 
        = vlSelf->tb_lane_array__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_lane_array__DOT__rst_n__0 
        = vlSelf->tb_lane_array__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_lane_array___024root___dump_triggers__act(vlSelf);
    }
#endif
}
