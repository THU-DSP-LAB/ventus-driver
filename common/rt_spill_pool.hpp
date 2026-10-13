#pragma once

#include <cstdint>

// Driver-owned hidden allocation. Shader kernel metadata and PDS do not name
// this memory. Each SM owns 384B * 256 fixed parent-lane slots. The driver
// assigns slot (parentWarp * 32 + parentLane); no hardware allocator/ring.
class RtSpillPool {
public:
    static constexpr uint32_t kSlotsPerCore = 256;
    static constexpr uint32_t kSlotBytes = 384;
    static constexpr uint32_t kSpillBytes = kSlotsPerCore * kSlotBytes;
    static constexpr uint32_t kCoreStride = kSpillBytes;

    template <typename Allocator>
    bool prepare_dispatch(Allocator &allocator, uint32_t cores) {
        if (!cores || (base_ && cores != cores_)) return false;
        if (!base_) {
            const uint64_t bytes = uint64_t(cores) * kCoreStride;
            const uint64_t base = allocator.alloc(bytes);
            if (!base) return false;
            base_ = base;
            cores_ = cores;
        }
        // Zero is disabled/uninitialised. Dispatches using this allocation
        // are serial; hardware resets continuation-valid bits on a new epoch.
        if (++epoch_ == 0) ++epoch_;
        return true;
    }

    template <typename Allocator>
    void release(Allocator &allocator) {
        if (base_) allocator.free(base_, uint64_t(cores_) * kCoreStride);
        base_ = 0;
        cores_ = 0;
        epoch_ = 0;
    }

    uint64_t spill_base() const { return base_; }
    uint64_t lane_pointer(uint32_t core, uint32_t parent_warp, uint32_t parent_lane) const {
        if (!base_ || core >= cores_ || parent_warp >= 8 || parent_lane >= 32) return 0;
        return base_ + uint64_t(core) * kCoreStride +
               uint64_t(parent_warp * 32 + parent_lane) * kSlotBytes;
    }
    uint32_t epoch() const { return epoch_; }

private:
    uint64_t base_ = 0;
    uint32_t cores_ = 0;
    uint32_t epoch_ = 0;
};
