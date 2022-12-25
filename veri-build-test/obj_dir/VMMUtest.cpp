// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMMUtest.h"
#include "VMMUtest__Syms.h"

//============================================================
// Constructors

VMMUtest::VMMUtest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMMUtest__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_host_req_ready{vlSymsp->TOP.io_host_req_ready}
    , io_host_req_valid{vlSymsp->TOP.io_host_req_valid}
    , io_host_req_bits_host_wg_id{vlSymsp->TOP.io_host_req_bits_host_wg_id}
    , io_host_req_bits_host_num_wf{vlSymsp->TOP.io_host_req_bits_host_num_wf}
    , io_host_rsp_ready{vlSymsp->TOP.io_host_rsp_ready}
    , io_host_rsp_valid{vlSymsp->TOP.io_host_rsp_valid}
    , io_host_rsp_bits_inflight_wg_buffer_host_wf_done_wg_id{vlSymsp->TOP.io_host_rsp_bits_inflight_wg_buffer_host_wf_done_wg_id}
    , io_out_a_ready{vlSymsp->TOP.io_out_a_ready}
    , io_out_a_valid{vlSymsp->TOP.io_out_a_valid}
    , io_out_a_bits_opcode{vlSymsp->TOP.io_out_a_bits_opcode}
    , io_out_a_bits_size{vlSymsp->TOP.io_out_a_bits_size}
    , io_out_a_bits_source{vlSymsp->TOP.io_out_a_bits_source}
    , io_out_a_bits_mask{vlSymsp->TOP.io_out_a_bits_mask}
    , io_out_d_ready{vlSymsp->TOP.io_out_d_ready}
    , io_out_d_valid{vlSymsp->TOP.io_out_d_valid}
    , io_out_d_bits_opcode{vlSymsp->TOP.io_out_d_bits_opcode}
    , io_out_d_bits_size{vlSymsp->TOP.io_out_d_bits_size}
    , io_out_d_bits_source{vlSymsp->TOP.io_out_d_bits_source}
    , io_host_req_bits_host_wf_size{vlSymsp->TOP.io_host_req_bits_host_wf_size}
    , io_host_req_bits_host_vgpr_size_total{vlSymsp->TOP.io_host_req_bits_host_vgpr_size_total}
    , io_host_req_bits_host_sgpr_size_total{vlSymsp->TOP.io_host_req_bits_host_sgpr_size_total}
    , io_host_req_bits_host_lds_size_total{vlSymsp->TOP.io_host_req_bits_host_lds_size_total}
    , io_host_req_bits_host_gds_size_total{vlSymsp->TOP.io_host_req_bits_host_gds_size_total}
    , io_host_req_bits_host_vgpr_size_per_wf{vlSymsp->TOP.io_host_req_bits_host_vgpr_size_per_wf}
    , io_host_req_bits_host_sgpr_size_per_wf{vlSymsp->TOP.io_host_req_bits_host_sgpr_size_per_wf}
    , io_host_req_bits_host_start_pc{vlSymsp->TOP.io_host_req_bits_host_start_pc}
    , io_host_req_bits_host_gds_baseaddr{vlSymsp->TOP.io_host_req_bits_host_gds_baseaddr}
    , io_out_a_bits_address{vlSymsp->TOP.io_out_a_bits_address}
    , io_out_a_bits_data{vlSymsp->TOP.io_out_a_bits_data}
    , io_out_d_bits_data{vlSymsp->TOP.io_out_d_bits_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMMUtest::VMMUtest(const char* _vcname__)
    : VMMUtest(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMMUtest::~VMMUtest() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMMUtest___024root___eval_debug_assertions(VMMUtest___024root* vlSelf);
#endif  // VL_DEBUG
void VMMUtest___024root___eval_static(VMMUtest___024root* vlSelf);
void VMMUtest___024root___eval_initial(VMMUtest___024root* vlSelf);
void VMMUtest___024root___eval_settle(VMMUtest___024root* vlSelf);
void VMMUtest___024root___eval(VMMUtest___024root* vlSelf);

void VMMUtest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMMUtest::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMMUtest___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMMUtest___024root___eval_static(&(vlSymsp->TOP));
        VMMUtest___024root___eval_initial(&(vlSymsp->TOP));
        VMMUtest___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMMUtest___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMMUtest::eventsPending() { return false; }

uint64_t VMMUtest::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMMUtest::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMMUtest___024root___eval_final(VMMUtest___024root* vlSelf);

VL_ATTR_COLD void VMMUtest::final() {
    VMMUtest___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMMUtest::hierName() const { return vlSymsp->name(); }
const char* VMMUtest::modelName() const { return "VMMUtest"; }
unsigned VMMUtest::threads() const { return 1; }
