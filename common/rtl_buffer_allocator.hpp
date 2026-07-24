#pragma once

#include <algorithm>
#include <cassert>
#include <cstddef>
#include <cstdint>
#include <list>
#include <map>
#include <vector>

class RtlBufferAllocator {
public:
    static constexpr uint64_t kPageSize = 4096;
    static constexpr uint64_t kBaseAddr = 0x90000000ull;
    static constexpr uint64_t kMaxAddr = 0xffffffffull;
    static constexpr uint8_t kMaxOrder = 16;

    struct Allocation {
        uint64_t address;
        uint64_t requested_size;
        uint64_t allocated_size;
        uint64_t sequence;
    };

    RtlBufferAllocator() { reset(); }

    void reset() {
        free_lists_.assign(kMaxOrder + 1, {});
        elem_idx_t page_idx = 0;
        for (int order = kMaxOrder; order >= 0; --order) {
            const elem_idx_t block_pages = elem_idx_t{1} << order;
            while (page_idx <= kTotalPages - block_pages) {
                free_lists_[order].push_back(page_idx);
                page_idx += block_pages;
            }
        }

        const elem_idx_t reserved_zero = allocate_idx(0);
        assert(reserved_zero == 0);
        static_cast<void>(reserved_zero);
        used_pages_ = 0;
        allocations_.clear();
        next_sequence_ = 0;
    }

    uint64_t alloc(uint64_t size) {
        const uint64_t page_count = calc_page_count(size);
        if (page_count == 0 || page_count > kTotalPages) return 0;

        const uint8_t order = log2_ceil(static_cast<uint32_t>(page_count));
        const elem_idx_t block = allocate_idx(order);
        if (block == 0) return 0;
        const uint64_t address = idx_to_addr(block);
        const Allocation allocation = {
            address,
            size,
            (uint64_t{1} << order) * kPageSize,
            next_sequence_++,
        };
        const bool inserted = allocations_.emplace(address, allocation).second;
        assert(inserted);
        static_cast<void>(inserted);
        return address;
    }

    bool restore_allocations(const std::vector<Allocation>& expected) {
        reset();
        for (const auto& record : expected) {
            const uint64_t address = alloc(record.requested_size);
            Allocation observed{};
            if (address != record.address
                || !find_allocation(address, observed)
                || observed.allocated_size != record.allocated_size) {
                reset();
                return false;
            }
        }
        return true;
    }

    bool free(uint64_t addr, uint64_t size) {
        if (!is_page_aligned(addr) || addr < kBaseAddr || addr > kMaxAddr) return false;

        const auto allocation = allocations_.find(addr);
        if (allocation == allocations_.end()
            || allocation->second.requested_size != size) {
            return false;
        }
        const uint8_t order = log2_ceil(
            static_cast<uint32_t>(allocation->second.allocated_size / kPageSize));
        if (order > kMaxOrder) return false;

        free_idx(addr_to_idx(addr), order);
        allocations_.erase(allocation);
        return true;
    }

    std::vector<Allocation> active_allocations() const {
        std::vector<Allocation> result;
        result.reserve(allocations_.size());
        for (const auto& entry : allocations_) {
            result.push_back(entry.second);
        }
        std::sort(
            result.begin(), result.end(),
            [](const Allocation& lhs, const Allocation& rhs) {
                return lhs.sequence < rhs.sequence;
            });
        return result;
    }

    bool find_allocation(uint64_t address, Allocation& allocation) const {
        const auto found = allocations_.find(address);
        if (found == allocations_.end()) return false;
        allocation = found->second;
        return true;
    }

private:
    using elem_idx_t = uint32_t;

    static constexpr elem_idx_t kTotalPages =
        static_cast<elem_idx_t>((kMaxAddr - kBaseAddr + 1) / kPageSize);
    static constexpr uint64_t kAllocatorBase = kBaseAddr - kPageSize;

    size_t used_pages_ = 0;
    std::vector<std::list<elem_idx_t>> free_lists_;
    std::map<uint64_t, Allocation> allocations_;
    uint64_t next_sequence_ = 0;

    static bool is_page_aligned(uint64_t addr) { return addr % kPageSize == 0; }

    static uint8_t log2_ceil(uint32_t value) {
        if (value <= 1) return 0;
        return static_cast<uint8_t>(32 - __builtin_clz(value - 1));
    }

    static uint64_t calc_page_count(uint64_t size) {
        if (size == 0) return 0;
        return (size - 1) / kPageSize + 1;
    }

    static elem_idx_t addr_to_idx(uint64_t addr) {
        return static_cast<elem_idx_t>((addr - kAllocatorBase) / kPageSize);
    }

    static uint64_t idx_to_addr(elem_idx_t idx) { return idx * kPageSize + kAllocatorBase; }

    elem_idx_t allocate_idx(uint8_t order) {
        if (order > kMaxOrder) return 0;

        uint8_t current_order = order;
        while (current_order <= kMaxOrder && free_lists_[current_order].empty()) {
            ++current_order;
        }
        if (current_order > kMaxOrder) return 0;

        elem_idx_t block = free_lists_[current_order].front();
        free_lists_[current_order].pop_front();
        while (current_order > order) {
            --current_order;
            const elem_idx_t buddy = block + (elem_idx_t{1} << current_order);
            free_lists_[current_order].push_back(buddy);
        }
        used_pages_ += elem_idx_t{1} << order;
        return block;
    }

    void free_idx(elem_idx_t block, uint8_t order) {
        uint8_t current_order = order;
        while (current_order < kMaxOrder) {
            const elem_idx_t buddy = block ^ (elem_idx_t{1} << current_order);
            auto& free_list = free_lists_[current_order];
            const auto it = std::find(free_list.begin(), free_list.end(), buddy);
            if (it == free_list.end()) break;
            free_list.erase(it);
            if (buddy < block) block = buddy;
            ++current_order;
        }
        free_lists_[current_order].push_back(block);
        assert(used_pages_ >= (elem_idx_t{1} << order));
        used_pages_ -= elem_idx_t{1} << order;
    }
};
