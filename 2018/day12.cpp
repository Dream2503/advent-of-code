#include "inputs.hpp"

/*
--- Day 12: Subterranean Sustainability ---
The year 518 is significantly more underground than your history books implied. Either that, or you've arrived in a vast cavern network under the
North Pole.

After exploring a little, you discover a long tunnel that contains a row of small pots as far as you can see to your left and right. A few of them
contain plants - someone is trying to grow things in these geothermally-heated caves.

The pots are numbered, with 0 in front of you. To the left, the pots are numbered -1, -2, -3, and so on; to the right, 1, 2, 3.... Your puzzle input
contains a list of pots from 0 to the right and whether they do (#) or do not (.) currently contain a plant, the initial state. (No other pots
currently contain plants.) For example, an initial state of #..##.... indicates that pots 0, 3, and 4 currently contain plants.

Your puzzle input also contains some notes you find on a nearby table: someone has been trying to figure out how these plants spread to nearby pots.
Based on the notes, for each generation of plants, a given pot has or does not have a plant based on whether that pot (and the two pots on either side
of it) had a plant in the last generation. These are written as LLCRR => N, where L are pots to the left, C is the current pot being considered, R are
the pots to the right, and N is whether the current pot will have a plant in the next generation. For example:
    - A note like ..#.. => . means that a pot that contains a plant but with no plants within two pots of it will not have a plant in it during the
    next generation.
    - A note like ##.## => . means that an empty pot with two plants on each side of it will remain empty in the next generation.
    - A note like .##.# => # means that a pot has a plant in a given generation if, in the previous generation, there were plants in that pot, the one
    immediately to the left, and the one two pots to the right, but not in the ones immediately to the right and two to the left.

It's not clear what these plants are for, but you're sure it's important, so you'd like to make sure the current configuration of plants is
sustainable by determining what will happen after 20 generations.

For example, given the following input:
initial state: #..#.#..##......###...###

...## => #
..#.. => #
.#... => #
.#.#. => #
.#.## => #
.##.. => #
.#### => #
#.#.# => #
#.### => #
##.#. => #
##.## => #
###.. => #
###.# => #
####. => #

For brevity, in this example, only the combinations which do produce a plant are listed. (Your input includes all possible combinations.) Then, the
next 20 generations will look like this:
                 1         2         3
       0         0         0         0
 0: ...#..#.#..##......###...###...........
 1: ...#...#....#.....#..#..#..#...........
 2: ...##..##...##....#..#..#..##..........
 3: ..#.#...#..#.#....#..#..#...#..........
 4: ...#.#..#...#.#...#..#..##..##.........
 5: ....#...##...#.#..#..#...#...#.........
 6: ....##.#.#....#...#..##..##..##........
 7: ...#..###.#...##..#...#...#...#........
 8: ...#....##.#.#.#..##..##..##..##.......
 9: ...##..#..#####....#...#...#...#.......
10: ..#.#..#...#.##....##..##..##..##......
11: ...#...##...#.#...#.#...#...#...#......
12: ...##.#.#....#.#...#.#..##..##..##.....
13: ..#..###.#....#.#...#....#...#...#.....
14: ..#....##.#....#.#..##...##..##..##....
15: ..##..#..#.#....#....#..#.#...#...#....
16: .#.#..#...#.#...##...#...#.#..##..##...
17: ..#...##...#.#.#.#...##...#....#...#...
18: ..##.#.#....#####.#.#.#...##...##..##..
19: .#..###.#..#.#.#######.#.#.#..#.#...#..
20: .#....##....#####...#######....#.#..##.

The generation is shown along the left, where 0 is the initial state. The pot numbers are shown along the top, where 0 labels the center pot,
negative-numbered pots extend to the left, and positive pots extend toward the right. Remember, the initial state begins at pot 0, which is not the
leftmost pot used in this example.

After one generation, only seven plants remain. The one in pot 0 matched the rule looking for ..#.., the one in pot 4 matched the rule looking for
.#.#., pot 9 matched .##.., and so on.

In this example, after 20 generations, the pots shown as # contain plants, the furthest left of which is pot -2, and the furthest right of which is
pot 34. Adding up all the numbers of plant-containing pots after the 20th generation produces 325.

After 20 generations, what is the sum of the numbers of all pots which contain a plant?
*/

int64_t part1(const int64_t generations = 20) {
    int64_t start = 0, last_sum = 0, delta = 0;
    std::string line, state;
    std::stringstream file(input12);
    std::unordered_map<std::string, char> rules;
    file.ignore(15) >> state;
    std::getline(file, line);

    while (std::getline(file, line)) {
        rules.emplace(line.substr(0, 5), line.back());
    }
    for (int64_t i = 0; i < generations; i++) {
        if (!state.starts_with("....")) {
            state.insert(0, "....");
            start -= 4;
        }
        if (!state.ends_with("....")) {
            state += "....";
        }
        const int64_t size = state.length() - 2;
        std::string next(size + 2, '.');

        for (int64_t j = 2; j < size; j++) {
            auto itr = rules.find(state.substr(j - 2, 5));
            next[j] = itr != rules.end() ? itr->second : '.';
        }
        state.swap(next);
        int64_t sum = 0, idx = start;

        for (const char ch : state) {
            if (ch == '#') {
                sum += idx;
            }
            idx++;
        }

        if (i > 100) {
            const int64_t new_delta = sum - last_sum;

            if (new_delta == delta) {
                return sum + (generations - i - 1) * delta;
            }
            delta = new_delta;
        }
        last_sum = sum;

        if (i == generations) {
            return sum;
        }
    }
    return last_sum;
}

/*
--- Part Two ---
You realize that 20 generations aren't enough. After all, these plants will need to last another 1500 years to even reach your timeline, not to
mention your future.

After fifty billion (50000000000) generations, what is the sum of the numbers of all pots which contain a plant?
*/

int64_t part2() { return part1(50'000'000'000ll); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
