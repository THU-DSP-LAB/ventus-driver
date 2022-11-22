// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus__Syms.h"
#include "VVentus_collectorUnit.h"

void VVentus_collectorUnit___ctor_var_reset(VVentus_collectorUnit* vlSelf);

VVentus_collectorUnit::VVentus_collectorUnit(VVentus__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVentus_collectorUnit___ctor_var_reset(this);
}

void VVentus_collectorUnit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVentus_collectorUnit::~VVentus_collectorUnit() {
}
