#include "inputs.hpp"

/*
--- Day 18: Many-Worlds Interpretation ---
As you approach Neptune, a planetary security system detects you and activates a giant tractor beam on Triton! You have no choice but to land.

A scan of the local area reveals only one interesting feature: a massive underground vault. You generate a map of the tunnels (your puzzle input). The
tunnels are too narrow to move diagonally.

Only one entrance (marked @) is present among the open passages (marked .) and stone walls (#), but you also detect an assortment of keys (shown as
lowercase letters) and doors (shown as uppercase letters). Keys of a given letter open the door of the same letter: a opens A, b opens B, and so on.
You aren't sure which key you need to disable the tractor beam, so you'll need to collect all of them.

For example, suppose you have the following map:
#########
#b.A.@.a#
#########

Starting from the entrance (@), you can only access a large door (A) and a key (a). Moving toward the door doesn't help you, but you can move 2 steps
to collect the key, unlocking A in the process:
#########
#b.....@#
#########

Then, you can move 6 steps to collect the only other key, b:
#########
#@......#
#########

So, collecting every key took a total of 8 steps.

Here is a larger example:
########################
#f.D.E.e.C.b.A.@.a.B.c.#
######################.#
#d.....................#
########################

The only reasonable move is to take key a and unlock door A:
########################
#f.D.E.e.C.b.....@.B.c.#
######################.#
#d.....................#
########################

Then, do the same with key b:
########################
#f.D.E.e.C.@.........c.#
######################.#
#d.....................#
########################

...and the same with key c:
########################
#f.D.E.e.............@.#
######################.#
#d.....................#
########################

Now, you have a choice between keys d and e. While key e is closer, collecting it now would be slower in the long run than collecting key d first, so
that's the best choice:
########################
#f...E.e...............#
######################.#
#@.....................#
########################

Finally, collect key e to unlock door E, then collect key f, taking a grand total of 86 steps.

Here are a few more examples:
    - ########################
      #...............b.C.D.f#
      #.######################
      #.....@.a.B.c.d.A.e.F.g#
      ########################
      Shortest path is 132 steps: b, a, c, d, f, e, g

    - #################
      #i.G..c...e..H.p#
      ########.########
      #j.A..b...f..D.o#
      ########@########
      #k.E..a...g..B.n#
      ########.########
      #l.F..d...h..C.m#
      #################
      Shortest paths are 136 steps;
      one is: a, f, b, j, g, n, h, d, l, o, e, p, c, i, k, m

    - ########################
      #@..............ac.GI.b#
      ###d#e#f################
      ###A#B#C################
      ###g#h#i################
      ########################
      Shortest paths are 81 steps; one is: a, c, f, i, d, g, b, e, h

How many steps is the shortest path that collects all of the keys?
*/

int part1() {
    int i = 0;
    Vec2<int> source;
    std::string line;
    std::vector<std::string> grid;

    std::stringstream file(input18);

    while (std::getline(file, line)) {
        if (line.contains('@')) {
            source = {i, static_cast<int>(line.find('@'))};
        }
        grid.push_back(line);
        i++;
    }
    const Vec2<int> size(grid.size(), grid.front().size());
    std::bitset<26> all;

    for (i = 0; i < size.x; i++) {
        for (int j = 0; j < size.y; j++) {
            if (std::islower(grid[i][j])) {
                all.set(grid[i][j] - 'a');
            }
        }
    }
    using Node = std::pair<Vec2<int>, std::bitset<26>>;
    std::queue<std::pair<Node, int>> queue;
    std::unordered_set<Node> seen;
    Node start(source, {});
    queue.emplace(start, 0);
    seen.insert(start);

    while (!queue.empty()) {
        const auto [node, distance] = queue.front();
        const auto& [position, keys] = node;
        queue.pop();

        if (keys == all) {
            return distance;
        }
        for (const Vec2<int>& direction : directions_basic) {
            const Vec2<int> next = position + direction;

            if (next.x < 0 || next.x >= size.x || next.y < 0 || next.y >= size.y || grid[next.x][next.y] == '#' ||
                (std::isupper(grid[next.x][next.y]) && !keys[grid[next.x][next.y] - 'A'])) {
                continue;
            }
            std::bitset<26> next_keys = keys;

            if (std::islower(grid[next.x][next.y])) {
                next_keys.set(grid[next.x][next.y] - 'a');
            }
            Node next_node{next, next_keys};

            if (!seen.contains(next_node)) {
                seen.insert(next_node);
                queue.emplace(next_node, distance + 1);
            }
        }
    }
    std::unreachable();
}

/*
--- Part Two ---
*/

int part2() { return 0; }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
