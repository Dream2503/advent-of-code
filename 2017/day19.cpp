#include <algorithm>
#include <iostream>
#include <sstream>
#include "inputs.hpp"

/*
--- Day 19: A Series of Tubes ---
Somehow, a network packet got lost and ended up here. It's trying to follow a routing diagram (your puzzle input), but it's confused about where to
go.

Its starting point is just off the top of the diagram. Lines (drawn with |, -, and +) show the path it needs to take, starting by going down onto the
only line connected to the top of the diagram. It needs to follow this path until it reaches the end (located somewhere within the diagram) and stop
there.

Sometimes, the lines cross over each other; in these cases, it needs to continue going the same direction, and only turn left or right when there's no
other option. In addition, someone has left letters on the line; these also don't change its direction, but it can use them to keep track of where
it's been. For example:
     |
     |  +--+
     A  |  C
 F---|----E|--+
     |  |  |  D
     +B-+  +--+


Given this diagram, the packet needs to take the following path:
    - Starting at the only line touching the top of the diagram, it must go down, pass through A, and continue onward to the first +.
    - Travel right, up, and right, passing through B in the process.
    - Continue down (collecting C), right, and up (collecting D).
    - Finally, go all the way left through E and stopping at F.

Following the path to the end, the letters it sees on its path are ABCDEF.

The little packet looks up at you, hoping you can help it find the way. What letters will it see (in the order it would see them) if it follows the
path? (The routing diagram is very wide; make sure you view it without line wrapping.)
*/

std::string part1(const bool steps = false) {
    enum Direction { UP, DOWN, LEFT, RIGHT, STOP };
    int row_size = 0, step_count = 0;
    std::string line, res;
    std::vector<std::string> diagram;
    std::stringstream file(input19);

    while (std::getline(file, line)) {
        diagram.push_back(line);
        row_size = std::max<int>(row_size, line.length());
    }
    for (std::string& str : diagram) {
        str.append(row_size - str.size(), ' ');
    }
    Direction current = DOWN;
    const int size = diagram.size();
    int i = 0, j = diagram[0].find('|');

    while (current != STOP) {
        if (i < 0 || i >= size || j < 0 || j >= row_size || diagram[i][j] == ' ') {
            current = STOP;
        } else if (std::isalnum(diagram[i][j])) {
            res.push_back(diagram[i][j]);
        } else if (diagram[i][j] == '+') {
            if (current != DOWN && i > 0 && diagram[i - 1][j] != ' ') {
                current = UP;
            } else if (current != UP && i < size - 1 && diagram[i + 1][j] != ' ') {
                current = DOWN;
            } else if (current != RIGHT && j > 0 && diagram[i][j - 1] != ' ') {
                current = LEFT;
            } else if (current != LEFT && j < row_size - 1 && diagram[i][j + 1] != ' ') {
                current = RIGHT;
            } else {
                current = STOP;
            }
        }
        switch (current) {
        case UP:
            i--;
            break;

        case DOWN:
            i++;
            break;

        case LEFT:
            j--;
            break;

        case RIGHT:
            j++;
            break;

        case STOP:
            break;
        }
        step_count++;
    }
    return steps ? std::to_string(step_count - 1) : res;
}

/*
--- Part Two ---
The packet is curious how many steps it needs to go.

For example, using the same routing diagram from the example above...
     |
     |  +--+
     A  |  C
 F---|--|-E---+
     |  |  |  D
     +B-+  +--+


...the packet would go:
    - 6 steps down (including the first line at the top of the diagram).
    - 3 steps right.
    - 4 steps up.
    - 3 steps right.
    - 4 steps down.
    - 3 steps right.
    - 2 steps up.
    - 13 steps left (including the F it stops on).

This would result in a total of 38 steps.

How many steps does the packet need to go?
*/

std::string part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
