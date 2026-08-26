#include "inputs.hpp"

/*
--- Day 1: Report Repair ---
After saving Christmas five years in a row, you've decided to take a vacation at a nice resort on a tropical island. Surely, Christmas will go on
without you.

The tropical island has its own currency and is entirely cash-only. The gold coins used there have a little picture of a starfish; the locals just
call them stars. None of the currency exchanges seem to have heard of them, but somehow, you'll need to find fifty of these coins by the time you
arrive so you can pay the deposit on your room.

To save your vacation, you need to get all fifty stars by December 25th.

Collect stars by solving puzzles. Two puzzles will be made available on each day in the Advent calendar; the second puzzle is unlocked when you
complete the first. Each puzzle grants one star. Good luck!

Before you leave, the Elves in accounting just need you to fix your expense report (your puzzle input); apparently, something isn't quite adding up.

Specifically, they need you to find the two entries that sum to 2020 and then multiply those two numbers together.

For example, suppose your expense report contained the following:
1721
979
366
299
675
1456

In this list, the two entries that sum to 2020 are 1721 and 299. Multiplying them together produces 1721 * 299 = 514579, so the correct answer is
514579.

Of course, your expense report is much larger. Find the two entries that sum to 2020; what do you get if you multiply them together?
*/

int part1(const char* input, const bool three) {
    std::string line;
    std::unordered_set<int> expenses;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        expenses.insert(std::stoi(line));
    }
    if (three) {
        for (const int lhs : expenses) {
            for (const int rhs : expenses) {
                if (expenses.contains(2020 - lhs - rhs)) {
                    return lhs * rhs * (2020 - lhs - rhs);
                }
            }
        }
    } else {
        for (const int expense : expenses) {
            if (expenses.contains(2020 - expense)) {
                return expense * (2020 - expense);
            }
        }
    }
    std::unreachable();
}

/*
--- Part Two ---
The Elves in accounting are thankful for your help; one of them even offers you a starfish coin they had left over from a past vacation. They offer
you a second one if you can find three numbers in your expense report that meet the same criteria.

Using the above example again, the three entries that sum to 2020 are 979, 366, and 675. Multiplying them together produces the answer, 241861950.

In your expense report, what is the product of the three entries that sum to 2020?
*/

int part2(const char* input) { return part1(input, true); }

int main() {
    std::println("Part 1:");
    Executor::test(part1,
                   R"(1721
979
366
299
675
1456)",
                   false, 514579);
    Executor::run(part1, input1, false);

    std::println("Part 2:");
    Executor::test(part2,
                   R"(1721
979
366
299
675
1456)",
                   241861950);
    Executor::run(part2, input1);

    return 0;
}
