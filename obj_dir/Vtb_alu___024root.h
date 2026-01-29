// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_alu.h for the primary calling header

#ifndef VERILATED_VTB_ALU___024ROOT_H_
#define VERILATED_VTB_ALU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_alu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_alu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_alu__DOT__clk;
    CData/*0:0*/ tb_alu__DOT__rst_n;
    CData/*3:0*/ tb_alu__DOT__opcode;
    CData/*0:0*/ tb_alu__DOT__overflow;
    CData/*0:0*/ tb_alu__DOT__dut__DOT__mul_ovf;
    CData/*0:0*/ tb_alu__DOT__dut__DOT__add_ovf;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_alu__DOT__rst_n__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_alu__DOT__operand1;
    IData/*31:0*/ tb_alu__DOT__operand2;
    IData/*31:0*/ tb_alu__DOT__operand3;
    IData/*31:0*/ tb_alu__DOT__result;
    IData/*31:0*/ tb_alu__DOT__test_count;
    IData/*31:0*/ tb_alu__DOT__pass_count;
    IData/*31:0*/ tb_alu__DOT__fail_count;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ tb_alu__DOT__dut__DOT__add_result_ext;
    QData/*63:0*/ tb_alu__DOT__dut__DOT__mul_result_ext;
    QData/*63:0*/ tb_alu__DOT__dut__DOT__fma_mul_result;
    QData/*32:0*/ tb_alu__DOT__dut__DOT__fma_result_ext;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6352b31c__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_alu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_alu___024root(Vtb_alu__Syms* symsp, const char* v__name);
    ~Vtb_alu___024root();
    VL_UNCOPYABLE(Vtb_alu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
