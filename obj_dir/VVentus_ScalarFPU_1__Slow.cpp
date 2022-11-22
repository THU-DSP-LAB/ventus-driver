// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_ScalarFPU_1.h"
#include "VVentus__Syms.h"

void VVentus_ScalarFPU_1___ctor_var_reset(VVentus_ScalarFPU_1* vlSelf);

VVentus_ScalarFPU_1::VVentus_ScalarFPU_1(VVentus__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVentus_ScalarFPU_1___ctor_var_reset(this);
}

void VVentus_ScalarFPU_1::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVentus_ScalarFPU_1::~VVentus_ScalarFPU_1() {
}
