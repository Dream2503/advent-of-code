#include "inputs.hpp"

/*
--- Day 3: No Matter How You Slice It ---
The Elves managed to locate the chimney-squeeze prototype fabric for Santa's suit (thanks to someone who helpfully wrote its box IDs on the wall of
the warehouse in the middle of the night). Unfortunately, anomalies are still affecting them - nobody can even agree on how to cut the fabric.

The whole piece of fabric they're working on is a very large square - at least 1000 inches on each side.

Each Elf has made a claim about which area of fabric would be ideal for Santa's suit. All claims have an ID and consist of a single rectangle with
edges parallel to the edges of the fabric. Each claim's rectangle is defined as follows:
    - The number of inches between the left edge of the fabric and the left edge of the rectangle.
    - The number of inches between the top edge of the fabric and the top edge of the rectangle.
    - The width of the rectangle in inches.
    - The height of the rectangle in inches.

A claim like #123 @ 3,2: 5x4 means that claim ID 123 specifies a rectangle 3 inches from the left edge, 2 inches from the top edge, 5 inches wide, and
4 inches tall. Visually, it claims the square inches of fabric represented by # (and ignores the square inches of fabric represented by .) in the
diagram below:
...........
...........
...#####...
...#####...
...#####...
...#####...
...........
...........
...........

The problem is that many of the claims overlap, causing two or more claims to cover part of the same areas. For example, consider the following
claims:
#1 @ 1,3: 4x4
#2 @ 3,1: 4x4
#3 @ 5,5: 2x2

Visually, these claim the following areas:
........
...2222.
...2222.
.11XX22.
.11XX22.
.111133.
.111133.
........

The four square inches marked with X are claimed by both 1 and 2. (Claim 3, while adjacent to the others, does not overlap either of them.)

If the Elves all proceed with their own plans, none of them will have enough fabric. How many square inches of fabric are within two or more claims?
*/

int part1(const bool distinct = false) {
    std::string line;
    std::array<std::array<int, 1000>, 1000> fabric = {};
    std::vector<std::tuple<int, int, int, int, int>> coordinates;
    std::stringstream file(input3);

    while (std::getline(file, line)) {
        int id, y, x, j, i;
        std::sscanf(line.c_str(), "#%d @ %d,%d: %dx%d", &id, &y, &x, &j, &i);
        coordinates.emplace_back(id, x, y, x + i, y + j);

        for (int l = x; l < x + i; l++) {
            for (int k = y; k < y + j; k++) {
                fabric[l][k]++;
            }
        }
    }
    for (const auto& [id, x_start, y_start, x_end, y_end] : coordinates) {
        bool unique = true;

        for (int i = x_start; i < x_end; i++) {
            for (int j = y_start; j < y_end; j++) {
                if (fabric[i][j] > 1) {
                    unique = false;
                    break;
                }
            }
        }
        if (distinct && unique) {
            return id;
        }
    }
    return std::transform_reduce(fabric.begin(), fabric.end(), 0, std::plus(), [](const std::array<int, 1000>& row) -> int {
        return std::ranges::count_if(row, [](const int value) -> bool { return value > 1; });
    });
}

/*
--- Part Two ---
Amidst the chaos, you notice that exactly one claim doesn't overlap by even a single square inch of fabric with any other claim. If you can somehow
draw attention to it, maybe the Elves will be able to make Santa's suit after all!

For example, in the claims above, only claim 3 is intact after all claims are made.
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
