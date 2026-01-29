// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_register_file.h for the primary calling header

#include "Vtb_register_file__pch.h"
#include "Vtb_register_file__Syms.h"
#include "Vtb_register_file___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_register_file___024root___eval_initial__TOP__Vtiming__1(Vtb_register_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_register_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_file___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    std::string __Vtask_tb_register_file__DOT__test_rf__0__test_name;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__0__waddr;
    __Vtask_tb_register_file__DOT__test_rf__0__waddr = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__0__wdata;
    __Vtask_tb_register_file__DOT__test_rf__0__wdata = 0;
    CData/*0:0*/ __Vtask_tb_register_file__DOT__test_rf__0__wen;
    __Vtask_tb_register_file__DOT__test_rf__0__wen = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__0__raddr1;
    __Vtask_tb_register_file__DOT__test_rf__0__raddr1 = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__0__raddr2;
    __Vtask_tb_register_file__DOT__test_rf__0__raddr2 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__0__expected_rdata1;
    __Vtask_tb_register_file__DOT__test_rf__0__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__0__expected_rdata2;
    __Vtask_tb_register_file__DOT__test_rf__0__expected_rdata2 = 0;
    std::string __Vtask_tb_register_file__DOT__test_rf__1__test_name;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__1__waddr;
    __Vtask_tb_register_file__DOT__test_rf__1__waddr = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__1__wdata;
    __Vtask_tb_register_file__DOT__test_rf__1__wdata = 0;
    CData/*0:0*/ __Vtask_tb_register_file__DOT__test_rf__1__wen;
    __Vtask_tb_register_file__DOT__test_rf__1__wen = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__1__raddr1;
    __Vtask_tb_register_file__DOT__test_rf__1__raddr1 = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__1__raddr2;
    __Vtask_tb_register_file__DOT__test_rf__1__raddr2 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__1__expected_rdata1;
    __Vtask_tb_register_file__DOT__test_rf__1__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__1__expected_rdata2;
    __Vtask_tb_register_file__DOT__test_rf__1__expected_rdata2 = 0;
    std::string __Vtask_tb_register_file__DOT__test_rf__2__test_name;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__2__waddr;
    __Vtask_tb_register_file__DOT__test_rf__2__waddr = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__2__wdata;
    __Vtask_tb_register_file__DOT__test_rf__2__wdata = 0;
    CData/*0:0*/ __Vtask_tb_register_file__DOT__test_rf__2__wen;
    __Vtask_tb_register_file__DOT__test_rf__2__wen = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__2__raddr1;
    __Vtask_tb_register_file__DOT__test_rf__2__raddr1 = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__2__raddr2;
    __Vtask_tb_register_file__DOT__test_rf__2__raddr2 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__2__expected_rdata1;
    __Vtask_tb_register_file__DOT__test_rf__2__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__2__expected_rdata2;
    __Vtask_tb_register_file__DOT__test_rf__2__expected_rdata2 = 0;
    std::string __Vtask_tb_register_file__DOT__test_rf__3__test_name;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__3__waddr;
    __Vtask_tb_register_file__DOT__test_rf__3__waddr = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__3__wdata;
    __Vtask_tb_register_file__DOT__test_rf__3__wdata = 0;
    CData/*0:0*/ __Vtask_tb_register_file__DOT__test_rf__3__wen;
    __Vtask_tb_register_file__DOT__test_rf__3__wen = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__3__raddr1;
    __Vtask_tb_register_file__DOT__test_rf__3__raddr1 = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__3__raddr2;
    __Vtask_tb_register_file__DOT__test_rf__3__raddr2 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__3__expected_rdata1;
    __Vtask_tb_register_file__DOT__test_rf__3__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__3__expected_rdata2;
    __Vtask_tb_register_file__DOT__test_rf__3__expected_rdata2 = 0;
    std::string __Vtask_tb_register_file__DOT__test_rf__4__test_name;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__4__waddr;
    __Vtask_tb_register_file__DOT__test_rf__4__waddr = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__4__wdata;
    __Vtask_tb_register_file__DOT__test_rf__4__wdata = 0;
    CData/*0:0*/ __Vtask_tb_register_file__DOT__test_rf__4__wen;
    __Vtask_tb_register_file__DOT__test_rf__4__wen = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__4__raddr1;
    __Vtask_tb_register_file__DOT__test_rf__4__raddr1 = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__4__raddr2;
    __Vtask_tb_register_file__DOT__test_rf__4__raddr2 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__4__expected_rdata1;
    __Vtask_tb_register_file__DOT__test_rf__4__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__4__expected_rdata2;
    __Vtask_tb_register_file__DOT__test_rf__4__expected_rdata2 = 0;
    std::string __Vtask_tb_register_file__DOT__test_rf__5__test_name;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__5__waddr;
    __Vtask_tb_register_file__DOT__test_rf__5__waddr = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__5__wdata;
    __Vtask_tb_register_file__DOT__test_rf__5__wdata = 0;
    CData/*0:0*/ __Vtask_tb_register_file__DOT__test_rf__5__wen;
    __Vtask_tb_register_file__DOT__test_rf__5__wen = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__5__raddr1;
    __Vtask_tb_register_file__DOT__test_rf__5__raddr1 = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__5__raddr2;
    __Vtask_tb_register_file__DOT__test_rf__5__raddr2 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__5__expected_rdata1;
    __Vtask_tb_register_file__DOT__test_rf__5__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__5__expected_rdata2;
    __Vtask_tb_register_file__DOT__test_rf__5__expected_rdata2 = 0;
    std::string __Vtask_tb_register_file__DOT__test_rf__6__test_name;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__6__waddr;
    __Vtask_tb_register_file__DOT__test_rf__6__waddr = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__6__wdata;
    __Vtask_tb_register_file__DOT__test_rf__6__wdata = 0;
    CData/*0:0*/ __Vtask_tb_register_file__DOT__test_rf__6__wen;
    __Vtask_tb_register_file__DOT__test_rf__6__wen = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__6__raddr1;
    __Vtask_tb_register_file__DOT__test_rf__6__raddr1 = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__6__raddr2;
    __Vtask_tb_register_file__DOT__test_rf__6__raddr2 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__6__expected_rdata1;
    __Vtask_tb_register_file__DOT__test_rf__6__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__6__expected_rdata2;
    __Vtask_tb_register_file__DOT__test_rf__6__expected_rdata2 = 0;
    std::string __Vtask_tb_register_file__DOT__test_rf__7__test_name;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__7__waddr;
    __Vtask_tb_register_file__DOT__test_rf__7__waddr = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__7__wdata;
    __Vtask_tb_register_file__DOT__test_rf__7__wdata = 0;
    CData/*0:0*/ __Vtask_tb_register_file__DOT__test_rf__7__wen;
    __Vtask_tb_register_file__DOT__test_rf__7__wen = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__7__raddr1;
    __Vtask_tb_register_file__DOT__test_rf__7__raddr1 = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__7__raddr2;
    __Vtask_tb_register_file__DOT__test_rf__7__raddr2 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__7__expected_rdata1;
    __Vtask_tb_register_file__DOT__test_rf__7__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__7__expected_rdata2;
    __Vtask_tb_register_file__DOT__test_rf__7__expected_rdata2 = 0;
    std::string __Vtask_tb_register_file__DOT__test_rf__8__test_name;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__8__waddr;
    __Vtask_tb_register_file__DOT__test_rf__8__waddr = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__8__wdata;
    __Vtask_tb_register_file__DOT__test_rf__8__wdata = 0;
    CData/*0:0*/ __Vtask_tb_register_file__DOT__test_rf__8__wen;
    __Vtask_tb_register_file__DOT__test_rf__8__wen = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__8__raddr1;
    __Vtask_tb_register_file__DOT__test_rf__8__raddr1 = 0;
    CData/*4:0*/ __Vtask_tb_register_file__DOT__test_rf__8__raddr2;
    __Vtask_tb_register_file__DOT__test_rf__8__raddr2 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__8__expected_rdata1;
    __Vtask_tb_register_file__DOT__test_rf__8__expected_rdata1 = 0;
    IData/*31:0*/ __Vtask_tb_register_file__DOT__test_rf__8__expected_rdata2;
    __Vtask_tb_register_file__DOT__test_rf__8__expected_rdata2 = 0;
    // Body
    VL_WRITEF_NX("========================================\nRegister File Testbench\n========================================\n",0);
    vlSelf->tb_register_file__DOT__rst_n = 0U;
    vlSelf->tb_register_file__DOT__write_en = 0U;
    vlSelf->tb_register_file__DOT__write_addr = 0U;
    vlSelf->tb_register_file__DOT__write_data = 0U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0U;
    vlSelf->tb_register_file__DOT__read_addr2 = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_register_file.sv", 
                                       100);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       102);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n--- Test 1: R0 is always zero ---\n",0);
    __Vtask_tb_register_file__DOT__test_rf__0__expected_rdata2 = 0U;
    __Vtask_tb_register_file__DOT__test_rf__0__expected_rdata1 = 0U;
    __Vtask_tb_register_file__DOT__test_rf__0__raddr2 = 1U;
    __Vtask_tb_register_file__DOT__test_rf__0__raddr1 = 0U;
    __Vtask_tb_register_file__DOT__test_rf__0__wen = 1U;
    __Vtask_tb_register_file__DOT__test_rf__0__wdata = 0xdeadbeefU;
    __Vtask_tb_register_file__DOT__test_rf__0__waddr = 0U;
    __Vtask_tb_register_file__DOT__test_rf__0__test_name = 
        std::string{"Write to R0 (should fail)"};
    vlSelf->tb_register_file__DOT__test_count = ((IData)(1U) 
                                                 + vlSelf->tb_register_file__DOT__test_count);
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       61);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = __Vtask_tb_register_file__DOT__test_rf__0__waddr;
    vlSelf->tb_register_file__DOT__write_data = __Vtask_tb_register_file__DOT__test_rf__0__wdata;
    vlSelf->tb_register_file__DOT__write_en = __Vtask_tb_register_file__DOT__test_rf__0__wen;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_en = 0U;
    vlSelf->tb_register_file__DOT__read_addr1 = __Vtask_tb_register_file__DOT__test_rf__0__raddr1;
    vlSelf->tb_register_file__DOT__read_addr2 = __Vtask_tb_register_file__DOT__test_rf__0__raddr2;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       73);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_register_file__DOT__read_data1 
                    == __Vtask_tb_register_file__DOT__test_rf__0__expected_rdata1) 
                   & (vlSelf->tb_register_file__DOT__read_data2 
                      == __Vtask_tb_register_file__DOT__test_rf__0__expected_rdata2)))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: R%0#=0x%08x, R%0#=0x%08x\n",0,
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__0__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__0__raddr1),
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__0__raddr2),
                     32,vlSelf->tb_register_file__DOT__read_data2);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:81: Assertion failed in %Ntb_register_file.test_rf: [FAIL] %@: R%0# expected 0x%08x got 0x%08x, R%0# expected 0x%08x got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__0__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__0__raddr1),
                     32,__Vtask_tb_register_file__DOT__test_rf__0__expected_rdata1,
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__0__raddr2),
                     32,__Vtask_tb_register_file__DOT__test_rf__0__expected_rdata2,
                     32,vlSelf->tb_register_file__DOT__read_data2);
        VL_STOP_MT("tb/tb_register_file.sv", 81, "");
    }
    __Vtask_tb_register_file__DOT__test_rf__1__expected_rdata2 = 0U;
    __Vtask_tb_register_file__DOT__test_rf__1__expected_rdata1 = 0U;
    __Vtask_tb_register_file__DOT__test_rf__1__raddr2 = 0U;
    __Vtask_tb_register_file__DOT__test_rf__1__raddr1 = 0U;
    __Vtask_tb_register_file__DOT__test_rf__1__wen = 0U;
    __Vtask_tb_register_file__DOT__test_rf__1__wdata = 0U;
    __Vtask_tb_register_file__DOT__test_rf__1__waddr = 0U;
    __Vtask_tb_register_file__DOT__test_rf__1__test_name = 
        std::string{"Read R0 after reset"};
    vlSelf->tb_register_file__DOT__test_count = ((IData)(1U) 
                                                 + vlSelf->tb_register_file__DOT__test_count);
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       61);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = __Vtask_tb_register_file__DOT__test_rf__1__waddr;
    vlSelf->tb_register_file__DOT__write_data = __Vtask_tb_register_file__DOT__test_rf__1__wdata;
    vlSelf->tb_register_file__DOT__write_en = __Vtask_tb_register_file__DOT__test_rf__1__wen;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_en = 0U;
    vlSelf->tb_register_file__DOT__read_addr1 = __Vtask_tb_register_file__DOT__test_rf__1__raddr1;
    vlSelf->tb_register_file__DOT__read_addr2 = __Vtask_tb_register_file__DOT__test_rf__1__raddr2;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       73);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_register_file__DOT__read_data1 
                    == __Vtask_tb_register_file__DOT__test_rf__1__expected_rdata1) 
                   & (vlSelf->tb_register_file__DOT__read_data2 
                      == __Vtask_tb_register_file__DOT__test_rf__1__expected_rdata2)))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: R%0#=0x%08x, R%0#=0x%08x\n",0,
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__1__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__1__raddr1),
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__1__raddr2),
                     32,vlSelf->tb_register_file__DOT__read_data2);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:81: Assertion failed in %Ntb_register_file.test_rf: [FAIL] %@: R%0# expected 0x%08x got 0x%08x, R%0# expected 0x%08x got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__1__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__1__raddr1),
                     32,__Vtask_tb_register_file__DOT__test_rf__1__expected_rdata1,
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__1__raddr2),
                     32,__Vtask_tb_register_file__DOT__test_rf__1__expected_rdata2,
                     32,vlSelf->tb_register_file__DOT__read_data2);
        VL_STOP_MT("tb/tb_register_file.sv", 81, "");
    }
    VL_WRITEF_NX("\n--- Test 2: Write and read back ---\n",0);
    __Vtask_tb_register_file__DOT__test_rf__2__expected_rdata2 = 0U;
    __Vtask_tb_register_file__DOT__test_rf__2__expected_rdata1 = 0x12345678U;
    __Vtask_tb_register_file__DOT__test_rf__2__raddr2 = 0U;
    __Vtask_tb_register_file__DOT__test_rf__2__raddr1 = 1U;
    __Vtask_tb_register_file__DOT__test_rf__2__wen = 1U;
    __Vtask_tb_register_file__DOT__test_rf__2__wdata = 0x12345678U;
    __Vtask_tb_register_file__DOT__test_rf__2__waddr = 1U;
    __Vtask_tb_register_file__DOT__test_rf__2__test_name = 
        std::string{"Write R1=0x12345678"};
    vlSelf->tb_register_file__DOT__test_count = ((IData)(1U) 
                                                 + vlSelf->tb_register_file__DOT__test_count);
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       61);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = __Vtask_tb_register_file__DOT__test_rf__2__waddr;
    vlSelf->tb_register_file__DOT__write_data = __Vtask_tb_register_file__DOT__test_rf__2__wdata;
    vlSelf->tb_register_file__DOT__write_en = __Vtask_tb_register_file__DOT__test_rf__2__wen;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_en = 0U;
    vlSelf->tb_register_file__DOT__read_addr1 = __Vtask_tb_register_file__DOT__test_rf__2__raddr1;
    vlSelf->tb_register_file__DOT__read_addr2 = __Vtask_tb_register_file__DOT__test_rf__2__raddr2;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       73);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_register_file__DOT__read_data1 
                    == __Vtask_tb_register_file__DOT__test_rf__2__expected_rdata1) 
                   & (vlSelf->tb_register_file__DOT__read_data2 
                      == __Vtask_tb_register_file__DOT__test_rf__2__expected_rdata2)))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: R%0#=0x%08x, R%0#=0x%08x\n",0,
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__2__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__2__raddr1),
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__2__raddr2),
                     32,vlSelf->tb_register_file__DOT__read_data2);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:81: Assertion failed in %Ntb_register_file.test_rf: [FAIL] %@: R%0# expected 0x%08x got 0x%08x, R%0# expected 0x%08x got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__2__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__2__raddr1),
                     32,__Vtask_tb_register_file__DOT__test_rf__2__expected_rdata1,
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__2__raddr2),
                     32,__Vtask_tb_register_file__DOT__test_rf__2__expected_rdata2,
                     32,vlSelf->tb_register_file__DOT__read_data2);
        VL_STOP_MT("tb/tb_register_file.sv", 81, "");
    }
    __Vtask_tb_register_file__DOT__test_rf__3__expected_rdata2 = 0x12345678U;
    __Vtask_tb_register_file__DOT__test_rf__3__expected_rdata1 = 0xabcdef00U;
    __Vtask_tb_register_file__DOT__test_rf__3__raddr2 = 1U;
    __Vtask_tb_register_file__DOT__test_rf__3__raddr1 = 2U;
    __Vtask_tb_register_file__DOT__test_rf__3__wen = 1U;
    __Vtask_tb_register_file__DOT__test_rf__3__wdata = 0xabcdef00U;
    __Vtask_tb_register_file__DOT__test_rf__3__waddr = 2U;
    __Vtask_tb_register_file__DOT__test_rf__3__test_name = 
        std::string{"Write R2=0xABCDEF00"};
    vlSelf->tb_register_file__DOT__test_count = ((IData)(1U) 
                                                 + vlSelf->tb_register_file__DOT__test_count);
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       61);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = __Vtask_tb_register_file__DOT__test_rf__3__waddr;
    vlSelf->tb_register_file__DOT__write_data = __Vtask_tb_register_file__DOT__test_rf__3__wdata;
    vlSelf->tb_register_file__DOT__write_en = __Vtask_tb_register_file__DOT__test_rf__3__wen;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_en = 0U;
    vlSelf->tb_register_file__DOT__read_addr1 = __Vtask_tb_register_file__DOT__test_rf__3__raddr1;
    vlSelf->tb_register_file__DOT__read_addr2 = __Vtask_tb_register_file__DOT__test_rf__3__raddr2;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       73);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_register_file__DOT__read_data1 
                    == __Vtask_tb_register_file__DOT__test_rf__3__expected_rdata1) 
                   & (vlSelf->tb_register_file__DOT__read_data2 
                      == __Vtask_tb_register_file__DOT__test_rf__3__expected_rdata2)))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: R%0#=0x%08x, R%0#=0x%08x\n",0,
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__3__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__3__raddr1),
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__3__raddr2),
                     32,vlSelf->tb_register_file__DOT__read_data2);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:81: Assertion failed in %Ntb_register_file.test_rf: [FAIL] %@: R%0# expected 0x%08x got 0x%08x, R%0# expected 0x%08x got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__3__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__3__raddr1),
                     32,__Vtask_tb_register_file__DOT__test_rf__3__expected_rdata1,
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__3__raddr2),
                     32,__Vtask_tb_register_file__DOT__test_rf__3__expected_rdata2,
                     32,vlSelf->tb_register_file__DOT__read_data2);
        VL_STOP_MT("tb/tb_register_file.sv", 81, "");
    }
    __Vtask_tb_register_file__DOT__test_rf__4__expected_rdata2 = 0xabcdef00U;
    __Vtask_tb_register_file__DOT__test_rf__4__expected_rdata1 = 0xffffffffU;
    __Vtask_tb_register_file__DOT__test_rf__4__raddr2 = 2U;
    __Vtask_tb_register_file__DOT__test_rf__4__raddr1 = 0x1fU;
    __Vtask_tb_register_file__DOT__test_rf__4__wen = 1U;
    __Vtask_tb_register_file__DOT__test_rf__4__wdata = 0xffffffffU;
    __Vtask_tb_register_file__DOT__test_rf__4__waddr = 0x1fU;
    __Vtask_tb_register_file__DOT__test_rf__4__test_name = 
        std::string{"Write R31=0xFFFFFFFF"};
    vlSelf->tb_register_file__DOT__test_count = ((IData)(1U) 
                                                 + vlSelf->tb_register_file__DOT__test_count);
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       61);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = __Vtask_tb_register_file__DOT__test_rf__4__waddr;
    vlSelf->tb_register_file__DOT__write_data = __Vtask_tb_register_file__DOT__test_rf__4__wdata;
    vlSelf->tb_register_file__DOT__write_en = __Vtask_tb_register_file__DOT__test_rf__4__wen;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_en = 0U;
    vlSelf->tb_register_file__DOT__read_addr1 = __Vtask_tb_register_file__DOT__test_rf__4__raddr1;
    vlSelf->tb_register_file__DOT__read_addr2 = __Vtask_tb_register_file__DOT__test_rf__4__raddr2;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       73);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_register_file__DOT__read_data1 
                    == __Vtask_tb_register_file__DOT__test_rf__4__expected_rdata1) 
                   & (vlSelf->tb_register_file__DOT__read_data2 
                      == __Vtask_tb_register_file__DOT__test_rf__4__expected_rdata2)))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: R%0#=0x%08x, R%0#=0x%08x\n",0,
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__4__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__4__raddr1),
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__4__raddr2),
                     32,vlSelf->tb_register_file__DOT__read_data2);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:81: Assertion failed in %Ntb_register_file.test_rf: [FAIL] %@: R%0# expected 0x%08x got 0x%08x, R%0# expected 0x%08x got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__4__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__4__raddr1),
                     32,__Vtask_tb_register_file__DOT__test_rf__4__expected_rdata1,
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__4__raddr2),
                     32,__Vtask_tb_register_file__DOT__test_rf__4__expected_rdata2,
                     32,vlSelf->tb_register_file__DOT__read_data2);
        VL_STOP_MT("tb/tb_register_file.sv", 81, "");
    }
    VL_WRITEF_NX("\n--- Test 3: Dual-port read ---\n",0);
    __Vtask_tb_register_file__DOT__test_rf__5__expected_rdata2 = 0xabcdef00U;
    __Vtask_tb_register_file__DOT__test_rf__5__expected_rdata1 = 0x12345678U;
    __Vtask_tb_register_file__DOT__test_rf__5__raddr2 = 2U;
    __Vtask_tb_register_file__DOT__test_rf__5__raddr1 = 1U;
    __Vtask_tb_register_file__DOT__test_rf__5__wen = 0U;
    __Vtask_tb_register_file__DOT__test_rf__5__wdata = 0U;
    __Vtask_tb_register_file__DOT__test_rf__5__waddr = 0U;
    __Vtask_tb_register_file__DOT__test_rf__5__test_name = 
        std::string{"Read R1 and R2 simultaneously"};
    vlSelf->tb_register_file__DOT__test_count = ((IData)(1U) 
                                                 + vlSelf->tb_register_file__DOT__test_count);
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       61);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = __Vtask_tb_register_file__DOT__test_rf__5__waddr;
    vlSelf->tb_register_file__DOT__write_data = __Vtask_tb_register_file__DOT__test_rf__5__wdata;
    vlSelf->tb_register_file__DOT__write_en = __Vtask_tb_register_file__DOT__test_rf__5__wen;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_en = 0U;
    vlSelf->tb_register_file__DOT__read_addr1 = __Vtask_tb_register_file__DOT__test_rf__5__raddr1;
    vlSelf->tb_register_file__DOT__read_addr2 = __Vtask_tb_register_file__DOT__test_rf__5__raddr2;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       73);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_register_file__DOT__read_data1 
                    == __Vtask_tb_register_file__DOT__test_rf__5__expected_rdata1) 
                   & (vlSelf->tb_register_file__DOT__read_data2 
                      == __Vtask_tb_register_file__DOT__test_rf__5__expected_rdata2)))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: R%0#=0x%08x, R%0#=0x%08x\n",0,
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__5__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__5__raddr1),
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__5__raddr2),
                     32,vlSelf->tb_register_file__DOT__read_data2);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:81: Assertion failed in %Ntb_register_file.test_rf: [FAIL] %@: R%0# expected 0x%08x got 0x%08x, R%0# expected 0x%08x got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__5__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__5__raddr1),
                     32,__Vtask_tb_register_file__DOT__test_rf__5__expected_rdata1,
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__5__raddr2),
                     32,__Vtask_tb_register_file__DOT__test_rf__5__expected_rdata2,
                     32,vlSelf->tb_register_file__DOT__read_data2);
        VL_STOP_MT("tb/tb_register_file.sv", 81, "");
    }
    __Vtask_tb_register_file__DOT__test_rf__6__expected_rdata2 = 0xffffffffU;
    __Vtask_tb_register_file__DOT__test_rf__6__expected_rdata1 = 0xabcdef00U;
    __Vtask_tb_register_file__DOT__test_rf__6__raddr2 = 0x1fU;
    __Vtask_tb_register_file__DOT__test_rf__6__raddr1 = 2U;
    __Vtask_tb_register_file__DOT__test_rf__6__wen = 0U;
    __Vtask_tb_register_file__DOT__test_rf__6__wdata = 0U;
    __Vtask_tb_register_file__DOT__test_rf__6__waddr = 0U;
    __Vtask_tb_register_file__DOT__test_rf__6__test_name = 
        std::string{"Read R2 and R31 simultaneously"};
    vlSelf->tb_register_file__DOT__test_count = ((IData)(1U) 
                                                 + vlSelf->tb_register_file__DOT__test_count);
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       61);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = __Vtask_tb_register_file__DOT__test_rf__6__waddr;
    vlSelf->tb_register_file__DOT__write_data = __Vtask_tb_register_file__DOT__test_rf__6__wdata;
    vlSelf->tb_register_file__DOT__write_en = __Vtask_tb_register_file__DOT__test_rf__6__wen;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_en = 0U;
    vlSelf->tb_register_file__DOT__read_addr1 = __Vtask_tb_register_file__DOT__test_rf__6__raddr1;
    vlSelf->tb_register_file__DOT__read_addr2 = __Vtask_tb_register_file__DOT__test_rf__6__raddr2;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       73);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_register_file__DOT__read_data1 
                    == __Vtask_tb_register_file__DOT__test_rf__6__expected_rdata1) 
                   & (vlSelf->tb_register_file__DOT__read_data2 
                      == __Vtask_tb_register_file__DOT__test_rf__6__expected_rdata2)))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: R%0#=0x%08x, R%0#=0x%08x\n",0,
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__6__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__6__raddr1),
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__6__raddr2),
                     32,vlSelf->tb_register_file__DOT__read_data2);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:81: Assertion failed in %Ntb_register_file.test_rf: [FAIL] %@: R%0# expected 0x%08x got 0x%08x, R%0# expected 0x%08x got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__6__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__6__raddr1),
                     32,__Vtask_tb_register_file__DOT__test_rf__6__expected_rdata1,
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__6__raddr2),
                     32,__Vtask_tb_register_file__DOT__test_rf__6__expected_rdata2,
                     32,vlSelf->tb_register_file__DOT__read_data2);
        VL_STOP_MT("tb/tb_register_file.sv", 81, "");
    }
    VL_WRITEF_NX("\n--- Test 4: Overwrite registers ---\n",0);
    __Vtask_tb_register_file__DOT__test_rf__7__expected_rdata2 = 0xabcdef00U;
    __Vtask_tb_register_file__DOT__test_rf__7__expected_rdata1 = 0x11111111U;
    __Vtask_tb_register_file__DOT__test_rf__7__raddr2 = 2U;
    __Vtask_tb_register_file__DOT__test_rf__7__raddr1 = 1U;
    __Vtask_tb_register_file__DOT__test_rf__7__wen = 1U;
    __Vtask_tb_register_file__DOT__test_rf__7__wdata = 0x11111111U;
    __Vtask_tb_register_file__DOT__test_rf__7__waddr = 1U;
    __Vtask_tb_register_file__DOT__test_rf__7__test_name = 
        std::string{"Overwrite R1=0x11111111"};
    vlSelf->tb_register_file__DOT__test_count = ((IData)(1U) 
                                                 + vlSelf->tb_register_file__DOT__test_count);
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       61);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = __Vtask_tb_register_file__DOT__test_rf__7__waddr;
    vlSelf->tb_register_file__DOT__write_data = __Vtask_tb_register_file__DOT__test_rf__7__wdata;
    vlSelf->tb_register_file__DOT__write_en = __Vtask_tb_register_file__DOT__test_rf__7__wen;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_en = 0U;
    vlSelf->tb_register_file__DOT__read_addr1 = __Vtask_tb_register_file__DOT__test_rf__7__raddr1;
    vlSelf->tb_register_file__DOT__read_addr2 = __Vtask_tb_register_file__DOT__test_rf__7__raddr2;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       73);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_register_file__DOT__read_data1 
                    == __Vtask_tb_register_file__DOT__test_rf__7__expected_rdata1) 
                   & (vlSelf->tb_register_file__DOT__read_data2 
                      == __Vtask_tb_register_file__DOT__test_rf__7__expected_rdata2)))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: R%0#=0x%08x, R%0#=0x%08x\n",0,
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__7__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__7__raddr1),
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__7__raddr2),
                     32,vlSelf->tb_register_file__DOT__read_data2);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:81: Assertion failed in %Ntb_register_file.test_rf: [FAIL] %@: R%0# expected 0x%08x got 0x%08x, R%0# expected 0x%08x got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__7__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__7__raddr1),
                     32,__Vtask_tb_register_file__DOT__test_rf__7__expected_rdata1,
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__7__raddr2),
                     32,__Vtask_tb_register_file__DOT__test_rf__7__expected_rdata2,
                     32,vlSelf->tb_register_file__DOT__read_data2);
        VL_STOP_MT("tb/tb_register_file.sv", 81, "");
    }
    __Vtask_tb_register_file__DOT__test_rf__8__expected_rdata2 = 0x11111111U;
    __Vtask_tb_register_file__DOT__test_rf__8__expected_rdata1 = 0x22222222U;
    __Vtask_tb_register_file__DOT__test_rf__8__raddr2 = 1U;
    __Vtask_tb_register_file__DOT__test_rf__8__raddr1 = 2U;
    __Vtask_tb_register_file__DOT__test_rf__8__wen = 1U;
    __Vtask_tb_register_file__DOT__test_rf__8__wdata = 0x22222222U;
    __Vtask_tb_register_file__DOT__test_rf__8__waddr = 2U;
    __Vtask_tb_register_file__DOT__test_rf__8__test_name = 
        std::string{"Overwrite R2=0x22222222"};
    vlSelf->tb_register_file__DOT__test_count = ((IData)(1U) 
                                                 + vlSelf->tb_register_file__DOT__test_count);
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       61);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = __Vtask_tb_register_file__DOT__test_rf__8__waddr;
    vlSelf->tb_register_file__DOT__write_data = __Vtask_tb_register_file__DOT__test_rf__8__wdata;
    vlSelf->tb_register_file__DOT__write_en = __Vtask_tb_register_file__DOT__test_rf__8__wen;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       67);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_en = 0U;
    vlSelf->tb_register_file__DOT__read_addr1 = __Vtask_tb_register_file__DOT__test_rf__8__raddr1;
    vlSelf->tb_register_file__DOT__read_addr2 = __Vtask_tb_register_file__DOT__test_rf__8__raddr2;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       73);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(((vlSelf->tb_register_file__DOT__read_data1 
                    == __Vtask_tb_register_file__DOT__test_rf__8__expected_rdata1) 
                   & (vlSelf->tb_register_file__DOT__read_data2 
                      == __Vtask_tb_register_file__DOT__test_rf__8__expected_rdata2)))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        VL_WRITEF_NX("[PASS] %@: R%0#=0x%08x, R%0#=0x%08x\n",0,
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__8__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__8__raddr1),
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__8__raddr2),
                     32,vlSelf->tb_register_file__DOT__read_data2);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:81: Assertion failed in %Ntb_register_file.test_rf: [FAIL] %@: R%0# expected 0x%08x got 0x%08x, R%0# expected 0x%08x got 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     -1,&(__Vtask_tb_register_file__DOT__test_rf__8__test_name),
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__8__raddr1),
                     32,__Vtask_tb_register_file__DOT__test_rf__8__expected_rdata1,
                     32,vlSelf->tb_register_file__DOT__read_data1,
                     5,(IData)(__Vtask_tb_register_file__DOT__test_rf__8__raddr2),
                     32,__Vtask_tb_register_file__DOT__test_rf__8__expected_rdata2,
                     32,vlSelf->tb_register_file__DOT__read_data2);
        VL_STOP_MT("tb/tb_register_file.sv", 81, "");
    }
    VL_WRITEF_NX("\n--- Test 5: Write to all registers ---\n",0);
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 1U;
    vlSelf->tb_register_file__DOT__write_data = 0x64U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 2U;
    vlSelf->tb_register_file__DOT__write_data = 0xc8U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 3U;
    vlSelf->tb_register_file__DOT__write_data = 0x12cU;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 4U;
    vlSelf->tb_register_file__DOT__write_data = 0x190U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 5U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 5U;
    vlSelf->tb_register_file__DOT__write_data = 0x1f4U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 6U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 6U;
    vlSelf->tb_register_file__DOT__write_data = 0x258U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 7U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 7U;
    vlSelf->tb_register_file__DOT__write_data = 0x2bcU;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 8U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 8U;
    vlSelf->tb_register_file__DOT__write_data = 0x320U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 9U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 9U;
    vlSelf->tb_register_file__DOT__write_data = 0x384U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0xaU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0xaU;
    vlSelf->tb_register_file__DOT__write_data = 0x3e8U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0xbU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0xbU;
    vlSelf->tb_register_file__DOT__write_data = 0x44cU;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0xcU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0xcU;
    vlSelf->tb_register_file__DOT__write_data = 0x4b0U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0xdU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0xdU;
    vlSelf->tb_register_file__DOT__write_data = 0x514U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0xeU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0xeU;
    vlSelf->tb_register_file__DOT__write_data = 0x578U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0xfU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0xfU;
    vlSelf->tb_register_file__DOT__write_data = 0x5dcU;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x10U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x10U;
    vlSelf->tb_register_file__DOT__write_data = 0x640U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x11U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x11U;
    vlSelf->tb_register_file__DOT__write_data = 0x6a4U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x12U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x12U;
    vlSelf->tb_register_file__DOT__write_data = 0x708U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x13U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x13U;
    vlSelf->tb_register_file__DOT__write_data = 0x76cU;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x14U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x14U;
    vlSelf->tb_register_file__DOT__write_data = 0x7d0U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x15U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x15U;
    vlSelf->tb_register_file__DOT__write_data = 0x834U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x16U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x16U;
    vlSelf->tb_register_file__DOT__write_data = 0x898U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x17U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x17U;
    vlSelf->tb_register_file__DOT__write_data = 0x8fcU;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x18U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x18U;
    vlSelf->tb_register_file__DOT__write_data = 0x960U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x19U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x19U;
    vlSelf->tb_register_file__DOT__write_data = 0x9c4U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x1aU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x1aU;
    vlSelf->tb_register_file__DOT__write_data = 0xa28U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x1bU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x1bU;
    vlSelf->tb_register_file__DOT__write_data = 0xa8cU;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x1cU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x1cU;
    vlSelf->tb_register_file__DOT__write_data = 0xaf0U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x1dU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x1dU;
    vlSelf->tb_register_file__DOT__write_data = 0xb54U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x1eU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x1eU;
    vlSelf->tb_register_file__DOT__write_data = 0xbb8U;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x1fU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       123);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_addr = 0x1fU;
    vlSelf->tb_register_file__DOT__write_data = 0xc1cU;
    vlSelf->tb_register_file__DOT__write_en = 1U;
    vlSelf->tb_register_file__DOT__unnamedblk1__DOT__i = 0x20U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       128);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__write_en = 0U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 1U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x64U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R1: expected 100, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 2U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 2U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0xc8U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R2: expected 200, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 3U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 3U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x12cU == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R3: expected 300, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 4U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 4U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x190U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R4: expected 400, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 5U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 5U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x1f4U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R5: expected 500, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 6U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 6U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x258U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R6: expected 600, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 7U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 7U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x2bcU == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R7: expected 700, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 8U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 8U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x320U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R8: expected 800, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 9U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 9U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x384U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R9: expected 900, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0xaU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0xaU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x3e8U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R10: expected 1000, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0xbU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0xbU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x44cU == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R11: expected 1100, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0xcU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0xcU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x4b0U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R12: expected 1200, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0xdU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0xdU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x514U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R13: expected 1300, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0xeU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0xeU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x578U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R14: expected 1400, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0xfU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0xfU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x5dcU == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R15: expected 1500, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x10U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x10U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x640U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R16: expected 1600, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x11U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x11U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x6a4U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R17: expected 1700, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x12U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x12U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x708U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R18: expected 1800, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x13U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x13U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x76cU == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R19: expected 1900, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x14U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x14U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x7d0U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R20: expected 2000, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x15U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x15U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x834U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R21: expected 2100, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x16U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x16U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x898U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R22: expected 2200, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x17U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x17U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x8fcU == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R23: expected 2300, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x18U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x18U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x960U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R24: expected 2400, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x19U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x19U;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0x9c4U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R25: expected 2500, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x1aU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x1aU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0xa28U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R26: expected 2600, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x1bU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x1bU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0xa8cU == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R27: expected 2700, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x1cU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x1cU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0xaf0U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R28: expected 2800, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x1dU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x1dU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0xb54U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R29: expected 2900, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x1eU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x1eU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0xbb8U == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R30: expected 3000, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x1fU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       133);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_register_file__DOT__read_addr1 = 0x1fU;
    co_await vlSelf->__VtrigSched_h95e0c51c__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_register_file.clk)", 
                                                       "tb/tb_register_file.sv", 
                                                       135);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "tb/tb_register_file.sv", 
                                       136);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY((0xc1cU == vlSelf->tb_register_file__DOT__read_data1))) {
        vlSelf->tb_register_file__DOT__pass_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__pass_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
    } else {
        vlSelf->tb_register_file__DOT__fail_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__fail_count);
        vlSelf->tb_register_file__DOT__test_count = 
            ((IData)(1U) + vlSelf->tb_register_file__DOT__test_count);
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:143: Assertion failed in %Ntb_register_file.unnamedblk2: [FAIL] R31: expected 3100, got %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelf->tb_register_file__DOT__read_data1);
        VL_STOP_MT("tb/tb_register_file.sv", 143, "");
    }
    vlSelf->tb_register_file__DOT__unnamedblk2__DOT__i = 0x20U;
    VL_WRITEF_NX("[INFO] Verified all 31 registers (R1-R31)\n",0);
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_register_file.sv", 
                                       149);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n========================================\nTest Summary\n========================================\nTotal Tests: %0d\nPassed:      %0d\nFailed:      %0d\n========================================\n",0,
                 32,vlSelf->tb_register_file__DOT__test_count,
                 32,vlSelf->tb_register_file__DOT__pass_count,
                 32,vlSelf->tb_register_file__DOT__fail_count);
    if (VL_LIKELY((0U == vlSelf->tb_register_file__DOT__fail_count))) {
        VL_WRITEF_NX("ALL TESTS PASSED!\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Error: tb_register_file.sv:161: Assertion failed in %Ntb_register_file: SOME TESTS FAILED!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_register_file.sv", 161, "");
    }
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_register_file.sv", 
                                       164);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb/tb_register_file.sv", 165, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_register_file___024root___dump_triggers__act(Vtb_register_file___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_register_file___024root___eval_triggers__act(Vtb_register_file___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_register_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_register_file___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_register_file__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_register_file__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_register_file__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_register_file__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_register_file__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_register_file__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_register_file__DOT__clk__0 
        = vlSelf->tb_register_file__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_register_file__DOT__rst_n__0 
        = vlSelf->tb_register_file__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_register_file___024root___dump_triggers__act(vlSelf);
    }
#endif
}
