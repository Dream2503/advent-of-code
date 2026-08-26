#include "inputs.hpp"

/*
--- Day 10: Elves Look, Elves Say ---
Today, the Elves are playing a game called look-and-say. They take turns making sequences by reading aloud the previous sequence and using that
reading as the next sequence. For example, 211 is read as "one two, two ones", which becomes 1221 (1 2, 2 1s).

Look-and-say sequences are generated iteratively, using the previous value as input for the next step. For each step, take the previous value, and
replace each run of digits (like 111) with the number of digits (3) followed by the digit itself (1).

For example:
    - 1 becomes 11 (1 copy of digit 1).
    - 11 becomes 21 (2 copies of digit 1).
    - 21 becomes 1211 (one 2 followed by one 1).
    - 1211 becomes 111221 (one 1, one 2, and two 1s).
    - 111221 becomes 312211 (three 1s, two 2s, and one 1).

Starting with the digits in your puzzle input, apply this process 40 times. What is the length of the result?
*/

int part1(const char* input, const int repeat) {
    std::string str(input), res;

    for (int k = 0; k < repeat; k++) {
        const int size = str.length();
        int i = 0;

        while (i < size) {
            const char ch = str[i];
            int j = 0;

            while (j < size && str[i] == ch) {
                i++;
                j++;
            }
            res += j + '0';
            res += str[i - 1];
        }
        str = res;
        res.clear();
    }
    return str.length();
}

/*
--- Part Two ---
Neat, right? You might also enjoy hearing John Conway talking about this sequence (that's Conway of Conway's Game of Life fame).

Now, starting again with the digits in your puzzle input, apply this process 50 times. What is the length of the new result?
*/

int part2(const char* input) { return part1(input, 50); }

int main() {
    std::println("Part 1:");
    Executor::test(part1, "1", 1, 2);
    Executor::test(part1, "11", 1, 2);
    Executor::test(part1, "21", 1, 4);
    Executor::test(part1, "1211", 1, 6);
    Executor::test(part1, "111221", 1, 6);
    Executor::run(part1, input10, 40);

    std::println("Part 2:");
    Executor::run(part2, input10);

    return 0;
}
