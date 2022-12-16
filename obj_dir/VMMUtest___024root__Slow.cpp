// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMMUtest.h for the primary calling header

#include "verilated.h"

#include "VMMUtest__Syms.h"
#include "VMMUtest___024root.h"

void VMMUtest___024root___ctor_var_reset(VMMUtest___024root* vlSelf);

VMMUtest___024root::VMMUtest___024root(VMMUtest__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMMUtest___024root___ctor_var_reset(this);
}

void VMMUtest___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMMUtest___024root::~VMMUtest___024root() {
}
