
#pragma once
#include <cstdint>


#define DEBUG

#ifdef DEBUG
#define PCOUT_INFO std::cout<<"[INFO]: "<<__FUNCTION__<<": "
#endif

#define INSTSIZE64
#ifdef INSTSIZE64
typedef uint64_t inst_len;
#else
typedef uint32_t inst_len;
#endif

typedef struct {
    inst_len host_req_wg_id;
    inst_len host_req_num_wf;
    inst_len host_req_wf_size;
    inst_len host_req_start_pc;
    inst_len host_req_vgpr_size_total;
    inst_len host_req_sgpr_size_total;
    inst_len host_req_lds_size_total;
    inst_len host_req_gds_size_total;
    inst_len host_req_vgpr_size_per_wf;
    inst_len host_req_sgpr_size_per_wf;
    inst_len host_req_gds_baseaddr;
} host_port_t;///< GPGPU和主机之间进行配置参数传递的接口


uint64_t aligned_size(uint64_t size, uint64_t align_block);
bool is_aligned(uint64_t addr, uint64_t align_block);

