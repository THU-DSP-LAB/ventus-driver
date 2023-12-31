#pragma once
#define BLOCK_SIZE  64
#define MAX_BLOCK   8
#define RAM_RANGE   (4096ull*1024ull*1024ull) ///< 物理地址空间，4G bytes

#define NUM_THREAD          8
#define MAX_BLOCK_PER_SM    32
#define NUM_SM              2

#define MAX_CONTEXT         4
#define MAX_KERNEL          4

#define RESET_DELAY         5
#define RUN_DELAY   100 ///< 如果运行新任务时所有block都忙，最长等待时间

// device parameters
#define   HOST_REQ_WG_ID                    0x04
#define   HOST_REQ_NUM_WF                   0x08
#define   HOST_REQ_WF_SIZE                  0x0c
#define   HOST_REQ_START_PC                 0x10
#define   HOST_REQ_VGPR_SIZE_TOTAL          0x14
#define   HOST_REQ_SGPR_SIZE_TOTAL          0x18
#define   HOST_REQ_LDS_SIZE_TOTAL           0x1c
#define   HOST_REQ_GDS_SIZE_TOTAL           0x20
#define   HOST_REQ_VGPR_SIZE_PER_WF         0x24
#define   HOST_REQ_SGPR_SIZE_PER_WF         0x28
#define   HOST_REQ_GDS_BASEADDR             0x32

#define DEBUG_VIRTUAL_ADDR
#define DEBUG_TRACE
//#define DEBUG_VERIFY_HW

//device info
#define IMPLEMENTATION_ID 0
#define NUM_CTA           2
#define NUM_WARP          4
#define THREAD_PER_WARP   8

// define instruction length of ventus
#define INSTSIZE 32

