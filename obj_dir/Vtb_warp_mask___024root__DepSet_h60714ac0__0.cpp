// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_warp_mask.h for the primary calling header

#include "Vtb_warp_mask__pch.h"
#include "Vtb_warp_mask__Syms.h"
#include "Vtb_warp_mask___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_warp_mask___024root___eval_initial__TOP__Vtiming__1(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    std::string __Vtask_tb_warp_mask__DOT__test_mask__0__test_name;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__0__mask_value;
    __Vtask_tb_warp_mask__DOT__test_mask__0__mask_value = 0;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__0__expected;
    __Vtask_tb_warp_mask__DOT__test_mask__0__expected = 0;
    std::string __Vtask_tb_warp_mask__DOT__test_mask__1__test_name;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__1__mask_value;
    __Vtask_tb_warp_mask__DOT__test_mask__1__mask_value = 0;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__1__expected;
    __Vtask_tb_warp_mask__DOT__test_mask__1__expected = 0;
    std::string __Vtask_tb_warp_mask__DOT__test_mask__2__test_name;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__2__mask_value;
    __Vtask_tb_warp_mask__DOT__test_mask__2__mask_value = 0;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__2__expected;
    __Vtask_tb_warp_mask__DOT__test_mask__2__expected = 0;
    std::string __Vtask_tb_warp_mask__DOT__test_mask__3__test_name;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__3__mask_value;
    __Vtask_tb_warp_mask__DOT__test_mask__3__mask_value = 0;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__3__expected;
    __Vtask_tb_warp_mask__DOT__test_mask__3__expected = 0;
    std::string __Vtask_tb_warp_mask__DOT__test_mask__4__test_name;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__4__mask_value;
    __Vtask_tb_warp_mask__DOT__test_mask__4__mask_value = 0;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__4__expected;
    __Vtask_tb_warp_mask__DOT__test_mask__4__expected = 0;
    std::string __Vtask_tb_warp_mask__DOT__test_mask__5__test_name;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__5__mask_value;
    __Vtask_tb_warp_mask__DOT__test_mask__5__mask_value = 0;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__5__expected;
    __Vtask_tb_warp_mask__DOT__test_mask__5__expected = 0;
    std::string __Vtask_tb_warp_mask__DOT__test_mask__6__test_name;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__6__mask_value;
    __Vtask_tb_warp_mask__DOT__test_mask__6__mask_value = 0;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__6__expected;
    __Vtask_tb_warp_mask__DOT__test_mask__6__expected = 0;
    std::string __Vtask_tb_warp_mask__DOT__test_mask__7__test_name;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__7__mask_value;
    __Vtask_tb_warp_mask__DOT__test_mask__7__mask_value = 0;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__7__expected;
    __Vtask_tb_warp_mask__DOT__test_mask__7__expected = 0;
    std::string __Vtask_tb_warp_mask__DOT__test_mask__8__test_name;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__8__mask_value;
    __Vtask_tb_warp_mask__DOT__test_mask__8__mask_value = 0;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__8__expected;
    __Vtask_tb_warp_mask__DOT__test_mask__8__expected = 0;
    std::string __Vtask_tb_warp_mask__DOT__test_mask__9__test_name;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value;
    __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value = 0;
    CData/*7:0*/ __Vtask_tb_warp_mask__DOT__test_mask__9__expected;
    __Vtask_tb_warp_mask__DOT__test_mask__9__expected = 0;
    // Body
    VL_WRITEF_NX("========================================\nWarp Mask Testbench\nNUM_LANES = 8\n========================================\n",0);
    vlSelf->tb_warp_mask__DOT__rst_n = 0U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    vlSelf->tb_warp_mask__DOT__mask_in = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_warp_mask.sv", 
                                       86);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    VL_WRITEF_NX("\n--- Test 1: Initial state (all lanes enabled) ---\n",0);
    if (VL_LIKELY((0xffU == (IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r)))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] All lanes enabled after reset: 0b%08b\n",0,
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:97: Assertion failed in %Ntb_warp_mask: [FAIL] Expected all lanes enabled, got 0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 97, "");
    }
    VL_WRITEF_NX("\n--- Test 2: Enable/disable specific lanes ---\n",0);
    __Vtask_tb_warp_mask__DOT__test_mask__0__expected = 0xfeU;
    __Vtask_tb_warp_mask__DOT__test_mask__0__mask_value = 0xfeU;
    __Vtask_tb_warp_mask__DOT__test_mask__0__test_name = 
        std::string{"Disable lane 0"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__0__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__0__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__0__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__0__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__0__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__0__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    __Vtask_tb_warp_mask__DOT__test_mask__1__expected = 1U;
    __Vtask_tb_warp_mask__DOT__test_mask__1__mask_value = 1U;
    __Vtask_tb_warp_mask__DOT__test_mask__1__test_name = 
        std::string{"Enable only lane 0"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__1__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__1__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__1__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__1__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__1__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__1__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    __Vtask_tb_warp_mask__DOT__test_mask__2__expected = 0x80U;
    __Vtask_tb_warp_mask__DOT__test_mask__2__mask_value = 0x80U;
    __Vtask_tb_warp_mask__DOT__test_mask__2__test_name = 
        std::string{"Enable only lane 7"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__2__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__2__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__2__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__2__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__2__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__2__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    __Vtask_tb_warp_mask__DOT__test_mask__3__expected = 0xffU;
    __Vtask_tb_warp_mask__DOT__test_mask__3__mask_value = 0xffU;
    __Vtask_tb_warp_mask__DOT__test_mask__3__test_name = 
        std::string{"Enable all lanes"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__3__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__3__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__3__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__3__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__3__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__3__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    __Vtask_tb_warp_mask__DOT__test_mask__4__expected = 0U;
    __Vtask_tb_warp_mask__DOT__test_mask__4__mask_value = 0U;
    __Vtask_tb_warp_mask__DOT__test_mask__4__test_name = 
        std::string{"Disable all lanes"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__4__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__4__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__4__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__4__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__4__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__4__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    VL_WRITEF_NX("\n--- Test 3: Alternating patterns ---\n",0);
    __Vtask_tb_warp_mask__DOT__test_mask__5__expected = 0xaaU;
    __Vtask_tb_warp_mask__DOT__test_mask__5__mask_value = 0xaaU;
    __Vtask_tb_warp_mask__DOT__test_mask__5__test_name = 
        std::string{"Alternating 10101010"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__5__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__5__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__5__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__5__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__5__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__5__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    __Vtask_tb_warp_mask__DOT__test_mask__6__expected = 0x55U;
    __Vtask_tb_warp_mask__DOT__test_mask__6__mask_value = 0x55U;
    __Vtask_tb_warp_mask__DOT__test_mask__6__test_name = 
        std::string{"Alternating 01010101"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__6__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__6__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__6__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__6__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__6__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__6__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    VL_WRITEF_NX("\n--- Test 4: Enable first half ---\n",0);
    __Vtask_tb_warp_mask__DOT__test_mask__7__expected = 0xfU;
    __Vtask_tb_warp_mask__DOT__test_mask__7__mask_value = 0xfU;
    __Vtask_tb_warp_mask__DOT__test_mask__7__test_name = 
        std::string{"First 4 lanes"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__7__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__7__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__7__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__7__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__7__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__7__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    VL_WRITEF_NX("\n--- Test 5: Enable second half ---\n",0);
    __Vtask_tb_warp_mask__DOT__test_mask__8__expected = 0xf0U;
    __Vtask_tb_warp_mask__DOT__test_mask__8__mask_value = 0xf0U;
    __Vtask_tb_warp_mask__DOT__test_mask__8__test_name = 
        std::string{"Last 4 lanes"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__8__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__8__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__8__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__8__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__8__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__8__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    VL_WRITEF_NX("\n--- Test 6: Single lane patterns ---\n",0);
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask = 1U;
    __Vtask_tb_warp_mask__DOT__test_mask__9__expected 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__test_name = 
        std::string{"Enable only lane 0"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__i = 1U;
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask = 2U;
    __Vtask_tb_warp_mask__DOT__test_mask__9__expected 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__test_name = 
        std::string{"Enable only lane 1"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask = 4U;
    __Vtask_tb_warp_mask__DOT__test_mask__9__expected 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__test_name = 
        std::string{"Enable only lane 2"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask = 8U;
    __Vtask_tb_warp_mask__DOT__test_mask__9__expected 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__test_name = 
        std::string{"Enable only lane 3"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__i = 4U;
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask = 0x10U;
    __Vtask_tb_warp_mask__DOT__test_mask__9__expected 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__test_name = 
        std::string{"Enable only lane 4"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__i = 5U;
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask = 0x20U;
    __Vtask_tb_warp_mask__DOT__test_mask__9__expected 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__test_name = 
        std::string{"Enable only lane 5"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__i = 6U;
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask = 0x40U;
    __Vtask_tb_warp_mask__DOT__test_mask__9__expected 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__test_name = 
        std::string{"Enable only lane 6"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__i = 7U;
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask = 0x80U;
    __Vtask_tb_warp_mask__DOT__test_mask__9__expected 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value 
        = vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    __Vtask_tb_warp_mask__DOT__test_mask__9__test_name = 
        std::string{"Enable only lane 7"};
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       55);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = __Vtask_tb_warp_mask__DOT__test_mask__9__mask_value;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_warp_mask.sv", 
                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                    == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected)) 
                   & ((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                      == (IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected))))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: mask=0b%08b, lane_enable=0b%08b\n",0,
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:70: Assertion failed in %Ntb_warp_mask.test_mask: [FAIL] %@: expected 0b%08b, got mask=0b%08b, lane_enable=0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_warp_mask__DOT__test_mask__9__test_name),
                     8,(IData)(__Vtask_tb_warp_mask__DOT__test_mask__9__expected),
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r,
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 70, "");
    }
    vlSelf->tb_warp_mask__DOT__unnamedblk1__DOT__i = 8U;
    VL_WRITEF_NX("\n--- Test 7: Mask persistence (no update) ---\n",0);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       124);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = 0xaaU;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       127);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    if (VL_LIKELY((0xaaU == (IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r)))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Mask persists without update: 0b%08b\n",0,
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:139: Assertion failed in %Ntb_warp_mask: [FAIL] Mask changed without update: expected 0b10101010, got 0b%08b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     8,(IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r));
        VL_STOP_MT("tb/tb_warp_mask.sv", 139, "");
    }
    VL_WRITEF_NX("\n--- Test 8: Rapid mask updates ---\n",0);
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = (0xffU & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       147);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    if (VL_LIKELY(((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                   == (IData)(vlSelf->tb_warp_mask__DOT__mask_in)))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Rapid update 0: mask=0b%08b\n",0,
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:154: Assertion failed in %Ntb_warp_mask.unnamedblk3: [FAIL] Rapid update 0 failed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_warp_mask.sv", 154, "");
    }
    vlSelf->tb_warp_mask__DOT__unnamedblk3__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = (0xffU & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       147);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    if (VL_LIKELY(((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                   == (IData)(vlSelf->tb_warp_mask__DOT__mask_in)))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Rapid update 1: mask=0b%08b\n",0,
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:154: Assertion failed in %Ntb_warp_mask.unnamedblk3: [FAIL] Rapid update 1 failed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_warp_mask.sv", 154, "");
    }
    vlSelf->tb_warp_mask__DOT__unnamedblk3__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = (0xffU & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       147);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    if (VL_LIKELY(((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                   == (IData)(vlSelf->tb_warp_mask__DOT__mask_in)))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Rapid update 2: mask=0b%08b\n",0,
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:154: Assertion failed in %Ntb_warp_mask.unnamedblk3: [FAIL] Rapid update 2 failed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_warp_mask.sv", 154, "");
    }
    vlSelf->tb_warp_mask__DOT__unnamedblk3__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__mask_update = 1U;
    vlSelf->tb_warp_mask__DOT__mask_in = (0xffU & VL_RANDOM_I());
    co_await vlSelf->__VtrigSched_h6be9514e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_warp_mask.clk)", 
                                                       "tb/tb_warp_mask.sv", 
                                                       147);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_mask__DOT__test_count = ((IData)(1U) 
                                             + vlSelf->tb_warp_mask__DOT__test_count);
    if (VL_LIKELY(((IData)(vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r) 
                   == (IData)(vlSelf->tb_warp_mask__DOT__mask_in)))) {
        vlSelf->tb_warp_mask__DOT__pass_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Rapid update 3: mask=0b%08b\n",0,
                     8,vlSelf->tb_warp_mask__DOT__dut__DOT__mask_r);
    } else {
        vlSelf->tb_warp_mask__DOT__fail_count = ((IData)(1U) 
                                                 + vlSelf->tb_warp_mask__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:154: Assertion failed in %Ntb_warp_mask.unnamedblk3: [FAIL] Rapid update 3 failed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_warp_mask.sv", 154, "");
    }
    vlSelf->tb_warp_mask__DOT__unnamedblk3__DOT__i = 4U;
    vlSelf->tb_warp_mask__DOT__mask_update = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_warp_mask.sv", 
                                       160);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n========================================\nTest Summary\n========================================\nTotal Tests: %0d\nPassed:      %0d\nFailed:      %0d\n========================================\n",0,
                 32,vlSelf->tb_warp_mask__DOT__test_count,
                 32,vlSelf->tb_warp_mask__DOT__pass_count,
                 32,vlSelf->tb_warp_mask__DOT__fail_count);
    if (VL_LIKELY((0U == vlSelf->tb_warp_mask__DOT__fail_count))) {
        VL_WRITEF_NX("ALL TESTS PASSED!\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_mask.sv:172: Assertion failed in %Ntb_warp_mask: SOME TESTS FAILED!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_warp_mask.sv", 172, "");
    }
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_warp_mask.sv", 
                                       175);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb/tb_warp_mask.sv", 176, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_warp_mask___024root___dump_triggers__act(Vtb_warp_mask___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_warp_mask___024root___eval_triggers__act(Vtb_warp_mask___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_mask__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_mask___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_warp_mask__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_warp_mask__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_warp_mask__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_warp_mask__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_warp_mask__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_warp_mask__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_mask__DOT__clk__0 
        = vlSelf->tb_warp_mask__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_mask__DOT__rst_n__0 
        = vlSelf->tb_warp_mask__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_warp_mask___024root___dump_triggers__act(vlSelf);
    }
#endif
}
