// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_FCMA_ADD_s1.h"
#include "VVentus__Syms.h"

void VVentus_FCMA_ADD_s1___ctor_var_reset(VVentus_FCMA_ADD_s1* vlSelf);

VVentus_FCMA_ADD_s1::VVentus_FCMA_ADD_s1(VVentus__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVentus_FCMA_ADD_s1___ctor_var_reset(this);
}

void VVentus_FCMA_ADD_s1::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVentus_FCMA_ADD_s1::~VVentus_FCMA_ADD_s1() {
}
