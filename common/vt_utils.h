
#pragma once
#include <cstdint>


#define DEBUG

#ifdef DEBUG
#define PCOUT_INFO std::cout<<"[INFO]: "<<__FUNCTION__<<": "
#endif


uint64_t aligned_size(uint64_t size, uint64_t align_block);
bool is_aligned(uint64_t addr, uint64_t align_block);

