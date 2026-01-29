// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_register_file__pch.h"
#include "Vtb_register_file.h"
#include "Vtb_register_file___024root.h"

// FUNCTIONS
Vtb_register_file__Syms::~Vtb_register_file__Syms()
{
}

Vtb_register_file__Syms::Vtb_register_file__Syms(VerilatedContext* contextp, const char* namep, Vtb_register_file* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(248);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_register_file.configure(this, name(), "tb_register_file", "tb_register_file", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_register_file__test_rf.configure(this, name(), "tb_register_file.test_rf", "test_rf", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_register_file__unnamedblk2.configure(this, name(), "tb_register_file.unnamedblk2", "unnamedblk2", -9, VerilatedScope::SCOPE_OTHER);
}
