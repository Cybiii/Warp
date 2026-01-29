// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_processing_lane.h for the primary calling header

#ifndef VERILATED_VTB_PROCESSING_LANE___024ROOT_H_
#define VERILATED_VTB_PROCESSING_LANE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_processing_lane__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_processing_lane___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_processing_lane__DOT__clk;
    CData/*0:0*/ tb_processing_lane__DOT__rst_n;
    CData/*0:0*/ tb_processing_lane__DOT__lane_enable;
    CData/*0:0*/ tb_processing_lane__DOT__execute;
    CData/*0:0*/ tb_processing_lane__DOT__ready;
    CData/*3:0*/ tb_processing_lane__DOT__dut__DOT__opcode;
    CData/*4:0*/ tb_processing_lane__DOT__dut__DOT__dst_addr;
    CData/*4:0*/ tb_processing_lane__DOT__dut__DOT__src1_addr;
    CData/*4:0*/ tb_processing_lane__DOT__dut__DOT__src2_addr;
    CData/*0:0*/ tb_processing_lane__DOT__dut__DOT__rf_write_en;
    CData/*0:0*/ tb_processing_lane__DOT__dut__DOT__alu_overflow;
    CData/*1:0*/ tb_processing_lane__DOT__dut__DOT__state_r;
    CData/*1:0*/ tb_processing_lane__DOT__dut__DOT__state_next;
    CData/*0:0*/ tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__mul_ovf;
    CData/*0:0*/ tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__add_ovf;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_processing_lane__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_processing_lane__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_processing_lane__DOT__instruction;
    IData/*31:0*/ tb_processing_lane__DOT__test_count;
    IData/*31:0*/ tb_processing_lane__DOT__pass_count;
    IData/*31:0*/ tb_processing_lane__DOT__fail_count;
    IData/*31:0*/ tb_processing_lane__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_processing_lane__DOT__dut__DOT__imm;
    IData/*31:0*/ tb_processing_lane__DOT__dut__DOT__rf_read_data1;
    IData/*31:0*/ tb_processing_lane__DOT__dut__DOT__rf_read_data2;
    IData/*31:0*/ tb_processing_lane__DOT__dut__DOT__rf_write_data;
    IData/*31:0*/ tb_processing_lane__DOT__dut__DOT__alu_result;
    IData/*31:0*/ tb_processing_lane__DOT__dut__DOT__inst_r;
    IData/*31:0*/ tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__add_result_ext;
    QData/*63:0*/ tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__mul_result_ext;
    QData/*63:0*/ tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_mul_result;
    QData/*32:0*/ tb_processing_lane__DOT__dut__DOT__alu_inst__DOT__fma_result_ext;
    VlUnpacked<IData/*31:0*/, 32> tb_processing_lane__DOT__dut__DOT__rf_inst__DOT__registers;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha9211336__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_processing_lane__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_processing_lane___024root(Vtb_processing_lane__Syms* symsp, const char* v__name);
    ~Vtb_processing_lane___024root();
    VL_UNCOPYABLE(Vtb_processing_lane___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
