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
You arrive at the vault only to discover that there is not one vault, but four - each with its own entrance.

On your map, find the area in the middle that looks like this:
...
.@.
...

Update your map to instead use the correct data:
@#@
###
@#@

This change will split your map into four separate sections, each with its own entrance:
#######       #######
#a.#Cd#       #a.#Cd#
##...##       ##@#@##
##.@.##  -->  #######
##...##       ##@#@##
#cB#Ab#       #cB#Ab#
#######       #######

Because some of the keys are for doors in other vaults, it would take much too long to collect all of the keys by yourself. Instead, you deploy four
remote-controlled robots. Each starts at one of the entrances (@).

Your goal is still to collect all of the keys in the fewest steps, but now, each robot has its own position and can move independently. You can only
remotely control a single robot at a time. Collecting a key instantly unlocks any corresponding doors, regardless of the vault in which the key or
door is found.

For example, in the map above, the top-left robot first collects key a, unlocking door A in the bottom-right vault:
#######
#@.#Cd#
##.#@##
#######
##@#@##
#cB#.b#
#######

Then, the bottom-right robot collects key b, unlocking door B in the bottom-left vault:
#######
#@.#Cd#
##.#@##
#######
##@#.##
#c.#.@#
#######

Then, the bottom-left robot collects key c:
#######
#@.#.d#
##.#@##
#######
##.#.##
#@.#.@#
#######

Finally, the top-right robot collects key d:
#######
#@.#.@#
##.#.##
#######
##.#.##
#@.#.@#
#######

In this example, it only took 8 steps to collect all of the keys.

Sometimes, multiple robots might have keys available, or a robot might have to wait for multiple keys to be collected:
###############
#d.ABC.#.....a#
######@#@######
###############
######@#@######
#b.....#.....c#
###############

First, the top-right, bottom-left, and bottom-right robots take turns collecting keys a, b, and c, a total of 6 + 6 + 6 = 18 steps. Then, the top-left
robot can access key d, spending another 6 steps; collecting all of the keys here takes a minimum of 24 steps.

Here's a more complex example:
#############
#DcBa.#.GhKl#
#.###@#@#I###
#e#d#####j#k#
###C#@#@###J#
#fEbA.#.FgHi#
#############
    - Top-left robot collects key a.
    - Bottom-left robot collects key b.
    - Top-left robot collects key c.
    - Bottom-left robot collects key d.
    - Top-left robot collects key e.
    - Bottom-left robot collects key f.
    - Bottom-right robot collects key g.
    - Top-right robot collects key h.
    - Bottom-right robot collects key i.
    - Top-right robot collects key j.
    - Bottom-right robot collects key k.
    - Top-right robot collects key l.

In the above example, the fewest steps to collect all of the keys is 32.

Here's an example with more choices:
#############
#g#f.D#..h#l#
#F###e#E###.#
#dCba@#@BcIJ#
#############
#nK.L@#@G...#
#M###N#H###.#
#o#m..#i#jk.#
#############

One solution with the fewest steps is:
    - Top-left robot collects key e.
    - Top-right robot collects key h.
    - Bottom-right robot collects key i.
    - Top-left robot collects key a.
    - Top-left robot collects key b.
    - Top-right robot collects key c.
    - Top-left robot collects key d.
    - Top-left robot collects key f.
    - Top-left robot collects key g.
    - Bottom-right robot collects key k.
    - Bottom-right robot collects key j.
    - Top-right robot collects key l.
    - Bottom-left robot collects key n.
    - Bottom-left robot collects key m.
    - Bottom-left robot collects key o.

This example requires at least 72 steps to collect all keys.

After updating your map and using the remote-controlled robots, what is the fewest steps necessary to collect all of the keys?
*/

struct Target {
    char id;
    int distance;
    std::bitset<26> needed;
};

struct State {
    std::array<char, 4> position;
    std::bitset<26> keys;

