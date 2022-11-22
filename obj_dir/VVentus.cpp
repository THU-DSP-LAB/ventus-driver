// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VVentus.h"
#include "VVentus__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VVentus::VVentus(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VVentus__Syms(contextp(), _vcname__, this)}
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
    , __PVT__GPGPU_top__DOT__SM_wrapper{vlSymsp->TOP.__PVT__GPGPU_top__DOT__SM_wrapper}
    , __PVT__GPGPU_top__DOT__SM_wrapper_1{vlSymsp->TOP.__PVT__GPGPU_top__DOT__SM_wrapper_1}
    , __PVT__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl{vlSymsp->TOP.__PVT__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__lds_res_tbl}
    , __PVT__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl{vlSymsp->TOP.__PVT__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__vgpr_res_tbl}
    , __PVT__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl{vlSymsp->TOP.__PVT__GPGPU_top__DOT__cta__DOT__cta_sche__DOT__top_resource_table_i__DOT__rt_group__DOT__sgpr_res_tbl}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VVentus::VVentus(const char* _vcname__)
    : VVentus(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VVentus::~VVentus() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VVentus___024root___eval_debug_assertions(VVentus___024root* vlSelf);
#endif  // VL_DEBUG
void VVentus___024root___eval_static(VVentus___024root* vlSelf);
void VVentus___024root___eval_initial(VVentus___024root* vlSelf);
void VVentus___024root___eval_settle(VVentus___024root* vlSelf);
void VVentus___024root___eval(VVentus___024root* vlSelf);

void VVentus::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VVentus::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VVentus___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VVentus___024root___eval_static(&(vlSymsp->TOP));
        VVentus___024root___eval_initial(&(vlSymsp->TOP));
        VVentus___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VVentus___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VVentus::eventsPending() { return false; }

uint64_t VVentus::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VVentus::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VVentus___024root___eval_final(VVentus___024root* vlSelf);

VL_ATTR_COLD void VVentus::final() {
    VVentus___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VVentus::hierName() const { return vlSymsp->name(); }
const char* VVentus::modelName() const { return "VVentus"; }
unsigned VVentus::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VVentus::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VVentus___024root__trace_init_top(VVentus___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VVentus___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VVentus___024root*>(voidSelf);
    VVentus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VVentus___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VVentus___024root__trace_register(VVentus___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VVentus::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VVentus::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VVentus___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
