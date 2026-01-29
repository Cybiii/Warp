// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_instruction_fifo.h for the primary calling header

#ifndef VERILATED_VTB_INSTRUCTION_FIFO___024ROOT_H_
#define VERILATED_VTB_INSTRUCTION_FIFO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_instruction_fifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_instruction_fifo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_instruction_fifo__DOT__clk;
    CData/*0:0*/ tb_instruction_fifo__DOT__rst_n;
    CData/*0:0*/ tb_instruction_fifo__DOT__push;
    CData/*0:0*/ tb_instruction_fifo__DOT__pop;
    CData/*0:0*/ tb_instruction_fifo__DOT__full;
    CData/*0:0*/ tb_instruction_fifo__DOT__empty;
    CData/*3:0*/ tb_instruction_fifo__DOT__dut__DOT__write_ptr;
    CData/*3:0*/ tb_instruction_fifo__DOT__dut__DOT__read_ptr;
    CData/*4:0*/ tb_instruction_fifo__DOT__dut__DOT__count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_instruction_fifo__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_instruction_fifo__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_instruction_fifo__DOT__data_in;
    IData/*31:0*/ tb_instruction_fifo__DOT__test_count;
    IData/*31:0*/ tb_instruction_fifo__DOT__pass_count;
    IData/*31:0*/ tb_instruction_fifo__DOT__fail_count;
    IData/*31:0*/ tb_instruction_fifo__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_instruction_fifo__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ tb_instruction_fifo__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ tb_instruction_fifo__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 16> tb_instruction_fifo__DOT__dut__DOT__fifo_mem;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hfc7ebaab__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_instruction_fifo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_instruction_fifo___024root(Vtb_instruction_fifo__Syms* symsp, const char* v__name);
    ~Vtb_instruction_fifo___024root();
    VL_UNCOPYABLE(Vtb_instruction_fifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
