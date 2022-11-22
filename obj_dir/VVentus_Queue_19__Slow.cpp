// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_Queue_19.h"
#include "VVentus__Syms.h"

void VVentus_Queue_19___ctor_var_reset(VVentus_Queue_19* vlSelf);

VVentus_Queue_19::VVentus_Queue_19(VVentus__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVentus_Queue_19___ctor_var_reset(this);
}

void VVentus_Queue_19::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVentus_Queue_19::~VVentus_Queue_19() {
}
