// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_instruction_fifo.h for the primary calling header

#include "Vtb_instruction_fifo__pch.h"
#include "Vtb_instruction_fifo__Syms.h"
#include "Vtb_instruction_fifo___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_instruction_fifo___024root___eval_initial__TOP__Vtiming__1(Vtb_instruction_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    VL_WRITEF_NX("========================================\nInstruction FIFO Testbench\nFIFO_DEPTH = 16\n========================================\n",0);
    vlSelf->tb_instruction_fifo__DOT__rst_n = 0U;
    vlSelf->tb_instruction_fifo__DOT__push = 0U;
    vlSelf->tb_instruction_fifo__DOT__pop = 0U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_instruction_fifo.sv", 
                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "tb/tb_instruction_fifo.sv", 
                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    VL_WRITEF_NX("\n--- Test 1: Initial state ---\n",0);
    if (VL_LIKELY((IData)(((0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)) 
                           & (0x10U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)))))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] FIFO empty after reset: empty=%b, full=%b, valid=%b\n",0,
                     1,(0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)),
                     1,(0x10U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)),
                     1,(0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)));
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:73: Assertion failed in %Ntb_instruction_fifo: [FAIL] FIFO not empty after reset: empty=%b, full=%b, valid=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     1,(0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)),
                     1,(0x10U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)),
                     1,(0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)));
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 73, "");
    }
    VL_WRITEF_NX("\n--- Test 2: Push one item ---\n",0);
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0xdeadbeefU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 0U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       82);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((((0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)) 
                    & (0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))) 
                   & (0xdeadbeefU == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                      [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr])))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pushed and read 0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:90: Assertion failed in %Ntb_instruction_fifo: [FAIL] Push failed: empty=%b, valid=%b, data=0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     1,(0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)),
                     1,(0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 90, "");
    }
    VL_WRITEF_NX("\n--- Test 3: Pop one item ---\n",0);
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       96);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__pop = 0U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       98);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((IData)((0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] FIFO empty after pop: empty=%b, valid=%b\n",0,
                     1,(0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)),
                     1,(0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)));
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:106: Assertion failed in %Ntb_instruction_fifo: [FAIL] FIFO not empty after pop: empty=%b, valid=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     1,(0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)),
                     1,(0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)));
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 106, "");
    }
    VL_WRITEF_NX("\n--- Test 4: Fill FIFO completely ---\n",0);
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x1000U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x1001U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x1002U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x1003U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x1004U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 5U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x1005U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 6U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x1006U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 7U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x1007U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 8U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x1008U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 9U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x1009U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 0xaU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x100aU;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 0xbU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x100bU;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 0xcU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x100cU;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 0xdU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x100dU;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 0xeU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x100eU;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 0xfU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       111);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x100fU;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk1__DOT__i = 0x10U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       115);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 0U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       117);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY(((0x10U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)) 
                   & (0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] FIFO full after 16 pushes: full=%b, empty=%b\n",0,
                     1,(0x10U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)),
                     1,(0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)));
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:125: Assertion failed in %Ntb_instruction_fifo: [FAIL] FIFO not full after 16 pushes: full=%b, empty=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     1,(0x10U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)),
                     1,(0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)));
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 125, "");
    }
    VL_WRITEF_NX("\n--- Test 5: Verify FIFO order (FIFO behavior) ---\n",0);
    vlSelf->tb_instruction_fifo__DOT__pop = 0U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x1000U == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 0: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 0: expected 0x00001000, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x1001U == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 1: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 1: expected 0x00001001, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x1002U == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 2: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 2: expected 0x00001002, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x1003U == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 3: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 3: expected 0x00001003, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x1004U == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 4: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 4: expected 0x00001004, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 5U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x1005U == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 5: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 5: expected 0x00001005, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 6U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x1006U == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 6: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 6: expected 0x00001006, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 7U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x1007U == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 7: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 7: expected 0x00001007, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 8U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x1008U == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 8: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 8: expected 0x00001008, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 9U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x1009U == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 9: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 9: expected 0x00001009, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 0xaU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x100aU == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 10: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 10: expected 0x0000100a, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 0xbU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x100bU == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 11: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 11: expected 0x0000100b, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 0xcU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x100cU == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 12: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 12: expected 0x0000100c, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 0xdU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x100dU == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 13: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 13: expected 0x0000100d, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 0xeU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x100eU == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 14: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 14: expected 0x0000100e, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 0xfU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x100fU == vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                   [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Pop 15: data=0x%08x\n",0,
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:139: Assertion failed in %Ntb_instruction_fifo.unnamedblk2: [FAIL] Pop 15: expected 0x0000100f, got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_instruction_fifo__DOT__dut__DOT__fifo_mem
                     [vlSelf->tb_instruction_fifo__DOT__dut__DOT__read_ptr]);
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 139, "");
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk2__DOT__i = 0x10U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__pop = 0U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       146);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] FIFO empty after draining: empty=%b\n",0,
                     1,(0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)));
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:154: Assertion failed in %Ntb_instruction_fifo: [FAIL] FIFO not empty after draining: empty=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     1,(0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)));
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 154, "");
    }
    VL_WRITEF_NX("\n--- Test 6: Simultaneous push and pop ---\n",0);
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       160);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x2000U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk3__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       160);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x2001U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk3__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       160);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x2002U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk3__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       160);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x2003U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk3__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       160);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x2004U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk3__DOT__i = 5U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       160);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x2005U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk3__DOT__i = 6U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       160);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x2006U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk3__DOT__i = 7U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       160);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x2007U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk3__DOT__i = 8U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       164);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 0U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       168);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0xaaaaaaaaU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       172);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 0U;
    vlSelf->tb_instruction_fifo__DOT__pop = 0U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       176);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY(((0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)) 
                   & (0x10U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Simultaneous push/pop: empty=%b, full=%b\n",0,
                     1,(0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)),
                     1,(0x10U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)));
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:183: Assertion failed in %Ntb_instruction_fifo: [FAIL] Simultaneous push/pop error: empty=%b, full=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     1,(0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)),
                     1,(0x10U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)));
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 183, "");
    }
    while ((0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))) {
        co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_instruction_fifo.clk)", 
                                                           "tb/tb_instruction_fifo.sv", 
                                                           188);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 0U;
    VL_WRITEF_NX("\n--- Test 7: Overflow protection ---\n",0);
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x3000U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 1U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x3001U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x3002U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x3003U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x3004U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 5U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x3005U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 6U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x3006U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 7U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x3007U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 8U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x3008U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 9U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x3009U;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 0xaU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x300aU;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 0xbU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x300bU;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 0xcU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x300cU;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 0xdU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x300dU;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 0xeU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x300eU;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 0xfU;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       196);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0x300fU;
    vlSelf->tb_instruction_fifo__DOT__unnamedblk4__DOT__i = 0x10U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       202);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 1U;
    vlSelf->tb_instruction_fifo__DOT__data_in = 0xbadbad00U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       205);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__push = 0U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       207);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0x10U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Overflow protection: FIFO still full, no corruption\n",0);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:215: Assertion failed in %Ntb_instruction_fifo: [FAIL] Overflow protection failed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 215, "");
    }
    while ((0U != (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count))) {
        co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_instruction_fifo.clk)", 
                                                           "tb/tb_instruction_fifo.sv", 
                                                           220);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    }
    vlSelf->tb_instruction_fifo__DOT__pop = 0U;
    VL_WRITEF_NX("\n--- Test 8: Underflow protection ---\n",0);
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       226);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__pop = 1U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__pop = 0U;
    co_await vlSelf->__VtrigSched_hfc7ebaab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_instruction_fifo.clk)", 
                                                       "tb/tb_instruction_fifo.sv", 
                                                       230);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_instruction_fifo__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__test_count);
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_instruction_fifo__DOT__dut__DOT__count)))) {
        vlSelf->tb_instruction_fifo__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__pass_count);
        VL_WRITEF_NX("[PASS] Underflow protection: FIFO still empty\n",0);
    } else {
        vlSelf->tb_instruction_fifo__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_instruction_fifo__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:238: Assertion failed in %Ntb_instruction_fifo: [FAIL] Underflow protection failed\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 238, "");
    }
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_instruction_fifo.sv", 
                                       242);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n========================================\nTest Summary\n========================================\nTotal Tests: %0d\nPassed:      %0d\nFailed:      %0d\n========================================\n",0,
                 32,vlSelf->tb_instruction_fifo__DOT__test_count,
                 32,vlSelf->tb_instruction_fifo__DOT__pass_count,
                 32,vlSelf->tb_instruction_fifo__DOT__fail_count);
    if (VL_LIKELY((0U == vlSelf->tb_instruction_fifo__DOT__fail_count))) {
        VL_WRITEF_NX("ALL TESTS PASSED!\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Error: tb_instruction_fifo.sv:254: Assertion failed in %Ntb_instruction_fifo: SOME TESTS FAILED!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_instruction_fifo.sv", 254, "");
    }
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_instruction_fifo.sv", 
                                       257);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb/tb_instruction_fifo.sv", 258, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_instruction_fifo___024root___dump_triggers__act(Vtb_instruction_fifo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_instruction_fifo___024root___eval_triggers__act(Vtb_instruction_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_instruction_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_fifo___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_instruction_fifo__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_instruction_fifo__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_instruction_fifo__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_instruction_fifo__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_instruction_fifo__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_instruction_fifo__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_instruction_fifo__DOT__clk__0 
        = vlSelf->tb_instruction_fifo__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_instruction_fifo__DOT__rst_n__0 
        = vlSelf->tb_instruction_fifo__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_instruction_fifo___024root___dump_triggers__act(vlSelf);
    }
#endif
}
