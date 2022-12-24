// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMMUTEST__SYMS_H_
#define VERILATED_VMMUTEST__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMMUtest.h"

// INCLUDE MODULE CLASSES
#include "VMMUtest___024root.h"

// SYMS CLASS (contains all model state)
class VMMUtest__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMMUtest* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMMUtest___024root             TOP;

    // CONSTRUCTORS
    VMMUtest__Syms(VerilatedContext* contextp, const char* namep, VMMUtest* modelp);
    ~VMMUtest__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
