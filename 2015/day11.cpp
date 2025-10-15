#include "inputs.hpp"

/*
--- Day 11: Corporate Policy ---
Santa's previous password expired, and he needs help choosing a new one.

To help him remember his new password after the old one expires, Santa has devised a method of coming up with a password based on the previous one.
Corporate policy dictates that passwords must be exactly eight lowercase letters (for security reasons), so he finds his new password by incrementing
his old password string repeatedly until it is valid.

Incrementing is just like counting with numbers: xx, xy, xz, ya, yb, and so on. Increase the rightmost letter one step; if it was z, it wraps around
to a, and repeat with the next letter to the left until one doesn't wrap around.

Unfortunately for Santa, a new Security-Elf recently started, and he has imposed some additional password requirements:
    - Passwords must include one increasing straight of at least three letters, like abc, bcd, cde, and so on, up to xyz. They cannot skip letters;
abd doesn't count.
    - Passwords may not contain the letters i, o, or l, as these letters can be mistaken for other characters and are therefore confusing.
    - Passwords must contain at least two different, non-overlapping pairs of letters, like aa, bb, or zz.

For example:
    - hijklmmn meets the first requirement (because it contains the straight hij) but fails the second requirement requirement (because it contains i
      and l).
    - abbceffg meets the third requirement (because it repeats bb and ff) but fails the first requirement.
    - abbcegjk fails the third requirement, because it only has one double letter (bb).
    - The next password after abcdefgh is abcdffaa.
    - The next password after ghijklmn is ghjaabcc, because you eventually skip all the passwords that start with ghi..., since i is not allowed.

    Given Santa's current password (your puzzle input), what should his next password be?
*/

std::string part1(std::string input = input11) {
    const int size = input.length();

    while (true) {
        bool contains_increasing_straight = false, on_pair = false;
        int pair_count = 0;

        for (auto itr = input.rbegin(); itr != input.rend(); ++itr) {
            if (*itr != 'z') {
                (*itr)++;

                if (*itr == 'i' || *itr == 'o' || *itr == 'l') {
                    (*itr)++;

                    if (itr == input.rbegin()) {
                        break;
                    }
                    for (--itr; itr != input.rbegin(); --itr) {
                        *itr = 'a';
                    }
                    *itr = 'a';
                }
                break;
            }
            *itr = 'a';
        }
        for (int i = 0; i < size - 2; i++) {
            if (input[i] + 1 == input[i + 1] && input[i + 1] + 1 == input[i + 2]) {
                contains_increasing_straight = true;
            }
            if (input[i] == input[i + 1] && !on_pair) {
                on_pair = true;
                pair_count++;
            } else {
                on_pair = false;
            }
        }
        if (input[size - 2] == input[size - 1] && !on_pair) {
            pair_count++;
        }
        if (contains_increasing_straight && pair_count >= 2) {
            return input;
        }
    }
}

/*
--- Part Two ---
Santa's password expired again. What's the next one?
*/

std::string part2() { return part1(part1()); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
