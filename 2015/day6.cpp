#include <algorithm>
#include <iostream>
#include <numeric>
#include <sstream>
#include "inputs.hpp"

/*
--- Day 6: Probably a Fire Hazard ---
Because your neighbors keep defeating you in the holiday house decorating contest year after year, you've decided to deploy one million lights in a
1000x1000 grid.

Furthermore, because you've been especially nice this year, Santa has mailed you instructions on how to display the ideal lighting configuration.

Lights in your grid are numbered from 0 to 999 in each direction; the lights at each corner are at 0,0, 0,999, 999,999, and 999,0. The instructions
include whether to turn on, turn off, or toggle various inclusive ranges given as coordinate pairs. Each coordinate pair represents opposite corners
of a rectangle, inclusive; a coordinate pair like 0,0 through 2,2 therefore refers to 9 lights in a 3x3 square. The lights all start turned off.

To defeat your neighbors this year, all you have to do is set up your lights by doing the instructions Santa sent you in order.

For example:
    - turn on 0,0 through 999,999 would turn on (or leave on) every light.
    - toggle 0,0 through 999,0 would toggle the first line of 1000 lights, turning off the ones that were on, and turning on the ones that were off.
    - turn off 499,499 through 500,500 would turn off (or leave off) the middle four lights.

After following the instructions, how many lights are lit?
*/

int part1(const bool brightness = false) {
    constexpr int size = 1000;
    std::string line;
    std::array<std::array<uint8_t, size>, size> lights = {};
    std::stringstream file(input6);

    while (std::getline(file, line)) {
        bool is_on = false, is_toggle = false;
        int x1, y1, x2, y2;
        std::string instruction;
        std::stringstream ss(line);
        ss >> instruction;

        if (instruction == "turn") {
            ss >> instruction;
            is_on = instruction == "on";
        } else {
            is_toggle = true;
        }
        (((ss >> x1).ignore(1) >> y1).ignore(9) >> x2).ignore(1) >> y2;

        for (int i = x1; i <= x2; i++) {
            for (int j = y1; j <= y2; j++) {
                if (brightness) {
                    lights[i][j] += is_toggle ? 2 : is_on ? 1 : lights[i][j] != 0 ? -1 : 0;
                } else {
                    lights[i][j] = is_toggle ? !lights[i][j] : is_on;
                }
            }
        }
    }
    return std::transform_reduce(lights.begin(), lights.end(), 0, std::plus(),
                                 [](const std::array<uint8_t, size>& row) -> int { return std::reduce(row.begin(), row.end(), 0); });
}

/*
--- Part Two ---
You just finish implementing your winning light pattern when you realize you mistranslated Santa's message from Ancient Nordic Elvish.

The light grid you bought actually has individual brightness controls; each light can have a brightness of zero or more. The lights all start at zero.

The phrase turn on actually means that you should increase the brightness of those lights by 1.

The phrase turn off actually means that you should decrease the brightness of those lights by 1, to a minimum of zero.

The phrase toggle actually means that you should increase the brightness of those lights by 2.

What is the total brightness of all lights combined after following Santa's instructions?

For example:
    - turn on 0,0 through 0,0 would increase the total brightness by 1.
    - toggle 0,0 through 999,999 would increase the total brightness by 2000000.
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
