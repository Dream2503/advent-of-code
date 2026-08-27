#include "inputs.hpp"

/*
--- Day 13: Transparent Origami ---
You reach another volcanically active part of the cave. It would be nice if you could do some kind of thermal imaging so you could tell ahead of time
which caves are too hot to safely enter.

Fortunately, the submarine seems to be equipped with a thermal camera! When you activate it, you are greeted with:
Congratulations on your purchase! To activate this infrared thermal imaging
camera system, please enter the code found on page 1 of the manual.

Apparently, the Elves have never used this feature. To your surprise, you manage to find the manual; as you go to open it, page 1 falls out. It's a
large sheet of transparent paper! The transparent paper is marked with random dots and includes instructions on how to fold it up (your puzzle input).
For example:
6,10
0,14
9,10
0,3
10,4
4,11
6,0
6,12
4,1
0,13
10,12
3,4
3,0
8,4
1,10
2,14
8,10
9,0

fold along y=7
fold along x=5

The first section is a list of dots on the transparent paper. 0,0 represents the top-left coordinate. The first value, x, increases to the right. The
second value, y, increases downward. So, the coordinate 3,0 is to the right of 0,0, and the coordinate 0,7 is below 0,0. The coordinates in this
example form the following pattern, where # is a dot on the paper and . is an empty, unmarked position:
...#..#..#.
....#......
...........
#..........
...#....#.#
...........
...........
...........
...........
...........
.#....#.##.
....#......
......#...#
#..........
#.#........

Then, there is a list of fold instructions. Each instruction indicates a line on the transparent paper and wants you to fold the paper up (for
horizontal y=... lines) or left (for vertical x=... lines). In this example, the first fold instruction is fold along y=7, which designates the line
formed by all of the positions where y is 7 (marked here with -):
...#..#..#.
....#......
...........
#..........
...#....#.#
...........
...........
-----------
...........
...........
.#....#.##.
....#......
......#...#
#..........
#.#........

Because this is a horizontal line, fold the bottom half up. Some of the dots might end up overlapping after the fold is complete, but dots will never
appear exactly on a fold line. The result of doing this fold looks like this:
#.##..#..#.
#...#......
......#...#
#...#......
.#.#..#.###
...........
...........

Now, only 17 dots are visible.

Notice, for example, the two dots in the bottom left corner before the transparent paper is folded; after the fold is complete, those dots appear in
the top left corner (at 0,0 and 0,1). Because the paper is transparent, the dot just below them in the result (at 0,3) remains visible, as it can be
seen through the transparent paper.

Also notice that some dots can end up overlapping; in this case, the dots merge together and become a single dot.

The second fold instruction is fold along x=5, which indicates this line:
#.##.|#..#.
#...#|.....
.....|#...#
#...#|.....
.#.#.|#.###
.....|.....
.....|.....

Because this is a vertical line, fold left:
#####
#...#
#...#
#...#
#####
.....
.....

The instructions made a square!

The transparent paper is pretty big, so for now, focus on just completing the first fold. After the first fold in the example above, 17 dots are
visible - dots that end up overlapping after the fold is completed count as a single dot.

How many dots are visible after completing just the first fold instruction on your transparent paper?
*/

int part1(const char* input, const int fold = 1) {
    std::string line;
    std::vector<Vec2<int>> coordinates;
    std::vector<std::pair<char, int>> folds;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        if (line.empty()) {
            break;
        }
        coordinates.push_back({});
        std::sscanf(line.c_str(), "%d,%d", &coordinates.back().x, &coordinates.back().y);
    }
    while (std::getline(file, line)) {
        folds.push_back({});
        std::sscanf(line.c_str(), "fold along %c=%d", &folds.back().first, &folds.back().second);
    }
    int size_x = std::ranges::max(coordinates, {}, &Vec2<int>::x).x + 1;
    int size_y = std::ranges::max(coordinates, {}, &Vec2<int>::y).y + 1;
    std::vector grid(size_y, std::string(size_x, ' '));

    for (const auto [x, y] : coordinates) {
        grid[y][x] = '#';
    }
    for (const auto& [axis, value] : folds | std::views::take(fold)) {
        size_x = grid[0].size();
        size_y = grid.size();

        if (axis == 'y') {
            for (int i = value - 1, j = value + 1; i >= 0 && j < size_y; i--, j++) {
                for (int k = 0; k < size_x; k++) {
                    if (grid[j][k] == '#') {
                        grid[i][k] = '#';
                    }
                }
            }
            grid.resize(value);
        } else {
            for (int i = 0; i < size_y; i++) {
                for (int j = value - 1, k = value + 1; j >= 0 && k < size_x; j--, k++) {
                    if (grid[i][k] == '#') {
                        grid[i][j] = '#';
                    }
                }
                grid[i].resize(value);
            }
        }
    }
    if (fold == INT32_MAX) {
        std::println("{:\n}", grid);
    }
    return std::ranges::count(grid | std::views::join, '#');
}

/*
--- Part Two ---
Finish folding the transparent paper according to the instructions. The manual says the code is always eight capital letters.

What code do you use to activate the infrared thermal imaging camera system?
*/

int part2(const char* input) { return part1(input, INT32_MAX); }

int main() {
    std::println("Part 1:");
    Executor::test(part1, R"(6,10
0,14
9,10
0,3
10,4
4,11
6,0
6,12
4,1
0,13
10,12
3,4
3,0
8,4
1,10
2,14
8,10
9,0

fold along y=7
fold along x=5)",
                   1, 17);
    Executor::run(part1, input13, 1);

    std::println("Part 2:");
    Executor::run(part2, input13);

    return 0;
}
