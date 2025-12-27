#include "inputs.hpp"

/*
--- Day 4: Secure Container ---
You arrive at the Venus fuel depot only to discover it's protected by a password. The Elves had written the password on a sticky note, but someone
threw it out.

However, they do remember a few key facts about the password:
    - It is a six-digit number.
    - The value is within the range given in your puzzle input.
    - Two adjacent digits are the same (like 22 in 122345).
    - Going from left to right, the digits never decrease; they only ever increase or stay the same (like 111123 or 135679).

Other than the range rule, the following are true:
    - 111111 meets these criteria (double 11, never decreases).
    - 223450 does not meet these criteria (decreasing pair of digits 50).
    - 123789 does not meet these criteria (no double).

How many different passwords within the range given in your puzzle input meet these criteria?
*/

int part1(const bool updated = false) {
    int start, end, res = 0;
    std::sscanf(input4, "%d-%d", &start, &end);

    for (int i = start; i <= end; ++i) {
        std::string str = std::to_string(i);

        bool adjacent = false;
        bool increasing = true;

        for (int j = 0; j < 5; j++) {
            if (str[j] > str[j + 1]) {
                increasing = false;
                break;
            }
            if (str[j] == str[j + 1]) {
                if (!updated) {
                    adjacent = true;
                } else {
                    bool left = j == 0 || str[j] != str[j - 1];
                    bool right = j == 4 || str[j] != str[j + 2];

                    if (left && right) {
                        adjacent = true;
                    }
                }
            }
        }
        res += adjacent && increasing;
    }
    return res;
}


/*
--- Part Two ---
An Elf just remembered one more important detail: the two adjacent matching digits are not part of a larger group of matching digits.

Given this additional criterion, but still ignoring the range rule, the following are now true:
    - 112233 meets these criteria because the digits never decrease and all repeated digits are exactly two digits long.
    - 123444 no longer meets the criteria (the repeated 44 is part of a larger group of 444).
    - 111122 meets the criteria (even though 1 is repeated more than twice, it still contains a double 22).

How many different passwords within the range given in your puzzle input meet all of the criteria?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
