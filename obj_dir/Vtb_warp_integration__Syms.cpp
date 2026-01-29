// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_warp_integration__pch.h"
#include "Vtb_warp_integration.h"
#include "Vtb_warp_integration___024root.h"

// FUNCTIONS
Vtb_warp_integration__Syms::~Vtb_warp_integration__Syms()
{
}

Vtb_warp_integration__Syms::Vtb_warp_integration__Syms(VerilatedContext* contextp, const char* namep, Vtb_warp_integration* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(1128);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_warp_integration.configure(this, name(), "tb_warp_integration", "tb_warp_integration", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_warp_integration__send_rocc_cmd.configure(this, name(), "tb_warp_integration.send_rocc_cmd", "send_rocc_cmd", -9, VerilatedScope::SCOPE_OTHER);
}
