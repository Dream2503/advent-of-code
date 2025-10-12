#include <algorithm>
#include <iostream>
#include <numeric>
#include <sstream>
#include "inputs.hpp"

/*
--- Day 16: Permutation Promenade ---
You come upon a very unusual sight; a group of programs here appear to be dancing.

There are sixteen programs in total, named a through p. They start by standing in a line: a stands in position 0, b stands in position 1, and so on
until p, which stands in position 15.

The programs' dance consists of a sequence of dance moves:
    - Spin, written sX, makes X programs move from the end to the front, but maintain their order otherwise. (For example, s3 on abcde produces
      cdeab).
    - Exchange, written xA/B, makes the programs at positions A and B swap places.
    - Partner, written pA/B, makes the programs named A and B swap places.

For example, with only five programs standing in a line (abcde), they could do the following dance:
    - s1, a spin of size 1: eabcd.
    - x3/4, swapping the last two programs: eabdc.
    - pe/b, swapping programs e and b: baedc.

After finishing their dance, the programs end up in order baedc.


You watch the dance for a while and record their dance moves (your puzzle input). In what order are the programs standing after their dance?
*/

std::string part1(const int times = 1) {
    std::string programs(16, 0), step;
    std::vector<std::string> history;
    std::unordered_map<std::string, int> seen;
    std::iota(programs.begin(), programs.end(), 'a');

    for (int i = 0; i < times; i++) {
        if (seen.contains(programs)) {
            int cycle_start = seen[programs], cycle_length = i - cycle_start, remaining = (times - i) % cycle_length;
            return history[cycle_start + remaining];
        }
        seen.emplace(programs, i);
        history.push_back(programs);
        std::stringstream file(input16);

        while (std::getline(file, step, ',')) {
            std::stringstream ss(step);
            int value, lhs, rhs;

            switch (ss.get()) {
            case 's':
                ss >> value;
                std::ranges::rotate(programs, programs.end() - value);
                break;

            case 'x':
                (ss >> lhs).ignore(1) >> rhs;
                std::swap(programs[lhs], programs[rhs]);
                break;

            case 'p':
                lhs = std::ranges::find(programs, ss.get()) - programs.begin();
                rhs = std::ranges::find(programs, ss.ignore(1).get()) - programs.begin();
                std::swap(programs[lhs], programs[rhs]);

            default:
                break;
            }
        }
    }
    return programs;
}

/*
--- Part Two ---
Now that you're starting to get a feel for the dance moves, you turn your attention to the dance as a whole.

Keeping the positions they ended up in from their previous dance, the programs perform it again and again: including the first dance, a total of one
billion (1000000000) times.

In the example above, their second dance would begin with the order baedc, and use the same dance moves:
    - s1, a spin of size 1: cbaed.
    - x3/4, swapping the last two programs: cbade.
    - pe/b, swapping programs e and b: ceadb.

In what order are the programs standing after their billion dances?
*/

std::string part2() { return part1(1'000'000'000); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
