#include "inputs.hpp"

/*
--- Day 17: No Such Thing as Too Much ---
The elves bought too much eggnog again - 150 liters this time. To fit it all into your refrigerator, you'll need to move it into smaller containers.
You take an inventory of the capacities of the available containers.

For example, suppose you have containers of size 20, 15, 10, 5, and 5 liters. If you need to store 25 liters, there are four ways to do it:
    - 15 and 10
    - 20 and 5 (the first 5)
    - 20 and 5 (the second 5)
    - 15, 5, and 5

Filling all containers entirely, how many different combinations of containers can exactly fit all 150 liters of eggnog?
*/

int part1(const char* input, const int liters, const bool min) {
    std::string line;
    std::vector<int> containers;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        containers.push_back(std::stoi(line));
    }
    const int size = containers.size();
    int res = 0, min_count = INT32_MAX;

    for (int mask = 0; mask < 1 << size; mask++) {
        int sum = 0;

        for (int i = 0; i < size; i++) {
            if (mask & 1 << i) {
                sum += containers[i];
            }
        }
        if (sum == liters) {
            if (min) {
                min_count = std::min(min_count, __builtin_popcount(mask));
            } else {
                res++;
            }
        }
    }
    if (min) {
        for (int mask = 0; mask < 1 << size; mask++) {
            int sum = 0;

            for (int i = 0; i < size; i++) {
                if (mask & 1 << i) {
                    sum += containers[i];
                }
            }
            if (sum == liters && __builtin_popcount(mask) == min_count) {
                res++;
            }
        }
    }
    return res;
}

/*
--- Part Two ---
While playing with all the containers in the kitchen, another load of eggnog arrives! The shipping and receiving department is requesting as many
containers as you can spare.

Find the minimum number of containers that can exactly fit all 150 liters of eggnog. How many different ways can you fill that number of containers
and still hold exactly 150 litres?

In the example above, the minimum number of containers was two. There were three ways to use that many containers, and so the answer there would be 3.
*/

int part2(const char* input, const int liters) { return part1(input, liters, true); }

int main() {
    std::println("Part 1:");
    Executor::test(part1, R"(20
15
10
5
5)",
                   25, false, 4);
    Executor::run(part1, input17, 150, false);

    std::println("Part 2:");
    Executor::test(part2, R"(20
15
10
5
5)",
                   25, 3);
    Executor::run(part2, input17, 150);

    return 0;
}
