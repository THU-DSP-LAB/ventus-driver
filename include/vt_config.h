#pragma once
#define BLOCK_SIZE  4096
#define MAX_BLOCK   8
#define RAM_RANGE   (4096ull * 1024*1024) ///< 物理地址空间，4G bytes

#define NUM_THREAD          16
#define MAX_BLOCK_PER_SM    32
#define NUM_SM              16


#define RESET_DELAY         5
#define RUN_DELAY   100 ///< 如果运行新任务时所有block都忙，最长等待时间