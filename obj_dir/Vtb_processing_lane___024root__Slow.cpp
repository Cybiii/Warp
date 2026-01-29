// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_processing_lane.h for the primary calling header

#include "Vtb_processing_lane__pch.h"
#include "Vtb_processing_lane__Syms.h"
#include "Vtb_processing_lane___024root.h"

void Vtb_processing_lane___024root___ctor_var_reset(Vtb_processing_lane___024root* vlSelf);

Vtb_processing_lane___024root::Vtb_processing_lane___024root(Vtb_processing_lane__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_processing_lane___024root___ctor_var_reset(this);
}

void Vtb_processing_lane___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_processing_lane___024root::~Vtb_processing_lane___024root() {
}
