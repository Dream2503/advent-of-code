#include "inputs.hpp"

/*
--- Day 20: Firewall Rules ---
You'd like to set up a small hidden computer here so you can use it to get back into the network later. However, the corporate firewall only allows
communication with certain external IP addresses.

You've retrieved the list of blocked IPs from the firewall, but the list seems to be messy and poorly maintained, and it's not clear which IPs are
allowed. Also, rather than being written in dot-decimal notation, they are written as plain 32-bit integers, which can have any value from 0 through
4294967295, inclusive.

For example, suppose only the values 0 through 9 were valid, and that you retrieved the following blacklist:
5-8
0-2
4-7

The blacklist specifies ranges of IPs (inclusive of both the start and end value) that are not allowed. Then, the only IPs that this firewall allows
are 3 and 9, since those are the only numbers not in any range.

Given the list of blocked IPs you retrieved from the firewall (your puzzle input), what is the lowest-valued IP that is not blocked?
*/

uint32_t part1(const char* input, const bool all = false, const uint32_t max = UINT32_MAX) {
    std::string line;
    std::vector<std::pair<uint32_t, uint32_t>> ranges;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        uint32_t low, high;
        std::sscanf(line.c_str(), "%u-%u", &low, &high);
        ranges.emplace_back(low, high);
    }
    std::ranges::sort(ranges);
    std::vector<std::pair<uint32_t, uint32_t>> merged;

    for (const std::pair<uint32_t, uint32_t>& range : ranges) {
        if (merged.empty() || range.first > merged.back().second + 1) {
            merged.push_back(range);
        } else {
            merged.back().second = std::max(merged.back().second, range.second);
        }
    }
    uint32_t count = 0, prev_end = 0;

    for (const auto& [low, high] : merged) {
        if (prev_end < low) {
            if (!all) {
                return prev_end;
            }
            count += low - prev_end;
        }
        if (high == max) {
            return count;
        }
        prev_end = high + 1;
    }

    count += max - prev_end + 1;
    return count;
}

/*
--- Part Two ---
How many IPs are allowed by the blacklist?
*/

uint32_t part2(const char* input, const uint32_t max = UINT32_MAX) { return part1(input, true, max); }

int main() {
    std::println("Part 1:");
    Executor::test(part1, R"(5-8
0-2
4-7)",
                   false, UINT32_MAX, 3);
    Executor::run(part1, input20, false, UINT32_MAX);

    std::println("Part 2:");
    Executor::test(part2, R"(5-8
0-2
4-7)",
                   9, 2);
    Executor::run(part2, input20, UINT32_MAX);

    return 0;
}