    bool operator<(const State& other) const {
        if (keys.to_ulong() != other.keys.to_ulong()) {
            return keys.to_ulong() < other.keys.to_ulong();
        }
        return position < other.position;
    }
};

int part2() {
    int k = 0;
    Vec2<int> center;
    std::bitset<26> keys;
    std::string line;
    std::vector<std::string> grid;
    std::map<char, std::vector<Target>> graph;
    std::priority_queue<std::pair<int, State>, std::vector<std::pair<int, State>>, std::greater<>> priority_queue;
    std::map<State, int> min_distance;
    std::stringstream file(input18);

    while (std::getline(file, line)) {
        if (line.contains('@')) {
            center = {k, static_cast<int>(line.find('@'))};
        }
        grid.push_back(line);
        k++;
    }
    const int row_size = grid.size(), col_size = grid[0].size();
    grid[center.x - 1][center.y - 1] = '0';
    grid[center.x - 1][center.y] = '#';
    grid[center.x - 1][center.y + 1] = '1';
    grid[center.x][center.y - 1] = '#';
    grid[center.x][center.y] = '#';
    grid[center.x][center.y + 1] = '#';
    grid[center.x + 1][center.y - 1] = '2';
    grid[center.x + 1][center.y] = '#';
    grid[center.x + 1][center.y + 1] = '3';

    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < col_size; j++) {
            if (std::islower(grid[i][j]) || (grid[i][j] >= '0' && grid[i][j] <= '3')) {
                Vec2<int> start;
                std::queue<std::pair<Vec2<int>, int>> queue;
                std::unordered_map<Vec2<int>, std::bitset<26>> requirements;

                for (int l = 0; l < row_size; l++) {
                    for (int m = 0; m < col_size; m++) {
                        if (grid[l][m] == grid[i][j]) {
                            start = {l, m};
                        }
                    }
                }
                std::unordered_set visited = {start};
                queue.push({start, 0});
                requirements[start] = {};

                while (!queue.empty()) {
                    const auto [current, distance] = queue.front();
                    queue.pop();

                    if (grid[current.x][current.y] != grid[i][j] && grid[current.x][current.y] != '.') {
                        if (std::islower(grid[current.x][current.y])) {
                            graph[grid[i][j]].push_back({grid[current.x][current.y], distance, requirements[current]});
                        }
                    }
                    for (const Vec2<int>& direction : directions_basic) {
                        Vec2<int> next = current + direction;
                        std::bitset<26> requirement = requirements[current];

                        if (grid[next.x][next.y] == '#' || visited.contains(next)) {
                            continue;
                        }
                        if (std::isupper(grid[next.x][next.y])) {
                            requirement.set(grid[next.x][next.y] - 'A');
                        }
                        requirements[next] = requirement;
                        visited.insert(next);
                        queue.push({next, distance + 1});
                    }
                }
                if (std::islower(grid[i][j])) {
                    keys.set(grid[i][j] - 'a');
                }
            }
        }
    }
    State start = {{'0', '1', '2', '3'}, {}};
    priority_queue.emplace(0, start);
    min_distance[start] = 0;

    while (!priority_queue.empty()) {
        const auto [distance, current] = priority_queue.top();
        priority_queue.pop();

        if (distance > min_distance[current]) {
            continue;
        }
        if (current.keys == keys) {
            return distance;
        }
        for (int idx = 0; idx < 4; ++idx) {
            for (const auto& [id, dist, needed] : graph[current.position[idx]] | std::views::filter([&current](const Target& target) -> bool {
                                                      return !current.keys[target.id - 'a'] && !(target.needed & ~current.keys).any();
                                                  })) {
                int new_distance = distance + dist;
                State next = current;
                next.position[idx] = id;
                next.keys.set(id - 'a');

                if (!min_distance.contains(next) || new_distance < min_distance[next]) {
                    min_distance[next] = new_distance;
                    priority_queue.emplace(new_distance, next);
                }
            }
        }
    }
    std::unreachable();
}

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
