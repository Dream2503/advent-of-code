#include "inputs.hpp"

/*
--- Day 8: I Heard You Like Registers ---
You receive a signal directly from the CPU. Because of your recent assistance with jump instructions, it would like you to compute the result of a
series of unusual register instructions.

Each instruction consists of several parts: the register to modify, whether to increase or decrease that register's value, the amount by which to
increase or decrease it, and a condition. If the condition fails, skip the instruction without modifying the register. The registers all start at 0.
The instructions look like this:
b inc 5 if a > 1
a inc 1 if b < 5
c dec -10 if a >= 1
c inc -20 if c == 10

These instructions would be processed as follows:
    - Because a starts at 0, it is not greater than 1, and so b is not modified.
    - a is increased by 1 (to 1) because b is less than 5 (it is 0).
    - c is decreased by -10 (to 10) because a is now greater than or equal to 1 (it is 1).
    - c is increased by -20 (to -10) because c is equal to 10.

After this process, the largest value in any register is 1.

You might also encounter <= (less than or equal to) or != (not equal to). However, the CPU doesn't have the bandwidth to tell you what all the
registers are named, and leaves that to you to determine.

What is the largest value in any register after completing the instructions in your puzzle input?
*/

int part1(const bool max = false) {
    int res = 0;
    std::string line;
    std::stringstream file(input8);
    std::unordered_map<std::string, int> hash;

    while (std::getline(file, line)) {
        int value, condition;
        std::string reg1, instruction, reg2, opr;
        (std::stringstream(line) >> reg1 >> instruction >> value).ignore(4) >> reg2 >> opr >> condition;
        int& current = hash[reg1];
        const int check = hash[reg2];

        if ((opr == ">" && check > condition) || (opr == "==" && check == condition) || (opr == "<" && check < condition) ||
            (opr == ">=" && check >= condition) || (opr == "!=" && check != condition) || (opr == "<=" && check <= condition)) {
            current += instruction == "inc" ? value : -value;
            res = std::max(res, current);
        }
    }
    return max ? res : std::ranges::max_element(hash, {}, &std::pair<const std::string, int>::second)->second;
}

/*
--- Part Two ---
To be safe, the CPU also needs to know the highest value held in any register during this process so that it can decide how much memory to allocate to
these operations. For example, in the above instructions, the highest value ever held was 10 (in register c after the third instruction was
evaluated).
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
