#include "inputs.hpp"

/*
--- Day 18: Settlers of The North Pole ---
On the outskirts of the North Pole base construction project, many Elves are collecting lumber.

The lumber collection area is 50 acres by 50 acres; each acre can be either open ground (.), trees (|), or a lumberyard (#). You take a scan of the
area (your puzzle input).

Strange magic is at work here: each minute, the landscape looks entirely different. In exactly one minute, an open acre can fill with trees, a wooded
acre can be converted to a lumberyard, or a lumberyard can be cleared to open ground (the lumber having been sent to other projects).

The change to each acre is based entirely on the contents of that acre as well as the number of open, wooded, or lumberyard acres adjacent to it at
the start of each minute. Here, "adjacent" means any of the eight acres surrounding that acre. (Acres on the edges of the lumber collection area might
have fewer than eight adjacent acres; the missing acres aren't counted.)

In particular:
    - An open acre will become filled with trees if three or more adjacent acres contained trees. Otherwise, nothing happens.
    - An acre filled with trees will become a lumberyard if three or more adjacent acres were lumberyards. Otherwise, nothing happens.
    - An acre containing a lumberyard will remain a lumberyard if it was adjacent to at least one other lumberyard and at least one acre containing
      trees. Otherwise, it becomes open.

These changes happen across all acres simultaneously, each of them using the state of all acres at the beginning of the minute and changing to their
new form by the end of that same minute. Changes that happen during the minute don't affect each other.

For example, suppose the lumber collection area is instead only 10 by 10 acres with this initial configuration:
Initial state:
.#.#...|#.
.....#|##|
.|..|...#.
..|#.....#
#.#|||#|#|
...#.||...
.|....|...
||...#|.#|
|.||||..|.
...#.|..|.

After 1 minute:
.......##.
......|###
.|..|...#.
..|#||...#
..##||.|#|
...#||||..
||...|||..
|||||.||.|
||||||||||
....||..|.

After 2 minutes:
.......#..
......|#..
.|.|||....
..##|||..#
..###|||#|
...#|||||.
|||||||||.
||||||||||
||||||||||
.|||||||||

After 3 minutes:
.......#..
....|||#..
.|.||||...
..###|||.#
...##|||#|
.||##|||||
||||||||||
||||||||||
||||||||||
||||||||||

After 4 minutes:
.....|.#..
...||||#..
.|.#||||..
..###||||#
...###||#|
|||##|||||
||||||||||
||||||||||
||||||||||
||||||||||

After 5 minutes:
....|||#..
...||||#..
.|.##||||.
..####|||#
.|.###||#|
|||###||||
||||||||||
||||||||||
||||||||||
||||||||||

After 6 minutes:
...||||#..
...||||#..
.|.###|||.
..#.##|||#
|||#.##|#|
|||###||||
||||#|||||
||||||||||
||||||||||
||||||||||

After 7 minutes:
...||||#..
..||#|##..
.|.####||.
||#..##||#
||##.##|#|
|||####|||
|||###||||
||||||||||
||||||||||
||||||||||

After 8 minutes:
..||||##..
..|#####..
|||#####|.
||#...##|#
||##..###|
||##.###||
|||####|||
||||#|||||
||||||||||
||||||||||

After 9 minutes:
..||###...
.||#####..
||##...##.
||#....###
|##....##|
||##..###|
||######||
|||###||||
||||||||||
||||||||||

After 10 minutes:
.||##.....
||###.....
||##......
|##.....##
|##.....##
|##....##|
||##.####|
||#####|||
||||#|||||
||||||||||

After 10 minutes, there are 37 wooded acres and 31 lumberyards. Multiplying the number of wooded acres by the number of lumberyards gives the total
resource value after ten minutes: 37 * 31 = 1147.

What will the total resource value of the lumber collection area be after 10 minutes?
*/

constexpr int size = 50;

int part1(const int iteration = 10) {
    int i = 0, cycle_start = -1, cycle_len = -1;
    std::string line;
    std::array<std::string, size> graph;
    std::vector<int> values;
    std::unordered_map<std::string, int> seen;
    std::stringstream file(input18);

    while (std::getline(file, line)) {
        graph[i++] = line;
    }
    for (int k = 0; k < iteration; k++) {
        std::string key = std::reduce(graph.begin(), graph.end(), std::string());

        if (seen.contains(key)) {
            cycle_start = seen[key];
            cycle_len = k - cycle_start;
            break;
        }
        std::array<std::string, size> copy = graph;
        seen[key] = k;

        for (i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                int tree = 0, lumberyard = 0;

                for (const auto& [dx, dy] : directions_complete) {
                    const int x = i + dx, y = j + dy;

                    if (x >= 0 && y >= 0 && x < size && y < size) {
                        switch (graph[x][y]) {
                        case '|':
                            tree++;
                            break;

                        case '#':
                            lumberyard++;
                            break;

                        default:
                            break;
                        }
                    }
                }
                switch (graph[i][j]) {
                case '.':
                    if (tree >= 3) {
                        copy[i][j] = '|';
                    }
                    break;

                case '|':
                    if (lumberyard >= 3) {
                        copy[i][j] = '#';
                    }
                    break;

                case '#':
                    if (lumberyard < 1 || tree < 1) {
                        copy[i][j] = '.';
                    }
                    break;

                default:
                    break;
                }
            }
        }
        graph = std::move(copy);
        int tree = 0, lumberyard = 0;

        for (i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                switch (graph[i][j]) {
                case '|':
                    tree++;
                    break;

                case '#':
                    lumberyard++;
                    break;

                default:
                    break;
                }
            }
        }
        values.push_back(tree * lumberyard);
    }
    if (cycle_len != -1) {
        return values[cycle_start + (iteration - cycle_start) % cycle_len - 1];
    }
    return values.back();
}

/*
--- Part Two ---
*/

int part2() { return part1(1'000'000'000); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
