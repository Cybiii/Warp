// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_warp_integration.h for the primary calling header

#include "Vtb_warp_integration__pch.h"
#include "Vtb_warp_integration__Syms.h"
#include "Vtb_warp_integration___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_warp_integration___024root___eval_initial__TOP__Vtiming__1(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    CData/*6:0*/ __Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__funct;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__funct = 0;
    IData/*31:0*/ __Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__rs1_data;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__rs1_data = 0;
    IData/*31:0*/ __Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__rs2_data;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__rs2_data = 0;
    std::string __Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__cmd_name;
    CData/*6:0*/ __Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__funct;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__funct = 0;
    IData/*31:0*/ __Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__rs1_data;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__rs1_data = 0;
    IData/*31:0*/ __Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__rs2_data;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__rs2_data = 0;
    std::string __Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__cmd_name;
    CData/*6:0*/ __Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__funct;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__funct = 0;
    IData/*31:0*/ __Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__rs1_data;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__rs1_data = 0;
    IData/*31:0*/ __Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__rs2_data;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__rs2_data = 0;
    std::string __Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__cmd_name;
    CData/*6:0*/ __Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__funct;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__funct = 0;
    IData/*31:0*/ __Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__rs1_data;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__rs1_data = 0;
    IData/*31:0*/ __Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__rs2_data;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__rs2_data = 0;
    std::string __Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__cmd_name;
    // Body
    VL_WRITEF_NX("========================================\nWarp Engine Integration Test\n========================================\n",0);
    vlSelf->tb_warp_integration__DOT__rst_n = 0U;
    vlSelf->tb_warp_integration__DOT__cmd_valid = 0U;
    vlSelf->tb_warp_integration__DOT__cmd_funct = 0U;
    vlSelf->tb_warp_integration__DOT__cmd_rs1_data = 0U;
    vlSelf->tb_warp_integration__DOT__cmd_rs2_data = 0U;
    vlSelf->tb_warp_integration__DOT__resp_ready = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_warp_integration.sv", 
                                       235);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_warp_integration__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "tb/tb_warp_integration.sv", 
                                       237);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n--- Test 1: Get Status (First) ---\n",0);
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__cmd_name = 
        std::string{"GET_STATUS"};
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__rs2_data = 0U;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__rs1_data = 0U;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__funct = 2U;
    {
        vlSelf->tb_warp_integration__DOT__resp_ready = 0U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           145);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__cmd_valid = 1U;
        vlSelf->tb_warp_integration__DOT__cmd_funct 
            = __Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__funct;
        vlSelf->tb_warp_integration__DOT__cmd_rs1_data 
            = __Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__rs1_data;
        vlSelf->tb_warp_integration__DOT__cmd_rs2_data 
            = __Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__rs2_data;
        vlSelf->tb_warp_integration__DOT__cmd_rd = 1U;
        VL_WRITEF_NX("[CMD] Sending %@: rs1=0x%08x, rs2=0x%08x\n",0,
                     -1,&(__Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__cmd_name),
                     32,__Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__rs1_data,
                     32,__Vtask_tb_warp_integration__DOT__send_rocc_cmd__0__rs2_data);
        vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout = 0U;
        while (((~ (IData)(vlSelf->tb_warp_integration__DOT__cmd_ready)) 
                & VL_GTS_III(32, 0x64U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_warp_integration.clk)", 
                                                               "tb/tb_warp_integration.sv", 
                                                               157);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout 
                = ((IData)(1U) + vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x64U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_warp_integration.sv:161: Assertion failed in %Ntb_warp_integration.send_rocc_cmd: [ERROR] Timeout waiting for cmd_ready!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/tb_warp_integration.sv", 161, "");
            goto __Vlabel1;
        }
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           165);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__cmd_valid = 0U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           169);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           170);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__resp_ready = 1U;
        vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout = 0U;
        while (((~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r)) 
                & VL_GTS_III(32, 0x2710U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_warp_integration.clk)", 
                                                               "tb/tb_warp_integration.sv", 
                                                               176);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout 
                = ((IData)(1U) + vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
            if (VL_UNLIKELY((0U == VL_MODDIVS_III(32, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout, (IData)(0x3e8U))))) {
                VL_WRITEF_NX("[DEBUG] Waiting for resp_valid... (%0d cycles)\n",0,
                             32,vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
            }
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x2710U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_warp_integration.sv:184: Assertion failed in %Ntb_warp_integration.send_rocc_cmd: [ERROR] Timeout waiting for resp_valid!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/tb_warp_integration.sv", 184, "");
            goto __Vlabel1;
        }
        VL_WRITEF_NX("[RESP] Received response: data=0x%08x (after %0d cycles)\n",0,
                     32,vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r,
                     32,vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           189);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__resp_ready = 0U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           193);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           194);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vlabel1: ;
    }
    vlSelf->tb_warp_integration__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_warp_integration__DOT__test_count);
    VL_WRITEF_NX("[DEBUG] Status bits: idle=%b, exec=%b, done=%b, error=%b\n",0,
                 1,(1U & vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r),
                 1,(1U & (vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r 
                          >> 1U)),1,(1U & (vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r 
                                           >> 2U)),
                 1,(1U & (vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r 
                          >> 3U)));
    if ((1U & vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r)) {
        vlSelf->tb_warp_integration__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_warp_integration__DOT__pass_count);
    } else {
        vlSelf->tb_warp_integration__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_warp_integration__DOT__fail_count);
    }
    VL_WRITEF_NX("\n--- Test 2: Set Warp Mask ---\n",0);
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__cmd_name = 
        std::string{"SET_MASK (all lanes)"};
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__rs2_data = 0U;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__rs1_data = 0xffU;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__funct = 1U;
    {
        vlSelf->tb_warp_integration__DOT__resp_ready = 0U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           145);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__cmd_valid = 1U;
        vlSelf->tb_warp_integration__DOT__cmd_funct 
            = __Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__funct;
        vlSelf->tb_warp_integration__DOT__cmd_rs1_data 
            = __Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__rs1_data;
        vlSelf->tb_warp_integration__DOT__cmd_rs2_data 
            = __Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__rs2_data;
        vlSelf->tb_warp_integration__DOT__cmd_rd = 1U;
        VL_WRITEF_NX("[CMD] Sending %@: rs1=0x%08x, rs2=0x%08x\n",0,
                     -1,&(__Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__cmd_name),
                     32,__Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__rs1_data,
                     32,__Vtask_tb_warp_integration__DOT__send_rocc_cmd__1__rs2_data);
        vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout = 0U;
        while (((~ (IData)(vlSelf->tb_warp_integration__DOT__cmd_ready)) 
                & VL_GTS_III(32, 0x64U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_warp_integration.clk)", 
                                                               "tb/tb_warp_integration.sv", 
                                                               157);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout 
                = ((IData)(1U) + vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x64U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_warp_integration.sv:161: Assertion failed in %Ntb_warp_integration.send_rocc_cmd: [ERROR] Timeout waiting for cmd_ready!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/tb_warp_integration.sv", 161, "");
            goto __Vlabel2;
        }
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           165);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__cmd_valid = 0U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           169);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           170);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__resp_ready = 1U;
        vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout = 0U;
        while (((~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r)) 
                & VL_GTS_III(32, 0x2710U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_warp_integration.clk)", 
                                                               "tb/tb_warp_integration.sv", 
                                                               176);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout 
                = ((IData)(1U) + vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
            if (VL_UNLIKELY((0U == VL_MODDIVS_III(32, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout, (IData)(0x3e8U))))) {
                VL_WRITEF_NX("[DEBUG] Waiting for resp_valid... (%0d cycles)\n",0,
                             32,vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
            }
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x2710U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_warp_integration.sv:184: Assertion failed in %Ntb_warp_integration.send_rocc_cmd: [ERROR] Timeout waiting for resp_valid!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/tb_warp_integration.sv", 184, "");
            goto __Vlabel2;
        }
        VL_WRITEF_NX("[RESP] Received response: data=0x%08x (after %0d cycles)\n",0,
                     32,vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r,
                     32,vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           189);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__resp_ready = 0U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           193);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           194);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vlabel2: ;
    }
    vlSelf->tb_warp_integration__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_warp_integration__DOT__test_count);
    vlSelf->tb_warp_integration__DOT__pass_count = 
        ((IData)(1U) + vlSelf->tb_warp_integration__DOT__pass_count);
    VL_WRITEF_NX("\n--- Test 3: Execute Kernel ---\n[INFO] KERNEL_START will wait for kernel completion before returning...\n",0);
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__cmd_name = 
        std::string{"KERNEL_START (6 instructions)"};
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__rs2_data = 6U;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__rs1_data = 0U;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__funct = 0U;
    {
        vlSelf->tb_warp_integration__DOT__resp_ready = 0U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           145);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__cmd_valid = 1U;
        vlSelf->tb_warp_integration__DOT__cmd_funct 
            = __Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__funct;
        vlSelf->tb_warp_integration__DOT__cmd_rs1_data 
            = __Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__rs1_data;
        vlSelf->tb_warp_integration__DOT__cmd_rs2_data 
            = __Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__rs2_data;
        vlSelf->tb_warp_integration__DOT__cmd_rd = 1U;
        VL_WRITEF_NX("[CMD] Sending %@: rs1=0x%08x, rs2=0x%08x\n",0,
                     -1,&(__Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__cmd_name),
                     32,__Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__rs1_data,
                     32,__Vtask_tb_warp_integration__DOT__send_rocc_cmd__2__rs2_data);
        vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout = 0U;
        while (((~ (IData)(vlSelf->tb_warp_integration__DOT__cmd_ready)) 
                & VL_GTS_III(32, 0x64U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_warp_integration.clk)", 
                                                               "tb/tb_warp_integration.sv", 
                                                               157);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout 
                = ((IData)(1U) + vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x64U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_warp_integration.sv:161: Assertion failed in %Ntb_warp_integration.send_rocc_cmd: [ERROR] Timeout waiting for cmd_ready!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/tb_warp_integration.sv", 161, "");
            goto __Vlabel3;
        }
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           165);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__cmd_valid = 0U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           169);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           170);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__resp_ready = 1U;
        vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout = 0U;
        while (((~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r)) 
                & VL_GTS_III(32, 0x2710U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_warp_integration.clk)", 
                                                               "tb/tb_warp_integration.sv", 
                                                               176);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout 
                = ((IData)(1U) + vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
            if (VL_UNLIKELY((0U == VL_MODDIVS_III(32, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout, (IData)(0x3e8U))))) {
                VL_WRITEF_NX("[DEBUG] Waiting for resp_valid... (%0d cycles)\n",0,
                             32,vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
            }
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x2710U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_warp_integration.sv:184: Assertion failed in %Ntb_warp_integration.send_rocc_cmd: [ERROR] Timeout waiting for resp_valid!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/tb_warp_integration.sv", 184, "");
            goto __Vlabel3;
        }
        VL_WRITEF_NX("[RESP] Received response: data=0x%08x (after %0d cycles)\n",0,
                     32,vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r,
                     32,vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           189);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__resp_ready = 0U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           193);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           194);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vlabel3: ;
    }
    vlSelf->tb_warp_integration__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_warp_integration__DOT__test_count);
    vlSelf->tb_warp_integration__DOT__pass_count = 
        ((IData)(1U) + vlSelf->tb_warp_integration__DOT__pass_count);
    VL_WRITEF_NX("[INFO] Kernel execution completed!\n",0);
    co_await vlSelf->__VdlySched.delay(0xf4240ULL, 
                                       nullptr, "tb/tb_warp_integration.sv", 
                                       263);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n--- Test 4: Check Final Status ---\n",0);
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__cmd_name = 
        std::string{"GET_STATUS (after kernel)"};
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__rs2_data = 0U;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__rs1_data = 0U;
    __Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__funct = 2U;
    {
        vlSelf->tb_warp_integration__DOT__resp_ready = 0U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           145);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__cmd_valid = 1U;
        vlSelf->tb_warp_integration__DOT__cmd_funct 
            = __Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__funct;
        vlSelf->tb_warp_integration__DOT__cmd_rs1_data 
            = __Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__rs1_data;
        vlSelf->tb_warp_integration__DOT__cmd_rs2_data 
            = __Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__rs2_data;
        vlSelf->tb_warp_integration__DOT__cmd_rd = 1U;
        VL_WRITEF_NX("[CMD] Sending %@: rs1=0x%08x, rs2=0x%08x\n",0,
                     -1,&(__Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__cmd_name),
                     32,__Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__rs1_data,
                     32,__Vtask_tb_warp_integration__DOT__send_rocc_cmd__3__rs2_data);
        vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout = 0U;
        while (((~ (IData)(vlSelf->tb_warp_integration__DOT__cmd_ready)) 
                & VL_GTS_III(32, 0x64U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_warp_integration.clk)", 
                                                               "tb/tb_warp_integration.sv", 
                                                               157);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout 
                = ((IData)(1U) + vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x64U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_warp_integration.sv:161: Assertion failed in %Ntb_warp_integration.send_rocc_cmd: [ERROR] Timeout waiting for cmd_ready!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/tb_warp_integration.sv", 161, "");
            goto __Vlabel4;
        }
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           165);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__cmd_valid = 0U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           169);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           170);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__resp_ready = 1U;
        vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout = 0U;
        while (((~ (IData)(vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_valid_r)) 
                & VL_GTS_III(32, 0x2710U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_warp_integration.clk)", 
                                                               "tb/tb_warp_integration.sv", 
                                                               176);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout 
                = ((IData)(1U) + vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
            if (VL_UNLIKELY((0U == VL_MODDIVS_III(32, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout, (IData)(0x3e8U))))) {
                VL_WRITEF_NX("[DEBUG] Waiting for resp_valid... (%0d cycles)\n",0,
                             32,vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
            }
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x2710U, vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_warp_integration.sv:184: Assertion failed in %Ntb_warp_integration.send_rocc_cmd: [ERROR] Timeout waiting for resp_valid!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb/tb_warp_integration.sv", 184, "");
            goto __Vlabel4;
        }
        VL_WRITEF_NX("[RESP] Received response: data=0x%08x (after %0d cycles)\n",0,
                     32,vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r,
                     32,vlSelf->tb_warp_integration__DOT__send_rocc_cmd__Vstatic__timeout);
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           189);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_warp_integration__DOT__resp_ready = 0U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           193);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VtrigSched_hce2080ec__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_warp_integration.clk)", 
                                                           "tb/tb_warp_integration.sv", 
                                                           194);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vlabel4: ;
    }
    vlSelf->tb_warp_integration__DOT__test_count = 
        ((IData)(1U) + vlSelf->tb_warp_integration__DOT__test_count);
    VL_WRITEF_NX("[DEBUG] Status after kernel: idle=%b, exec=%b, done=%b, error=%b, fifo_empty=%b\n",0,
                 1,(1U & vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r),
                 1,(1U & (vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r 
                          >> 1U)),1,(1U & (vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r 
                                           >> 2U)),
                 1,(1U & (vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r 
                          >> 3U)),1,(1U & (vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r 
                                           >> 5U)));
    if ((IData)((0U != (5U & vlSelf->tb_warp_integration__DOT__dut__DOT__rocc_inst__DOT__resp_data_r)))) {
        vlSelf->tb_warp_integration__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_warp_integration__DOT__pass_count);
    } else {
        vlSelf->tb_warp_integration__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_warp_integration__DOT__fail_count);
    }
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_warp_integration.sv", 
                                       275);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n========================================\nTest Summary\n========================================\nTotal Tests: %0d\nPassed:      %0d\nFailed:      %0d\n========================================\n",0,
                 32,vlSelf->tb_warp_integration__DOT__test_count,
                 32,vlSelf->tb_warp_integration__DOT__pass_count,
                 32,vlSelf->tb_warp_integration__DOT__fail_count);
    if (VL_LIKELY((0U == vlSelf->tb_warp_integration__DOT__fail_count))) {
        VL_WRITEF_NX("ALL TESTS PASSED!\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Error: tb_warp_integration.sv:287: Assertion failed in %Ntb_warp_integration: SOME TESTS FAILED!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tb_warp_integration.sv", 287, "");
    }
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/tb_warp_integration.sv", 
                                       290);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb/tb_warp_integration.sv", 291, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_warp_integration___024root___eval_initial__TOP__Vtiming__2(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xbebc200ULL, 
                                       nullptr, "tb/tb_warp_integration.sv", 
                                       296);
    VL_WRITEF_NX("[%0t] %%Error: tb_warp_integration.sv:297: Assertion failed in %Ntb_warp_integration: TEST TIMEOUT!\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("tb/tb_warp_integration.sv", 297, "");
    VL_FINISH_MT("tb/tb_warp_integration.sv", 298, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_warp_integration___024root___dump_triggers__act(Vtb_warp_integration___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_warp_integration___024root___eval_triggers__act(Vtb_warp_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_warp_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_warp_integration___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_warp_integration__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_warp_integration__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->tb_warp_integration__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_warp_integration__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_warp_integration__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_warp_integration__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_integration__DOT__clk__0 
        = vlSelf->tb_warp_integration__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_warp_integration__DOT__rst_n__0 
        = vlSelf->tb_warp_integration__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_warp_integration___024root___dump_triggers__act(vlSelf);
    }
#endif
}
