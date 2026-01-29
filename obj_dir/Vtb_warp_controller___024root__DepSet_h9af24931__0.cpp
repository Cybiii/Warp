// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_warp_controller.h for the primary calling header

#include "Vtb_warp_controller__pch.h"
#include "Vtb_warp_controller__Syms.h"
#include "Vtb_warp_controller___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_warp_controller___024root___eval_initial__TOP__Vtiming__1(Vtb_warp_controller___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    IData/*31:0*/ tb_warp_controller__DOT____Vrepeat0;
    tb_warp_controller__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_warp_controller__DOT____Vrepeat2;
    tb_warp_controller__DOT____Vrepeat2 = 0;
    IData/*31:0*/ tb_warp_controller__DOT____Vrepeat4;
    tb_warp_controller__DOT____Vrepeat4 = 0;
    IData/*31:0*/ tb_warp_controller__DOT____Vrepeat6;
    tb_warp_controller__DOT____Vrepeat6 = 0;
    // Body
    VL_WRITEF_NX("========================================\nWarp Controller Testbench\n========================================\n",0);
    vlSelf->tb_warp_controller__DOT__rst_n = 0U;
    vlSelf->tb_warp_controller__DOT__kernel_start = 0U;
    vlSelf->tb_warp_controller__DOT__kernel_addr = 0U;
    vlSelf->tb_warp_controller__DOT__kernel_length = 0U;
    vlSelf->tb_warp_controller__DOT__fifo_empty = 1U;
    vlSelf->tb_warp_controller__DOT__fifo_valid = 0U;
    vlSelf->tb_warp_controller__DOT__fifo_data = 0U;
    vlSelf->tb_warp_controller__DOT__lane_ready = 1U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_warp_controller.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_controller__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "tb/tb_warp_controller.sv", 
                                       105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_controller__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_warp_controller__DOT__test_count);
    VL_WRITEF_NX("\n--- Test 1: Initial state (IDLE) ---\n",0);
    if (VL_LIKELY((1U & (((((~ (IData)(vlSelf->tb_warp_controller__DOT__kernel_done)) 
                            & (~ (IData)(vlSelf->tb_warp_controller__DOT__kernel_error))) 
                           & (~ (IData)(vlSelf->tb_warp_controller__DOT__fifo_pop))) 
                          & (~ (IData)(vlSelf->tb_warp_controller__DOT__lane_execute))) 
                         & (~ (IData)(vlSelf->tb_warp_controller__DOT__mem_req)))))) {
        vlSelf->tb_warp_controller__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Controller idle after reset\n",0);
    } else {
        vlSelf->tb_warp_controller__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_controller.sv:114: Assertion failed in %Ntb_warp_controller: [FAIL] Controller not idle: done=%b, error=%b, fifo_pop=%b, lane_exec=%b, mem_req=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     1,(IData)(vlSelf->tb_warp_controller__DOT__kernel_done),
                     1,vlSelf->tb_warp_controller__DOT__kernel_error,
                     1,(IData)(vlSelf->tb_warp_controller__DOT__fifo_pop),
                     1,vlSelf->tb_warp_controller__DOT__lane_execute,
                     1,(IData)(vlSelf->tb_warp_controller__DOT__mem_req));
        VL_STOP_MT("tb/tb_warp_controller.sv", 114, "");
    }
    VL_WRITEF_NX("\n--- Test 2: Start kernel with 4 instructions ---\n",0);
    vlSelf->tb_warp_controller__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_warp_controller__DOT__test_count);
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       120);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_controller__DOT__kernel_start = 1U;
    vlSelf->tb_warp_controller__DOT__kernel_addr = 0U;
    vlSelf->tb_warp_controller__DOT__kernel_length = 4U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       124);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_controller__DOT__kernel_start = 0U;
    tb_warp_controller__DOT____Vrepeat0 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_warp_controller__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_warp_controller.clk)", 
                                                               "tb/tb_warp_controller.sv", 
                                                               129);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_warp_controller__DOT__mem_req) {
                goto __Vlabel1;
            }
            tb_warp_controller__DOT____Vrepeat0 = (tb_warp_controller__DOT____Vrepeat0 
                                                   - (IData)(1U));
        }
        __Vlabel1: ;
    }
    if (VL_LIKELY(vlSelf->tb_warp_controller__DOT__mem_req)) {
        vlSelf->tb_warp_controller__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Controller started memory fetch\n",0);
    } else {
        vlSelf->tb_warp_controller__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_controller.sv:138: Assertion failed in %Ntb_warp_controller: [FAIL] Controller did not start memory fetch\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_warp_controller.sv", 138, "");
    }
    VL_WRITEF_NX("\n--- Test 3: Load instructions into FIFO ---\n",0);
    vlSelf->tb_warp_controller__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_warp_controller__DOT__test_count);
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       145);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       145);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       145);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       145);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       145);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       145);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       145);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       145);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       145);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       145);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_controller__DOT__fifo_empty = 0U;
    vlSelf->tb_warp_controller__DOT__fifo_valid = 1U;
    vlSelf->tb_warp_controller__DOT__fifo_data = 0xdeadbeefU;
    if (VL_UNLIKELY(vlSelf->tb_warp_controller__DOT__fifo_empty)) {
        vlSelf->tb_warp_controller__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_controller.sv:157: Assertion failed in %Ntb_warp_controller: [FAIL] FIFO empty after load\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_warp_controller.sv", 157, "");
    } else {
        vlSelf->tb_warp_controller__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Instructions in FIFO\n",0);
    }
    VL_WRITEF_NX("\n--- Test 4: Execute instructions ---\n",0);
    vlSelf->tb_warp_controller__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_warp_controller__DOT__test_count);
    vlSelf->tb_warp_controller__DOT__lane_ready = 1U;
    tb_warp_controller__DOT____Vrepeat2 = 0xaU;
    {
        while (VL_LTS_III(32, 0U, tb_warp_controller__DOT____Vrepeat2)) {
            co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_warp_controller.clk)", 
                                                               "tb/tb_warp_controller.sv", 
                                                               166);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_warp_controller__DOT__lane_execute) {
                goto __Vlabel2;
            }
            tb_warp_controller__DOT____Vrepeat2 = (tb_warp_controller__DOT____Vrepeat2 
                                                   - (IData)(1U));
        }
        __Vlabel2: ;
    }
    if (VL_LIKELY(vlSelf->tb_warp_controller__DOT__lane_execute)) {
        vlSelf->tb_warp_controller__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Controller signals lane execute\n",0);
    } else {
        vlSelf->tb_warp_controller__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_controller.sv:175: Assertion failed in %Ntb_warp_controller: [FAIL] Controller did not signal lane execute\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_warp_controller.sv", 175, "");
    }
    VL_WRITEF_NX("\n--- Test 5: FIFO pop on execute ---\n",0);
    vlSelf->tb_warp_controller__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_warp_controller__DOT__test_count);
    if (VL_LIKELY(vlSelf->tb_warp_controller__DOT__fifo_pop)) {
        vlSelf->tb_warp_controller__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Controller pops from FIFO\n",0);
    } else {
        vlSelf->tb_warp_controller__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_controller.sv:185: Assertion failed in %Ntb_warp_controller: [FAIL] Controller did not pop from FIFO\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_warp_controller.sv", 185, "");
    }
    VL_WRITEF_NX("\n--- Test 6: Complete execution ---\n",0);
    vlSelf->tb_warp_controller__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_warp_controller__DOT__test_count);
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       192);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_controller__DOT__lane_ready = 0U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       194);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       195);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_controller__DOT__lane_ready = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       199);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       199);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       199);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_controller__DOT__fifo_empty = 1U;
    vlSelf->tb_warp_controller__DOT__fifo_valid = 0U;
    tb_warp_controller__DOT____Vrepeat4 = 0x14U;
    {
        while (VL_LTS_III(32, 0U, tb_warp_controller__DOT____Vrepeat4)) {
            co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_warp_controller.clk)", 
                                                               "tb/tb_warp_controller.sv", 
                                                               205);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_warp_controller__DOT__kernel_done) {
                goto __Vlabel3;
            }
            tb_warp_controller__DOT____Vrepeat4 = (tb_warp_controller__DOT____Vrepeat4 
                                                   - (IData)(1U));
        }
        __Vlabel3: ;
    }
    if (VL_LIKELY(((IData)(vlSelf->tb_warp_controller__DOT__kernel_done) 
                   & (~ (IData)(vlSelf->tb_warp_controller__DOT__kernel_error))))) {
        vlSelf->tb_warp_controller__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Kernel completed successfully\n",0);
    } else {
        vlSelf->tb_warp_controller__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_controller.sv:214: Assertion failed in %Ntb_warp_controller: [FAIL] Kernel did not complete: done=%b, error=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     1,(IData)(vlSelf->tb_warp_controller__DOT__kernel_done),
                     1,vlSelf->tb_warp_controller__DOT__kernel_error);
        VL_STOP_MT("tb/tb_warp_controller.sv", 214, "");
    }
    VL_WRITEF_NX("\n--- Test 7: Return to IDLE after completion ---\n",0);
    vlSelf->tb_warp_controller__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_warp_controller__DOT__test_count);
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       219);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       220);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((1U & (((~ (IData)(vlSelf->tb_warp_controller__DOT__lane_execute)) 
                          & (~ (IData)(vlSelf->tb_warp_controller__DOT__mem_req))) 
                         & (~ (IData)(vlSelf->tb_warp_controller__DOT__fifo_pop)))))) {
        vlSelf->tb_warp_controller__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Controller returned to IDLE\n",0);
    } else {
        vlSelf->tb_warp_controller__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_controller.sv:227: Assertion failed in %Ntb_warp_controller: [FAIL] Controller not idle after completion\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_warp_controller.sv", 227, "");
    }
    VL_WRITEF_NX("\n--- Test 8: Second kernel execution ---\n",0);
    vlSelf->tb_warp_controller__DOT__test_count = ((IData)(1U) 
                                                   + vlSelf->tb_warp_controller__DOT__test_count);
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       234);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       234);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       234);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       234);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       234);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_controller__DOT__fifo_empty = 0U;
    vlSelf->tb_warp_controller__DOT__fifo_valid = 1U;
    vlSelf->tb_warp_controller__DOT__fifo_data = 0xcafebabeU;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       241);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_controller__DOT__kernel_start = 1U;
    vlSelf->tb_warp_controller__DOT__kernel_addr = 0x10U;
    vlSelf->tb_warp_controller__DOT__kernel_length = 2U;
    co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_controller.clk)", 
                                                       "tb/tb_warp_controller.sv", 
                                                       245);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_controller__DOT__kernel_start = 0U;
    tb_warp_controller__DOT____Vrepeat6 = 0xaU;
    {
        while (VL_LTS_III(32, 0U, tb_warp_controller__DOT____Vrepeat6)) {
            co_await vlSelf->__VtrigSched_h0dfe4411__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_warp_controller.clk)", 
                                                               "tb/tb_warp_controller.sv", 
                                                               250);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            if (vlSelf->tb_warp_controller__DOT__mem_req) {
                goto __Vlabel4;
            }
            tb_warp_controller__DOT____Vrepeat6 = (tb_warp_controller__DOT____Vrepeat6 
                                                   - (IData)(1U));
        }
        __Vlabel4: ;
    }
    if (VL_LIKELY(vlSelf->tb_warp_controller__DOT__mem_req)) {
        vlSelf->tb_warp_controller__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Controller accepts second kernel\n",0);
    } else {
        vlSelf->tb_warp_controller__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_warp_controller__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_controller.sv:259: Assertion failed in %Ntb_warp_controller: [FAIL] Controller did not accept second kernel\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_warp_controller.sv", 259, "");
    }
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_warp_controller.sv", 
                                       263);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n========================================\nTest Summary\n========================================\nTotal Tests: %0d\nPassed:      %0d\nFailed:      %0d\n========================================\n",0,
                 32,vlSelf->tb_warp_controller__DOT__test_count,
                 32,vlSelf->tb_warp_controller__DOT__pass_count,
                 32,vlSelf->tb_warp_controller__DOT__fail_count);
    if (VL_LIKELY((0U == vlSelf->tb_warp_controller__DOT__fail_count))) {
        VL_WRITEF_NX("ALL TESTS PASSED!\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_controller.sv:275: Assertion failed in %Ntb_warp_controller: SOME TESTS FAILED!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_warp_controller.sv", 275, "");
    }
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_warp_controller.sv", 
                                       278);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb/tb_warp_controller.sv", 279, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_warp_controller___024root___dump_triggers__act(Vtb_warp_controller___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_warp_controller___024root___eval_triggers__act(Vtb_warp_controller___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_controller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_controller___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_warp_controller__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_warp_controller__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_warp_controller__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_warp_controller__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_warp_controller__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_warp_controller__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_controller__DOT__clk__0 
        = vlSelf->tb_warp_controller__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_controller__DOT__rst_n__0 
        = vlSelf->tb_warp_controller__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_warp_controller___024root___dump_triggers__act(vlSelf);
    }
#endif
}
