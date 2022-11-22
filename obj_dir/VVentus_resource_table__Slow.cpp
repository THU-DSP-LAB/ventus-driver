// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVentus.h for the primary calling header

#include "verilated.h"

#include "VVentus__Syms.h"
#include "VVentus_resource_table.h"

void VVentus_resource_table___ctor_var_reset(VVentus_resource_table* vlSelf);

VVentus_resource_table::VVentus_resource_table(VVentus__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVentus_resource_table___ctor_var_reset(this);
}

void VVentus_resource_table::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVentus_resource_table::~VVentus_resource_table() {
}
