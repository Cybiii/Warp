// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_instruction_fifo__pch.h"
#include "Vtb_instruction_fifo.h"
#include "Vtb_instruction_fifo___024root.h"

// FUNCTIONS
Vtb_instruction_fifo__Syms::~Vtb_instruction_fifo__Syms()
{
}

Vtb_instruction_fifo__Syms::Vtb_instruction_fifo__Syms(VerilatedContext* contextp, const char* namep, Vtb_instruction_fifo* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(48);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_instruction_fifo.configure(this, name(), "tb_instruction_fifo", "tb_instruction_fifo", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_instruction_fifo__unnamedblk2.configure(this, name(), "tb_instruction_fifo.unnamedblk2", "unnamedblk2", -9, VerilatedScope::SCOPE_OTHER);
}
