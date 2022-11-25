#include "vt_utils.h"
#include <assert.h>

uint64_t aligned_size(uint64_t size, uint64_t align_block){
    assert(0 == (align_block & (align_block - 1)));
    return (size + align_block - 1) & ~(align_block - 1);
}
bool is_aligned(uint64_t addr, uint64_t align_block){
    assert(0 == (align_block & (align_block - 1)));
    return( 0 == (addr) & (align_block - 1));
}