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

uint32_t part1(const bool all = false) {
    std::string line;
    std::vector<std::pair<uint32_t, uint32_t>> ranges;
    std::stringstream file(input20);

    while (std::getline(file, line)) {
        uint32_t low, high;
        std::sscanf(line.c_str(), "%udx%ud", &low, &high);
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
                return low + 1;
            }
            count += low - prev_end;
        }
        if (high == UINT32_MAX) {
            return count;
        }
        prev_end = high + 1;
    }
    if (prev_end <= UINT32_MAX) {
        count += UINT32_MAX - prev_end + 1;
    }
    return count;
}

/*
--- Part Two ---
How many IPs are allowed by the blacklist?
*/

uint32_t part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
