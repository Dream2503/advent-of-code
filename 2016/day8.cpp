#include <algorithm>
#include <bitset>
#include <iostream>
#include <numeric>
#include <sstream>
#include "inputs.hpp"

/*
--- Day 8: Two-Factor Authentication ---
You come across a door implementing what you can only assume is an implementation of two-factor authentication after a long game of requirements
telephone.

To get past the door, you first swipe a keycard (no problem; there was one on a nearby desk). Then, it displays a code on a little screen, and you
type that code on a keypad. Then, presumably, the door unlocks.

Unfortunately, the screen has been smashed. After a few minutes, you've taken everything apart and figured out how it works. Now you just have to work
out what the screen would have displayed.

The magnetic strip on the card you swiped encodes a series of instructions for the screen; these instructions are your puzzle input. The screen is 50
pixels wide and 6 pixels tall, all of which start off, and is capable of three somewhat peculiar operations:

rect AxB turns on all of the pixels in a rectangle at the top-left of the screen which is A wide and B tall.
rotate row y=A by B shifts all of the pixels in row A (0 is the top row) right by B pixels. Pixels that would fall off the right end appear at the
left end of the row. rotate column x=A by B shifts all of the pixels in column A (0 is the left column) down by B pixels. Pixels that would fall off
the bottom appear at the top of the column. For example, here is a simple sequence on a smaller screen:
    - rect 3x2 creates a small rectangle in the top-left corner:
      ###....
      ###....
      .......

    - rotate column x=1 by 1 rotates the second column down by one pixel:
      #.#....
      ###....
      .#.....

    - rotate row y=0 by 4 rotates the top row right by four pixels:
      ....#.#
      ###....
      .#.....

    - rotate column x=1 by 1 again rotates the second column down by one pixel, causing the bottom pixel to wrap back to the top:
      .#..#.#
      #.#....
      .#.....

As you can see, this display technology is extremely powerful, and will soon dominate the tiny-code-displaying-screen market. That's what the
advertisement on the back of the display tries to convince you, anyway.

There seems to be an intermediate check of the voltage used by the display: after you swipe your card, if the screen did work, how many pixels should
be lit?
*/

int part1(const bool is_print = false) {
    constexpr int width = 50, high = 6;
    std::string line;
    std::array<std::bitset<width>, high> screen;
    std::bitset<width> rotate_row;
    std::bitset<high> rotate_col;
    std::stringstream file(input8);

    while (std::getline(file, line)) {
        char x;
        int row, col, k, n;
        std::string instruction, word;
        std::stringstream ss(line);
        ss >> instruction;

        if (instruction == "rect") {
            ss >> col >> x >> row;

            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    screen[i][j] = true;
                }
            }
        } else {
            ss >> instruction >> x >> x >> k >> word >> n;

            if (instruction == "row") {
                for (int i = 0; i < width; i++) {
                    rotate_row[(n + i) % width] = screen[k][i];
                }
                for (int i = 0; i < width; i++) {
                    screen[k][i] = rotate_row[i];
                }
            } else {
                for (int i = 0; i < high; i++) {
                    rotate_col[(n + i) % high] = screen[i][k];
                }
                for (int i = 0; i < high; i++) {
                    screen[i][k] = rotate_col[i];
                }
            }
        }
    }
    if (is_print) {
        for (int i = 0; i < high; i++) {
            for (int j = 0; j < width; j++) {
                std::cout << (screen[i][j] ? '#' : ' ');
            }
            std::cout << std::endl;
        }
    }
    return std::transform_reduce(screen.begin(), screen.end(), 0, std::plus(), [](const std::bitset<width>& row) -> int { return row.count(); });
}

/*
--- Part Two ---
You notice that the screen is only capable of displaying capital letters; in the font it uses, each letter is 5 pixels wide and 6 tall.

After you swipe your card, what code is the screen trying to display?
*/

char part2() {
    part1(true);
    return ' ';
}

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
