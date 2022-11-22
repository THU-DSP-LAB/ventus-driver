// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus_SM_wrapper.h"
#include "VVentus__Syms.h"

void VVentus_SM_wrapper___ctor_var_reset(VVentus_SM_wrapper* vlSelf);

VVentus_SM_wrapper::VVentus_SM_wrapper(VVentus__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVentus_SM_wrapper___ctor_var_reset(this);
}

void VVentus_SM_wrapper::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVentus_SM_wrapper::~VVentus_SM_wrapper() {
}
