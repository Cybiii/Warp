// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_WARP_MASK__SYMS_H_
#define VERILATED_VTB_WARP_MASK__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_warp_mask.h"

// INCLUDE MODULE CLASSES
#include "Vtb_warp_mask___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_warp_mask__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_warp_mask* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_warp_mask___024root        TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_warp_mask;
    VerilatedScope __Vscope_tb_warp_mask__test_mask;
    VerilatedScope __Vscope_tb_warp_mask__unnamedblk3;

    // CONSTRUCTORS
    Vtb_warp_mask__Syms(VerilatedContext* contextp, const char* namep, Vtb_warp_mask* modelp);
    ~Vtb_warp_mask__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
