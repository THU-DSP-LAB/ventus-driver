#pragma once

#include <algorithm>
#include <cstdint>
#include <map>
#include <sstream>
#include <string>
#include <vector>

namespace ventus {
namespace rtl_state {

struct AllocationRecord {
    uint64_t address = 0;
    uint64_t requested_size = 0;
    uint64_t allocated_size = 0;
    int buffer_type = 0;
    uint64_t task_id = 0;
    uint64_t kernel_id = 0;
    uint64_t sequence = 0;
};

class AllocationContract {
public:
    void reset() {
        restoring_ = false;
        rebound_ = false;
        expected_.clear();
        expected_bound_.clear();
        bound_count_ = 0;
        active_.clear();
        next_sequence_ = 0;
    }

    bool begin_restore(
        const std::vector<AllocationRecord>& expected, std::string& error) {
        reset();
        uint64_t previous_sequence = 0;
        bool first = true;
        std::map<uint64_t, bool> addresses;
        for (const auto& record : expected) {
            if (record.address == 0 || record.requested_size == 0
                || record.allocated_size < record.requested_size
                || (!first && record.sequence <= previous_sequence)
                || !addresses.emplace(record.address, true).second) {
                error = "invalid persistent allocation contract";
                reset();
                return false;
            }
            previous_sequence = record.sequence;
            first = false;
        }
        restoring_ = true;
        expected_ = expected;
        expected_bound_.assign(expected_.size(), false);
        for (const auto& record : expected_) {
            active_.emplace(record.address, record);
        }
        next_sequence_ = expected.empty() ? 0 : expected.back().sequence + 1;
        return true;
    }

    bool claim_restore_allocation(
        uint64_t requested_size, int buffer_type, uint64_t task_id,
        uint64_t kernel_id, AllocationRecord& claimed, std::string& error) {
        if (!restoring_ || rebound_) {
            error = "persistent allocation claim is not active";
            return false;
        }
        for (size_t index = 0; index < expected_.size(); ++index) {
            if (expected_bound_[index]) continue;
            const auto& expected = expected_[index];
            if (expected.requested_size != requested_size
                || expected.buffer_type != buffer_type
                || expected.task_id != task_id
                || expected.kernel_id != kernel_id) {
                continue;
            }
            expected_bound_[index] = true;
            ++bound_count_;
            claimed = expected;
            return true;
        }
        error = "allocation does not match an unbound persistent record";
        return false;
    }

    bool record_alloc(
        uint64_t address, uint64_t requested_size, uint64_t allocated_size,
        int buffer_type, uint64_t task_id, uint64_t kernel_id,
        std::string& error) {
        AllocationRecord observed = {
            address,
            requested_size,
            allocated_size,
            buffer_type,
            task_id,
            kernel_id,
            next_sequence_,
        };
        if (restoring_ && !rebound_) {
            AllocationRecord expected;
            if (!claim_restore_allocation(
                    requested_size, buffer_type, task_id, kernel_id,
                    expected, error)) {
                return false;
            }
            if (!same_request(observed, expected)) {
                std::ostringstream message;
                message << "persistent allocation address mismatch: expected address=0x"
                        << std::hex << expected.address << " size=0x"
                        << expected.requested_size << ", observed address=0x"
                        << observed.address << " size=0x"
                        << observed.requested_size;
                error = message.str();
                return false;
            }
            observed.sequence = expected.sequence;
        } else {
            if (active_.find(address) != active_.end()) {
                error = "allocation address is already active";
                return false;
            }
            ++next_sequence_;
            active_.emplace(address, observed);
        }
        return true;
    }

    bool record_free(uint64_t address, uint64_t size, std::string& error) {
        if (restoring_ && !rebound_) {
            error = "free occurred before persistent rebind completed";
            return false;
        }
        const auto found = active_.find(address);
        if (found == active_.end() || found->second.requested_size != size) {
            error = "free does not match an active allocation";
            return false;
        }
        active_.erase(found);
        return true;
    }

    bool finish_rebind(std::string& error) {
        if (!restoring_ || rebound_) {
            error = "persistent rebind is not active";
            return false;
        }
        if (bound_count_ != expected_.size()) {
            std::ostringstream message;
            message << "persistent rebind is missing "
                    << (expected_.size() - bound_count_) << " allocations";
            error = message.str();
            return false;
        }
        rebound_ = true;
        return true;
    }

    bool finish_rebind_with_dormant(std::string& error) {
        if (!restoring_ || rebound_) {
            error = "persistent rebind is not active";
            return false;
        }
        if (bound_count_ == 0) {
            error = "persistent rebind did not bind any allocations";
            return false;
        }
        rebound_ = true;
        return true;
    }

    bool restoring() const { return restoring_; }
    bool rebound() const { return rebound_; }
    bool compare_only() const { return restoring_ && !rebound_; }
    size_t expected_cursor() const { return bound_count_; }
    size_t expected_count() const { return expected_.size(); }
    size_t dormant_count() const { return expected_.size() - bound_count_; }

    std::vector<AllocationRecord> active_allocations() const {
        std::vector<AllocationRecord> result;
        result.reserve(active_.size());
        for (const auto& entry : active_) result.push_back(entry.second);
        std::sort(
            result.begin(), result.end(),
            [](const AllocationRecord& lhs, const AllocationRecord& rhs) {
                return lhs.sequence < rhs.sequence;
            });
        return result;
    }

private:
    static bool same_request(
        const AllocationRecord& lhs, const AllocationRecord& rhs) {
        return lhs.address == rhs.address
            && lhs.requested_size == rhs.requested_size
            && lhs.allocated_size == rhs.allocated_size
            && lhs.buffer_type == rhs.buffer_type
            && lhs.task_id == rhs.task_id
            && lhs.kernel_id == rhs.kernel_id;
    }

    bool restoring_ = false;
    bool rebound_ = false;
    std::vector<AllocationRecord> expected_;
    std::vector<bool> expected_bound_;
    size_t bound_count_ = 0;
    std::map<uint64_t, AllocationRecord> active_;
    uint64_t next_sequence_ = 0;
};

} // namespace rtl_state
} // namespace ventus
