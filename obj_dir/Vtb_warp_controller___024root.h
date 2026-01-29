// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_warp_controller.h for the primary calling header

#ifndef VERILATED_VTB_WARP_CONTROLLER___024ROOT_H_
#define VERILATED_VTB_WARP_CONTROLLER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_warp_controller__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_warp_controller___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_warp_controller__DOT__clk;
    CData/*0:0*/ tb_warp_controller__DOT__rst_n;
    CData/*0:0*/ tb_warp_controller__DOT__kernel_start;
    CData/*0:0*/ tb_warp_controller__DOT__fifo_empty;
    CData/*0:0*/ tb_warp_controller__DOT__fifo_valid;
    CData/*0:0*/ tb_warp_controller__DOT__fifo_pop;
    CData/*0:0*/ tb_warp_controller__DOT__lane_execute;
    CData/*0:0*/ tb_warp_controller__DOT__lane_ready;
    CData/*0:0*/ tb_warp_controller__DOT__mem_req;
    CData/*0:0*/ tb_warp_controller__DOT__mem_ready;
    CData/*0:0*/ tb_warp_controller__DOT__mem_valid;
    CData/*0:0*/ tb_warp_controller__DOT__kernel_done;
    CData/*0:0*/ tb_warp_controller__DOT__kernel_error;
    CData/*2:0*/ tb_warp_controller__DOT__dut__DOT__state_r;
    CData/*2:0*/ tb_warp_controller__DOT__dut__DOT__state_next;
    CData/*0:0*/ tb_warp_controller__DOT__dut__DOT__kernel_start_r;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_warp_controller__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_warp_controller__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_warp_controller__DOT__kernel_length;
    SData/*15:0*/ tb_warp_controller__DOT__dut__DOT__inst_count;
    SData/*15:0*/ tb_warp_controller__DOT__dut__DOT__kernel_length_r;
    IData/*31:0*/ tb_warp_controller__DOT__kernel_addr;
    IData/*31:0*/ tb_warp_controller__DOT__fifo_data;
    IData/*31:0*/ tb_warp_controller__DOT__lane_instruction;
    IData/*31:0*/ tb_warp_controller__DOT__test_count;
    IData/*31:0*/ tb_warp_controller__DOT__pass_count;
    IData/*31:0*/ tb_warp_controller__DOT__fail_count;
    IData/*31:0*/ tb_warp_controller__DOT__dut__DOT__fetch_addr;
    IData/*31:0*/ tb_warp_controller__DOT__dut__DOT__kernel_addr_r;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0dfe4411__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_warp_controller__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_warp_controller___024root(Vtb_warp_controller__Syms* symsp, const char* v__name);
    ~Vtb_warp_controller___024root();
    VL_UNCOPYABLE(Vtb_warp_controller___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
