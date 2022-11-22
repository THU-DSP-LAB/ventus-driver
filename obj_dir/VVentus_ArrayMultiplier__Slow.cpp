// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_ArrayMultiplier.h"
#include "VVentus__Syms.h"

void VVentus_ArrayMultiplier___ctor_var_reset(VVentus_ArrayMultiplier* vlSelf);

VVentus_ArrayMultiplier::VVentus_ArrayMultiplier(VVentus__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVentus_ArrayMultiplier___ctor_var_reset(this);
}

void VVentus_ArrayMultiplier::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVentus_ArrayMultiplier::~VVentus_ArrayMultiplier() {
}
