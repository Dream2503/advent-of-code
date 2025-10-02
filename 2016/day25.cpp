#include <algorithm>
#include <array>
#include <iostream>
#include <sstream>
#include "inputs.hpp"

/*
--- Day 25: Clock Signal ---
You open the door and find yourself on the roof. The city sprawls away from you for miles and miles.

There's not much time now - it's already Christmas, but you're nowhere near the North Pole, much too far to deliver these stars to the sleigh in time.

However, maybe the huge antenna up here can offer a solution. After all, the sleigh doesn't need the stars, exactly; it needs the timing data they
provide, and you happen to have a massive signal generator right here.

You connect the stars you have to your prototype computer, connect that to the antenna, and begin the transmission.

Nothing happens.

You call the service number printed on the side of the antenna and quickly explain the situation. "I'm not sure what kind of equipment you have
connected over there," he says, "but you need a clock signal." You try to explain that this is a signal for a clock.

"No, no, a clock signal - timing information so the antenna computer knows how to read the data you're sending it. An endless, alternating pattern of
0, 1, 0, 1, 0, 1, 0, 1, 0, 1...." He trails off.

You ask if the antenna can handle a clock signal at the frequency you would need to use for the data from the stars. "There's no way it can! The only
antenna we've installed capable of that is on top of a top-secret Easter Bunny installation, and you're definitely not-" You hang up the phone.

You've extracted the antenna's clock signal generation assembunny code (your puzzle input); it looks mostly compatible with code you worked on just
recently.

This antenna code, being a signal generator, uses one extra instruction:
    - out x transmits x (either an integer or the value of a register) as the next value for the clock signal.

The code takes a value (via register a) that describes the signal to generate, but you're not sure how it's used. You'll have to find the input to
produce the right signal through experimentation.

What is the lowest positive integer that can be used to initialize register a and cause the code to output a clock signal of 0, 1, 0, 1... repeating
forever?
*/

int part1(const int init_c = 0) {
    constexpr int threshold = 7;
    std::string line;
    std::vector<std::string> code;
    std::stringstream file(input25);

    while (std::getline(file, line)) {
        code.push_back(line);
    }
    const int size = code.size();
    int k = 0;

    while (true) {
        std::array registers = {k, 0, 0, 0};
        int i = 0, j = 0;

        while (i < size) {
            char ch, reg;
            int value;
            std::string instruction;
            std::stringstream ss(code[i]);
            ss >> instruction;

            if (instruction == "cpy") {
                ss.ignore(1);
                ch = ss.peek();

                if (ch >= 'a' && ch <= 'd') {
                    ss >> ch >> reg;
                    registers[reg - 'a'] = registers[ch - 'a'];
                } else {
                    ss >> value >> reg;
                    registers[reg - 'a'] = value;
                }
            } else if (instruction == "inc" || instruction == "dec") {
                ss >> reg;
                registers[reg - 'a'] += instruction == "inc" ? 1 : -1;
            } else if (instruction == "jnz") {
                ss.ignore(1);
                ch = ss.peek();

                if (ch >= 'a' && ch <= 'd') {
                    ss >> reg;

                    if (registers[reg - 'a']) {
                        ss >> value;
                        i += value - 1;
                    }
                } else {
                    ss >> value;

                    if (value) {
                        ss >> value;
                        i += value - 1;
                    }
                }
            } else {
                ss >> reg;

                if (j % 2 != registers[reg - 'a']) {
                    break;
                }
                if (j >= threshold) {
                    return k;
                }
                j++;
            }
            i++;
        }
        k++;
    }
    return -1;
}

/*
--- Part Two ---
*/

int part2() { return 0; }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
