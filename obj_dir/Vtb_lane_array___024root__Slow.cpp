// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lane_array.h for the primary calling header

#include "Vtb_lane_array__pch.h"
#include "Vtb_lane_array__Syms.h"
#include "Vtb_lane_array___024root.h"

void Vtb_lane_array___024root___ctor_var_reset(Vtb_lane_array___024root* vlSelf);

Vtb_lane_array___024root::Vtb_lane_array___024root(Vtb_lane_array__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_lane_array___024root___ctor_var_reset(this);
}

void Vtb_lane_array___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_lane_array___024root::~Vtb_lane_array___024root() {
}
