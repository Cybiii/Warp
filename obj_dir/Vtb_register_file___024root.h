// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_register_file.h for the primary calling header

#ifndef VERILATED_VTB_REGISTER_FILE___024ROOT_H_
#define VERILATED_VTB_REGISTER_FILE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_register_file__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_register_file___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_register_file__DOT__clk;
    CData/*0:0*/ tb_register_file__DOT__rst_n;
    CData/*4:0*/ tb_register_file__DOT__read_addr1;
    CData/*4:0*/ tb_register_file__DOT__read_addr2;
    CData/*0:0*/ tb_register_file__DOT__write_en;
    CData/*4:0*/ tb_register_file__DOT__write_addr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_register_file__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_register_file__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_register_file__DOT__read_data1;
    IData/*31:0*/ tb_register_file__DOT__read_data2;
    IData/*31:0*/ tb_register_file__DOT__write_data;
    IData/*31:0*/ tb_register_file__DOT__test_count;
    IData/*31:0*/ tb_register_file__DOT__pass_count;
    IData/*31:0*/ tb_register_file__DOT__fail_count;
    IData/*31:0*/ tb_register_file__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_register_file__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ tb_register_file__DOT__dut__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> tb_register_file__DOT__dut__DOT__registers;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h95e0c51c__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_register_file__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_register_file___024root(Vtb_register_file__Syms* symsp, const char* v__name);
    ~Vtb_register_file___024root();
    VL_UNCOPYABLE(Vtb_register_file___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
