// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_processing_lane.h for the primary calling header

#include "Vtb_processing_lane__pch.h"
#include "Vtb_processing_lane__Syms.h"
#include "Vtb_processing_lane___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_processing_lane___024root___eval_initial__TOP__Vtiming__1(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ tb_processing_lane__DOT____Vrepeat0;
    tb_processing_lane__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_processing_lane__DOT____Vrepeat1;
    tb_processing_lane__DOT____Vrepeat1 = 0;
    std::string __Vtask_tb_processing_lane__DOT__test_lane_instruction__0__test_name;
    IData/*31:0*/ __Vtask_tb_processing_lane__DOT__test_lane_instruction__0__inst;
    __Vtask_tb_processing_lane__DOT__test_lane_instruction__0__inst = 0;
    IData/*31:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__1__Vfuncout;
    __Vfunc_tb_processing_lane__DOT__make_inst__1__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__1__dst;
    __Vfunc_tb_processing_lane__DOT__make_inst__1__dst = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__1__src1;
    __Vfunc_tb_processing_lane__DOT__make_inst__1__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__1__src2;
    __Vfunc_tb_processing_lane__DOT__make_inst__1__src2 = 0;
    std::string __Vtask_tb_processing_lane__DOT__test_lane_instruction__2__test_name;
    IData/*31:0*/ __Vtask_tb_processing_lane__DOT__test_lane_instruction__2__inst;
    __Vtask_tb_processing_lane__DOT__test_lane_instruction__2__inst = 0;
    IData/*31:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__3__Vfuncout;
    __Vfunc_tb_processing_lane__DOT__make_inst__3__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__3__dst;
    __Vfunc_tb_processing_lane__DOT__make_inst__3__dst = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__3__src1;
    __Vfunc_tb_processing_lane__DOT__make_inst__3__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__3__src2;
    __Vfunc_tb_processing_lane__DOT__make_inst__3__src2 = 0;
    std::string __Vtask_tb_processing_lane__DOT__test_lane_instruction__4__test_name;
    IData/*31:0*/ __Vtask_tb_processing_lane__DOT__test_lane_instruction__4__inst;
    __Vtask_tb_processing_lane__DOT__test_lane_instruction__4__inst = 0;
    IData/*31:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__5__Vfuncout;
    __Vfunc_tb_processing_lane__DOT__make_inst__5__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__5__dst;
    __Vfunc_tb_processing_lane__DOT__make_inst__5__dst = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__5__src1;
    __Vfunc_tb_processing_lane__DOT__make_inst__5__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__5__src2;
    __Vfunc_tb_processing_lane__DOT__make_inst__5__src2 = 0;
    std::string __Vtask_tb_processing_lane__DOT__test_lane_instruction__6__test_name;
    IData/*31:0*/ __Vtask_tb_processing_lane__DOT__test_lane_instruction__6__inst;
    __Vtask_tb_processing_lane__DOT__test_lane_instruction__6__inst = 0;
    IData/*31:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__7__Vfuncout;
    __Vfunc_tb_processing_lane__DOT__make_inst__7__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__7__dst;
    __Vfunc_tb_processing_lane__DOT__make_inst__7__dst = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__7__src1;
    __Vfunc_tb_processing_lane__DOT__make_inst__7__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__7__src2;
    __Vfunc_tb_processing_lane__DOT__make_inst__7__src2 = 0;
    std::string __Vtask_tb_processing_lane__DOT__test_lane_instruction__8__test_name;
    IData/*31:0*/ __Vtask_tb_processing_lane__DOT__test_lane_instruction__8__inst;
    __Vtask_tb_processing_lane__DOT__test_lane_instruction__8__inst = 0;
    IData/*31:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__9__Vfuncout;
    __Vfunc_tb_processing_lane__DOT__make_inst__9__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__9__dst;
    __Vfunc_tb_processing_lane__DOT__make_inst__9__dst = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__9__src1;
    __Vfunc_tb_processing_lane__DOT__make_inst__9__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__9__src2;
    __Vfunc_tb_processing_lane__DOT__make_inst__9__src2 = 0;
    IData/*31:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__10__dst;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__dst = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__10__src1;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__10__src2;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src2 = 0;
    IData/*31:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__11__Vfuncout;
    __Vfunc_tb_processing_lane__DOT__make_inst__11__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__11__dst;
    __Vfunc_tb_processing_lane__DOT__make_inst__11__dst = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__11__src1;
    __Vfunc_tb_processing_lane__DOT__make_inst__11__src1 = 0;
    CData/*4:0*/ __Vfunc_tb_processing_lane__DOT__make_inst__11__src2;
    __Vfunc_tb_processing_lane__DOT__make_inst__11__src2 = 0;
    // Body
    VL_WRITEF_NX("========================================\nProcessing Lane Testbench\n========================================\n",0);
    vlSelf->tb_processing_lane__DOT__rst_n = 0U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 0U;
    vlSelf->tb_processing_lane__DOT__instruction = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_processing_lane.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "tb/tb_processing_lane.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    VL_WRITEF_NX("\n--- Test 1: Initial state ---\n",0);
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Lane ready after reset\n",0);
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:112: Assertion failed in %Ntb_processing_lane: [FAIL] Lane not ready after reset: ready=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     1,(IData)(vlSelf->tb_processing_lane__DOT__ready));
        VL_STOP_MT("tb/tb_processing_lane.sv", 112, "");
    }
    VL_WRITEF_NX("\n--- Test 2: Basic ALU operations ---\n",0);
    __Vfunc_tb_processing_lane__DOT__make_inst__1__src2 = 3U;
    __Vfunc_tb_processing_lane__DOT__make_inst__1__src1 = 2U;
    __Vfunc_tb_processing_lane__DOT__make_inst__1__dst = 1U;
    __Vfunc_tb_processing_lane__DOT__make_inst__1__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__1__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__1__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__1__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_processing_lane__DOT__test_lane_instruction__0__inst 
        = __Vfunc_tb_processing_lane__DOT__make_inst__1__Vfuncout;
    __Vtask_tb_processing_lane__DOT__test_lane_instruction__0__test_name = 
        std::string{"ADD R1 = R2 + R3"};
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 1U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    vlSelf->tb_processing_lane__DOT__instruction = __Vtask_tb_processing_lane__DOT__test_lane_instruction__0__inst;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 0U;
    tb_processing_lane__DOT____Vrepeat0 = 0xaU;
    {
        while (VL_LTS_III(32, 0U, tb_processing_lane__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_processing_lane.clk)", 
                                                               "tb/tb_processing_lane.sv", 
                                                               74);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_processing_lane__DOT__ready) {
                goto __Vlabel1;
            }
            tb_processing_lane__DOT____Vrepeat0 = (tb_processing_lane__DOT____Vrepeat0 
                                                   - (IData)(1U));
        }
        __Vlabel1: ;
    }
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed\n",0,-1,
                     &(__Vtask_tb_processing_lane__DOT__test_lane_instruction__0__test_name));
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:83: Assertion failed in %Ntb_processing_lane.test_lane_instruction: [FAIL] %@: did not complete in time (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_processing_lane__DOT__test_lane_instruction__0__test_name),
                     1,(IData)(vlSelf->tb_processing_lane__DOT__ready));
        VL_STOP_MT("tb/tb_processing_lane.sv", 83, "");
    }
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       87);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_processing_lane__DOT__make_inst__3__src2 = 6U;
    __Vfunc_tb_processing_lane__DOT__make_inst__3__src1 = 5U;
    __Vfunc_tb_processing_lane__DOT__make_inst__3__dst = 4U;
    __Vfunc_tb_processing_lane__DOT__make_inst__3__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__3__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__3__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__3__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_processing_lane__DOT__test_lane_instruction__2__inst 
        = __Vfunc_tb_processing_lane__DOT__make_inst__3__Vfuncout;
    __Vtask_tb_processing_lane__DOT__test_lane_instruction__2__test_name = 
        std::string{"MUL R4 = R5 * R6"};
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 1U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    vlSelf->tb_processing_lane__DOT__instruction = __Vtask_tb_processing_lane__DOT__test_lane_instruction__2__inst;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 0U;
    tb_processing_lane__DOT____Vrepeat0 = 0xaU;
    {
        while (VL_LTS_III(32, 0U, tb_processing_lane__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_processing_lane.clk)", 
                                                               "tb/tb_processing_lane.sv", 
                                                               74);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_processing_lane__DOT__ready) {
                goto __Vlabel2;
            }
            tb_processing_lane__DOT____Vrepeat0 = (tb_processing_lane__DOT____Vrepeat0 
                                                   - (IData)(1U));
        }
        __Vlabel2: ;
    }
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed\n",0,-1,
                     &(__Vtask_tb_processing_lane__DOT__test_lane_instruction__2__test_name));
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:83: Assertion failed in %Ntb_processing_lane.test_lane_instruction: [FAIL] %@: did not complete in time (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_processing_lane__DOT__test_lane_instruction__2__test_name),
                     1,(IData)(vlSelf->tb_processing_lane__DOT__ready));
        VL_STOP_MT("tb/tb_processing_lane.sv", 83, "");
    }
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       87);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vfunc_tb_processing_lane__DOT__make_inst__5__src2 = 9U;
    __Vfunc_tb_processing_lane__DOT__make_inst__5__src1 = 8U;
    __Vfunc_tb_processing_lane__DOT__make_inst__5__dst = 7U;
    __Vfunc_tb_processing_lane__DOT__make_inst__5__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__5__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__5__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__5__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_processing_lane__DOT__test_lane_instruction__4__inst 
        = __Vfunc_tb_processing_lane__DOT__make_inst__5__Vfuncout;
    __Vtask_tb_processing_lane__DOT__test_lane_instruction__4__test_name = 
        std::string{"MAX R7 = max(R8, R9)"};
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 1U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    vlSelf->tb_processing_lane__DOT__instruction = __Vtask_tb_processing_lane__DOT__test_lane_instruction__4__inst;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 0U;
    tb_processing_lane__DOT____Vrepeat0 = 0xaU;
    {
        while (VL_LTS_III(32, 0U, tb_processing_lane__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_processing_lane.clk)", 
                                                               "tb/tb_processing_lane.sv", 
                                                               74);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_processing_lane__DOT__ready) {
                goto __Vlabel3;
            }
            tb_processing_lane__DOT____Vrepeat0 = (tb_processing_lane__DOT____Vrepeat0 
                                                   - (IData)(1U));
        }
        __Vlabel3: ;
    }
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed\n",0,-1,
                     &(__Vtask_tb_processing_lane__DOT__test_lane_instruction__4__test_name));
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:83: Assertion failed in %Ntb_processing_lane.test_lane_instruction: [FAIL] %@: did not complete in time (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_processing_lane__DOT__test_lane_instruction__4__test_name),
                     1,(IData)(vlSelf->tb_processing_lane__DOT__ready));
        VL_STOP_MT("tb/tb_processing_lane.sv", 83, "");
    }
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       87);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n--- Test 3: Write to R0 (should be ignored) ---\n",0);
    __Vfunc_tb_processing_lane__DOT__make_inst__7__src2 = 2U;
    __Vfunc_tb_processing_lane__DOT__make_inst__7__src1 = 1U;
    __Vfunc_tb_processing_lane__DOT__make_inst__7__dst = 0U;
    __Vfunc_tb_processing_lane__DOT__make_inst__7__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__7__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__7__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__7__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_processing_lane__DOT__test_lane_instruction__6__inst 
        = __Vfunc_tb_processing_lane__DOT__make_inst__7__Vfuncout;
    __Vtask_tb_processing_lane__DOT__test_lane_instruction__6__test_name = 
        std::string{"ADD R0 = R1 + R2 (ignored)"};
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 1U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    vlSelf->tb_processing_lane__DOT__instruction = __Vtask_tb_processing_lane__DOT__test_lane_instruction__6__inst;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 0U;
    tb_processing_lane__DOT____Vrepeat0 = 0xaU;
    {
        while (VL_LTS_III(32, 0U, tb_processing_lane__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_processing_lane.clk)", 
                                                               "tb/tb_processing_lane.sv", 
                                                               74);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_processing_lane__DOT__ready) {
                goto __Vlabel4;
            }
            tb_processing_lane__DOT____Vrepeat0 = (tb_processing_lane__DOT____Vrepeat0 
                                                   - (IData)(1U));
        }
        __Vlabel4: ;
    }
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed\n",0,-1,
                     &(__Vtask_tb_processing_lane__DOT__test_lane_instruction__6__test_name));
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:83: Assertion failed in %Ntb_processing_lane.test_lane_instruction: [FAIL] %@: did not complete in time (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_processing_lane__DOT__test_lane_instruction__6__test_name),
                     1,(IData)(vlSelf->tb_processing_lane__DOT__ready));
        VL_STOP_MT("tb/tb_processing_lane.sv", 83, "");
    }
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       87);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n--- Test 4: Same register operations ---\n",0);
    __Vfunc_tb_processing_lane__DOT__make_inst__9__src2 = 5U;
    __Vfunc_tb_processing_lane__DOT__make_inst__9__src1 = 5U;
    __Vfunc_tb_processing_lane__DOT__make_inst__9__dst = 5U;
    __Vfunc_tb_processing_lane__DOT__make_inst__9__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__9__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__9__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__9__src2) 
                                                    << 0xdU))))));
    __Vtask_tb_processing_lane__DOT__test_lane_instruction__8__inst 
        = __Vfunc_tb_processing_lane__DOT__make_inst__9__Vfuncout;
    __Vtask_tb_processing_lane__DOT__test_lane_instruction__8__test_name = 
        std::string{"ADD R5 = R5 + R5"};
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 1U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    vlSelf->tb_processing_lane__DOT__instruction = __Vtask_tb_processing_lane__DOT__test_lane_instruction__8__inst;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 0U;
    tb_processing_lane__DOT____Vrepeat0 = 0xaU;
    {
        while (VL_LTS_III(32, 0U, tb_processing_lane__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_processing_lane.clk)", 
                                                               "tb/tb_processing_lane.sv", 
                                                               74);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_processing_lane__DOT__ready) {
                goto __Vlabel5;
            }
            tb_processing_lane__DOT____Vrepeat0 = (tb_processing_lane__DOT____Vrepeat0 
                                                   - (IData)(1U));
        }
        __Vlabel5: ;
    }
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: completed\n",0,-1,
                     &(__Vtask_tb_processing_lane__DOT__test_lane_instruction__8__test_name));
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:83: Assertion failed in %Ntb_processing_lane.test_lane_instruction: [FAIL] %@: did not complete in time (ready=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_processing_lane__DOT__test_lane_instruction__8__test_name),
                     1,(IData)(vlSelf->tb_processing_lane__DOT__ready));
        VL_STOP_MT("tb/tb_processing_lane.sv", 83, "");
    }
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       87);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n--- Test 5: Pipeline stress test (back-to-back) ---\n",0);
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 1U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src2 = 2U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src1 = 1U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__dst = 0U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src2) 
                                                    << 0xdU))))));
    vlSelf->tb_processing_lane__DOT__instruction = __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 0U;
    tb_processing_lane__DOT____Vrepeat1 = 0xaU;
    {
        while (VL_LTS_III(32, 0U, tb_processing_lane__DOT____Vrepeat1)) {
            co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_processing_lane.clk)", 
                                                               "tb/tb_processing_lane.sv", 
                                                               138);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_processing_lane__DOT__ready) {
                goto __Vlabel6;
            }
            tb_processing_lane__DOT____Vrepeat1 = (tb_processing_lane__DOT____Vrepeat1 
                                                   - (IData)(1U));
        }
        __Vlabel6: ;
    }
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Back-to-back inst 0 completed\n",0);
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:147: Assertion failed in %Ntb_processing_lane.unnamedblk1: [FAIL] Back-to-back inst 0 failed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_processing_lane.sv", 147, "");
    }
    vlSelf->tb_processing_lane__DOT__unnamedblk1__DOT__i = 1U;
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 1U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src2 = 3U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src1 = 2U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__dst = 1U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src2) 
                                                    << 0xdU))))));
    vlSelf->tb_processing_lane__DOT__instruction = __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 0U;
    tb_processing_lane__DOT____Vrepeat1 = 0xaU;
    {
        while (VL_LTS_III(32, 0U, tb_processing_lane__DOT____Vrepeat1)) {
            co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_processing_lane.clk)", 
                                                               "tb/tb_processing_lane.sv", 
                                                               138);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_processing_lane__DOT__ready) {
                goto __Vlabel7;
            }
            tb_processing_lane__DOT____Vrepeat1 = (tb_processing_lane__DOT____Vrepeat1 
                                                   - (IData)(1U));
        }
        __Vlabel7: ;
    }
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Back-to-back inst 1 completed\n",0);
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:147: Assertion failed in %Ntb_processing_lane.unnamedblk1: [FAIL] Back-to-back inst 1 failed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_processing_lane.sv", 147, "");
    }
    vlSelf->tb_processing_lane__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 1U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src2 = 4U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src1 = 3U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__dst = 2U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src2) 
                                                    << 0xdU))))));
    vlSelf->tb_processing_lane__DOT__instruction = __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 0U;
    tb_processing_lane__DOT____Vrepeat1 = 0xaU;
    {
        while (VL_LTS_III(32, 0U, tb_processing_lane__DOT____Vrepeat1)) {
            co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_processing_lane.clk)", 
                                                               "tb/tb_processing_lane.sv", 
                                                               138);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_processing_lane__DOT__ready) {
                goto __Vlabel8;
            }
            tb_processing_lane__DOT____Vrepeat1 = (tb_processing_lane__DOT____Vrepeat1 
                                                   - (IData)(1U));
        }
        __Vlabel8: ;
    }
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Back-to-back inst 2 completed\n",0);
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:147: Assertion failed in %Ntb_processing_lane.unnamedblk1: [FAIL] Back-to-back inst 2 failed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_processing_lane.sv", 147, "");
    }
    vlSelf->tb_processing_lane__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 1U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src2 = 5U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src1 = 4U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__dst = 3U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src2) 
                                                    << 0xdU))))));
    vlSelf->tb_processing_lane__DOT__instruction = __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 0U;
    tb_processing_lane__DOT____Vrepeat1 = 0xaU;
    {
        while (VL_LTS_III(32, 0U, tb_processing_lane__DOT____Vrepeat1)) {
            co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_processing_lane.clk)", 
                                                               "tb/tb_processing_lane.sv", 
                                                               138);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_processing_lane__DOT__ready) {
                goto __Vlabel9;
            }
            tb_processing_lane__DOT____Vrepeat1 = (tb_processing_lane__DOT____Vrepeat1 
                                                   - (IData)(1U));
        }
        __Vlabel9: ;
    }
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Back-to-back inst 3 completed\n",0);
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:147: Assertion failed in %Ntb_processing_lane.unnamedblk1: [FAIL] Back-to-back inst 3 failed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_processing_lane.sv", 147, "");
    }
    vlSelf->tb_processing_lane__DOT__unnamedblk1__DOT__i = 4U;
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 1U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src2 = 6U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src1 = 5U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__dst = 4U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src2) 
                                                    << 0xdU))))));
    vlSelf->tb_processing_lane__DOT__instruction = __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 0U;
    tb_processing_lane__DOT____Vrepeat1 = 0xaU;
    {
        while (VL_LTS_III(32, 0U, tb_processing_lane__DOT____Vrepeat1)) {
            co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_processing_lane.clk)", 
                                                               "tb/tb_processing_lane.sv", 
                                                               138);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_processing_lane__DOT__ready) {
                goto __Vlabel10;
            }
            tb_processing_lane__DOT____Vrepeat1 = (tb_processing_lane__DOT____Vrepeat1 
                                                   - (IData)(1U));
        }
        __Vlabel10: ;
    }
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Back-to-back inst 4 completed\n",0);
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:147: Assertion failed in %Ntb_processing_lane.unnamedblk1: [FAIL] Back-to-back inst 4 failed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_processing_lane.sv", 147, "");
    }
    vlSelf->tb_processing_lane__DOT__unnamedblk1__DOT__i = 5U;
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 1U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src2 = 7U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src1 = 6U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__dst = 5U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src2) 
                                                    << 0xdU))))));
    vlSelf->tb_processing_lane__DOT__instruction = __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 0U;
    tb_processing_lane__DOT____Vrepeat1 = 0xaU;
    {
        while (VL_LTS_III(32, 0U, tb_processing_lane__DOT____Vrepeat1)) {
            co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_processing_lane.clk)", 
                                                               "tb/tb_processing_lane.sv", 
                                                               138);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_processing_lane__DOT__ready) {
                goto __Vlabel11;
            }
            tb_processing_lane__DOT____Vrepeat1 = (tb_processing_lane__DOT____Vrepeat1 
                                                   - (IData)(1U));
        }
        __Vlabel11: ;
    }
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Back-to-back inst 5 completed\n",0);
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:147: Assertion failed in %Ntb_processing_lane.unnamedblk1: [FAIL] Back-to-back inst 5 failed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_processing_lane.sv", 147, "");
    }
    vlSelf->tb_processing_lane__DOT__unnamedblk1__DOT__i = 6U;
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 1U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src2 = 8U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src1 = 7U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__dst = 6U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src2) 
                                                    << 0xdU))))));
    vlSelf->tb_processing_lane__DOT__instruction = __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 0U;
    tb_processing_lane__DOT____Vrepeat1 = 0xaU;
    {
        while (VL_LTS_III(32, 0U, tb_processing_lane__DOT____Vrepeat1)) {
            co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_processing_lane.clk)", 
                                                               "tb/tb_processing_lane.sv", 
                                                               138);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_processing_lane__DOT__ready) {
                goto __Vlabel12;
            }
            tb_processing_lane__DOT____Vrepeat1 = (tb_processing_lane__DOT____Vrepeat1 
                                                   - (IData)(1U));
        }
        __Vlabel12: ;
    }
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Back-to-back inst 6 completed\n",0);
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:147: Assertion failed in %Ntb_processing_lane.unnamedblk1: [FAIL] Back-to-back inst 6 failed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_processing_lane.sv", 147, "");
    }
    vlSelf->tb_processing_lane__DOT__unnamedblk1__DOT__i = 7U;
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       129);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 1U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src2 = 9U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__src1 = 8U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__dst = 7U;
    __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__10__src2) 
                                                    << 0xdU))))));
    vlSelf->tb_processing_lane__DOT__instruction = __Vfunc_tb_processing_lane__DOT__make_inst__10__Vfuncout;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__execute = 0U;
    tb_processing_lane__DOT____Vrepeat1 = 0xaU;
    {
        while (VL_LTS_III(32, 0U, tb_processing_lane__DOT____Vrepeat1)) {
            co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_processing_lane.clk)", 
                                                               "tb/tb_processing_lane.sv", 
                                                               138);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_processing_lane__DOT__ready) {
                goto __Vlabel13;
            }
            tb_processing_lane__DOT____Vrepeat1 = (tb_processing_lane__DOT____Vrepeat1 
                                                   - (IData)(1U));
        }
        __Vlabel13: ;
    }
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Back-to-back inst 7 completed\n",0);
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:147: Assertion failed in %Ntb_processing_lane.unnamedblk1: [FAIL] Back-to-back inst 7 failed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_processing_lane.sv", 147, "");
    }
    vlSelf->tb_processing_lane__DOT__unnamedblk1__DOT__i = 8U;
    VL_WRITEF_NX("\n--- Test 6: Disabled lane (lane_enable=0) ---\n",0);
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       153);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 0U;
    vlSelf->tb_processing_lane__DOT__execute = 1U;
    __Vfunc_tb_processing_lane__DOT__make_inst__11__src2 = 0xcU;
    __Vfunc_tb_processing_lane__DOT__make_inst__11__src1 = 0xbU;
    __Vfunc_tb_processing_lane__DOT__make_inst__11__dst = 0xaU;
    __Vfunc_tb_processing_lane__DOT__make_inst__11__Vfuncout 
        = (IData)((QData)((IData)((((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__11__dst) 
                                    << 0x17U) | (((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__11__src1) 
                                                  << 0x12U) 
                                                 | ((IData)(__Vfunc_tb_processing_lane__DOT__make_inst__11__src2) 
                                                    << 0xdU))))));
    vlSelf->tb_processing_lane__DOT__instruction = __Vfunc_tb_processing_lane__DOT__make_inst__11__Vfuncout;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       158);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       158);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       158);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       158);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       158);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Disabled lane remains ready (doesn't execute)\n",0);
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:166: Assertion failed in %Ntb_processing_lane: [FAIL] Disabled lane behavior incorrect: ready=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     1,(IData)(vlSelf->tb_processing_lane__DOT__ready));
        VL_STOP_MT("tb/tb_processing_lane.sv", 166, "");
    }
    vlSelf->tb_processing_lane__DOT__execute = 0U;
    vlSelf->tb_processing_lane__DOT__lane_enable = 1U;
    VL_WRITEF_NX("\n--- Test 7: Ready signal check ---\n",0);
    vlSelf->tb_processing_lane__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_processing_lane__DOT__test_count);
    co_await vlSelf->__VtrigSched_ha9211336__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_processing_lane.clk)", 
                                                       "tb/tb_processing_lane.sv", 
                                                       174);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(vlSelf->tb_processing_lane__DOT__ready)) {
        vlSelf->tb_processing_lane__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Lane ready when idle\n",0);
    } else {
        vlSelf->tb_processing_lane__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_processing_lane__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:180: Assertion failed in %Ntb_processing_lane: [FAIL] Lane not ready when idle\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_processing_lane.sv", 180, "");
    }
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_processing_lane.sv", 
                                       184);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n========================================\nTest Summary\n========================================\nTotal Tests: %0d\nPassed:      %0d\nFailed:      %0d\n========================================\n",0,
                 32,vlSelf->tb_processing_lane__DOT__test_count,
                 32,vlSelf->tb_processing_lane__DOT__pass_count,
                 32,vlSelf->tb_processing_lane__DOT__fail_count);
    if (VL_LIKELY((0U == vlSelf->tb_processing_lane__DOT__fail_count))) {
        VL_WRITEF_NX("ALL TESTS PASSED!\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Error: tb_processing_lane.sv:196: Assertion failed in %Ntb_processing_lane: SOME TESTS FAILED!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_processing_lane.sv", 196, "");
    }
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_processing_lane.sv", 
                                       199);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb/tb_processing_lane.sv", 200, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processing_lane___024root___dump_triggers__act(Vtb_processing_lane___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_processing_lane___024root___eval_triggers__act(Vtb_processing_lane___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_processing_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processing_lane___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_processing_lane__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_processing_lane__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_processing_lane__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_processing_lane__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_processing_lane__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_processing_lane__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_processing_lane__DOT__clk__0 
        = vlSelf->tb_processing_lane__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_processing_lane__DOT__rst_n__0 
        = vlSelf->tb_processing_lane__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_processing_lane___024root___dump_triggers__act(vlSelf);
    }
#endif
}
