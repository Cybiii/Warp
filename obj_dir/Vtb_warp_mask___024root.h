// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_warp_mask.h for the primary calling header

#ifndef VERILATED_VTB_WARP_MASK___024ROOT_H_
#define VERILATED_VTB_WARP_MASK___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_warp_mask__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_warp_mask___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_warp_mask__DOT__clk;
    CData/*0:0*/ tb_warp_mask__DOT__rst_n;
    CData/*0:0*/ tb_warp_mask__DOT__mask_update;
    CData/*7:0*/ tb_warp_mask__DOT__mask_in;
    CData/*7:0*/ tb_warp_mask__DOT__unnamedblk1__DOT__unnamedblk2__DOT__single_lane_mask;
    CData/*7:0*/ tb_warp_mask__DOT__dut__DOT__mask_r;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_warp_mask__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_warp_mask__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_warp_mask__DOT__test_count;
    IData/*31:0*/ tb_warp_mask__DOT__pass_count;
    IData/*31:0*/ tb_warp_mask__DOT__fail_count;
    IData/*31:0*/ tb_warp_mask__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_warp_mask__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6be9514e__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_warp_mask__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_warp_mask___024root(Vtb_warp_mask__Syms* symsp, const char* v__name);
    ~Vtb_warp_mask___024root();
    VL_UNCOPYABLE(Vtb_warp_mask___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
