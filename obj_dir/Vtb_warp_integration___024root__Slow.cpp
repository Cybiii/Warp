// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_warp_integration.h for the primary calling header

#include "Vtb_warp_integration__pch.h"
#include "Vtb_warp_integration__Syms.h"
#include "Vtb_warp_integration___024root.h"

void Vtb_warp_integration___024root___ctor_var_reset(Vtb_warp_integration___024root* vlSelf);

Vtb_warp_integration___024root::Vtb_warp_integration___024root(Vtb_warp_integration__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_warp_integration___024root___ctor_var_reset(this);
}

void Vtb_warp_integration___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_warp_integration___024root::~Vtb_warp_integration___024root() {
}
