// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_processing_lane__pch.h"
#include "Vtb_processing_lane.h"
#include "Vtb_processing_lane___024root.h"

// FUNCTIONS
Vtb_processing_lane__Syms::~Vtb_processing_lane__Syms()
{
}

Vtb_processing_lane__Syms::Vtb_processing_lane__Syms(VerilatedContext* contextp, const char* namep, Vtb_processing_lane* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(261);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_processing_lane.configure(this, name(), "tb_processing_lane", "tb_processing_lane", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_processing_lane__test_lane_instruction.configure(this, name(), "tb_processing_lane.test_lane_instruction", "test_lane_instruction", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_processing_lane__unnamedblk1.configure(this, name(), "tb_processing_lane.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
}
