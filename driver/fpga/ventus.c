//
// Created by yzx on 23-6-26.
//

#include <stdio.h>
#include <stdint.h>

#define INSTSIZE 32

#if INSTSIZE == 64
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
	inst_len host_req_pds_baseaddr;
	inst_len host_req_csr_knl;
	inst_len host_req_kernel_size_3d_0;
	inst_len host_req_kernel_size_3d_1;
	inst_len host_req_kernel_size_3d_2;

} host_port_t;///< GPGPU和主机之间进行配置参数传递的接口

struct metaData {
	uint64_t kernel_id;
	uint64_t kernel_size[3];///< 每个kernel的workgroup三维数目
	uint64_t wf_size; ///< 每个warp的thread数目
	uint64_t wg_size; ///< 每个workgroup的warp数目
	uint64_t metaDataBaseAddr;///< CSR_KNL的值，
	uint64_t ldsSize;///< 每个workgroup使用的local memory的大小
	uint64_t pdsSize;///< 每个thread用到的private memory大小
	uint64_t sgprUsage;///< 每个workgroup使用的标量寄存器数目
	uint64_t vgprUsage;///< 每个thread使用的向量寄存器数目
	uint64_t pdsBaseAddr;///< private memory的基址，要转成每个workgroup的基地址， wf_size*wg_size*pdsSize
};

struct data {
	int* dataLen;
	int dataNum;
	inst_len* memData;
};

// assuming that fp has been opened
void readMeta(metaData *m, FILE *fp) {
	
}

void writeMeta (metaData *m, GPGPU *g);

void readData(data *d, FILE *fp);

void writeData(data *d);