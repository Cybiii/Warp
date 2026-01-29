// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_lane_array__pch.h"
#include "Vtb_lane_array.h"
#include "Vtb_lane_array___024root.h"

// FUNCTIONS
Vtb_lane_array__Syms::~Vtb_lane_array__Syms()
{
}

Vtb_lane_array__Syms::Vtb_lane_array__Syms(VerilatedContext* contextp, const char* namep, Vtb_lane_array* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(744);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_lane_array.configure(this, name(), "tb_lane_array", "tb_lane_array", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_lane_array__test_lane_array_instruction.configure(this, name(), "tb_lane_array.test_lane_array_instruction", "test_lane_array_instruction", -9, VerilatedScope::SCOPE_OTHER);
}
