#include "inputs.hpp"

/*
--- Day 23: Amphipod ---
A group of amphipods notice your fancy submarine and flag you down. "With such an impressive shell," one amphipod says, "surely you can help us with
a question that has stumped our best scientists."

They go on to explain that a group of timid, stubborn amphipods live in a nearby burrow. Four types of amphipods live there: Amber (A), Bronze (B),
Copper (C), and Desert (D). They live in a burrow that consists of a hallway and four side rooms. The side rooms are initially full of amphipods, and
the hallway is initially empty.

They give you a diagram of the situation (your puzzle input), including locations of each amphipod (A, B, C, or D, each of which is occupying an
otherwise open space), walls (#), and open space (.).

For example:
#############
#...........#
###B#C#B#D###
  #A#D#C#A#
  #########

The amphipods would like a method to organize every amphipod into side rooms so that each side room contains one type of amphipod and the types are
sorted A-D going left to right, like this:
#############
#...........#
###A#B#C#D###
  #A#B#C#D#
  #########

Amphipods can move up, down, left, or right so long as they are moving into an unoccupied open space. Each type of amphipod requires a different
amount of energy to move one step: Amber amphipods require 1 energy per step, Bronze amphipods require 10 energy, Copper amphipods require 100, and
Desert ones require 1000. The amphipods would like you to find a way to organize the amphipods that requires the least total energy.

However, because they are timid and stubborn, the amphipods have some extra rules:
    - Amphipods will never stop on the space immediately outside any room. They can move into that space so long as they immediately continue moving.
      (Specifically, this refers to the four open spaces in the hallway that are directly above an amphipod starting position.)
    - Amphipods will never move from the hallway into a room unless that room is their destination room and that room contains no amphipods which do
      not also have that room as their own destination. If an amphipod's starting room is not its destination room, it can stay in that room until it
      leaves the room. (For example, an Amber amphipod will not move from the hallway into the right three rooms, and will only move into the leftmost
      room if that room is empty or if it only contains other Amber amphipods.)
    - Once an amphipod stops moving in the hallway, it will stay in that spot until it can move into a room. (That is, once any amphipod starts
      moving, any other amphipods currently in the hallway are locked in place and will not move again until they can move fully into a room.)

In the above example, the amphipods can be organized using a minimum of 12521 energy. One way to do this is shown below.

Starting configuration:
#############
#...........#
###B#C#B#D###
  #A#D#C#A#
  #########

One Bronze amphipod moves into the hallway, taking 4 steps and using 40 energy:
#############
#...B.......#
###B#C#.#D###
  #A#D#C#A#
  #########

The only Copper amphipod not in its side room moves there, taking 4 steps and using 400 energy:
#############
#...B.......#
###B#.#C#D###
  #A#D#C#A#
  #########

A Desert amphipod moves out of the way, taking 3 steps and using 3000 energy, and then the Bronze amphipod takes its place, taking 3 steps and using
30 energy:
#############
#.....D.....#
###B#.#C#D###
  #A#B#C#A#
  #########

The leftmost Bronze amphipod moves to its room using 40 energy:
#############
#.....D.....#
###.#B#C#D###
  #A#B#C#A#
  #########

Both amphipods in the rightmost room move into the hallway, using 2003 energy in total:
#############
#.....D.D.A.#
###.#B#C#.###
  #A#B#C#.#
  #########

Both Desert amphipods move into the rightmost room using 7000 energy:
#############
#.........A.#
###.#B#C#D###
  #A#B#C#D#
  #########

Finally, the last Amber amphipod moves into its room, using 8 energy:
#############
#...........#
###A#B#C#D###
  #A#B#C#D#
  #########

What is the least energy required to organize the amphipods?
*/

constexpr std::array entrances = {2, 4, 6, 8}, cost = {1, 10, 100, 1000};
constexpr std::array stops = {0, 1, 3, 5, 7, 9, 10};

template <size_t N>
bool clear(const std::array<char, N>& state, int from, const int to) {
    const int step = from < to ? 1 : -1;

    for (from += step; from != to + step; from += step) {
        if (state[from] != '.') {
            return false;
        }
    }
    return true;
}

template <size_t N>
int solve(std::array<char, N> start, const int room_size) {
    std::unordered_map<std::array<char, N>, int> distance;
    std::priority_queue<std::pair<int, std::array<char, N>>, std::vector<std::pair<int, std::array<char, N>>>, std::greater<>> queue;
    distance[start] = 0;
    queue.emplace(0, start);

    while (!queue.empty()) {
        bool complete = true;
        std::vector<std::pair<std::array<char, N>, int>> nexts;
        auto [current, state] = queue.top();
        queue.pop();

        if (current != distance[state]) {
            continue;
        }
        for (int room = 0; room < 4; room++) {
            for (int depth = 0; depth < room_size; depth++) {
                if (state[11 + room * room_size + depth] != 'A' + room) {
                    complete = false;
                    break;
                }
            }
            if (!complete) {
                break;
            }
        }
        if (complete) {
            return current;
        }
        for (int hallway = 0; hallway < 11; hallway++) {
            int depth = -1;

            if (state[hallway] == '.' || !clear(state, hallway, entrances[state[hallway] - 'A'])) {
                continue;
            }
            for (int i = room_size - 1; i >= 0; i--) {
                const char now = state[11 + (state[hallway] - 'A') * room_size + i];

                if (now == '.') {
                    if (depth == -1) {
                        depth = i;
                    }
                } else if (now != state[hallway]) {
                    depth = -1;
                    break;
                }
            }
            if (depth == -1) {
                continue;
            }
            std::array<char, N> next = state;
            next[hallway] = '.';
            next[11 + (state[hallway] - 'A') * room_size + depth] = state[hallway];
            nexts.emplace_back(next, (std::abs(hallway - entrances[state[hallway] - 'A']) + depth + 1) * cost[state[hallway] - 'A']);
        }
        if (nexts.empty()) {
            for (int room = 0; room < 4; room++) {
                int depth = -1;

                for (int i = 0; i < room_size; i++) {
                    if (state[11 + room * room_size + i] != '.') {
                        depth = i;
                        break;
                    }
                }
                if (depth == -1) {
                    continue;
                }
                if (room == state[11 + room * room_size + depth] - 'A') {
                    bool correct = true;

                    for (int i = depth; i < room_size; i++) {
                        if (state[11 + room * room_size + i] != state[11 + room * room_size + depth]) {
                            correct = false;
                            break;
                        }
                    }
                    if (correct) {
                        continue;
                    }
                }
                for (const int hallway : stops) {
                    if (!clear(state, entrances[room], hallway)) {
                        continue;
                    }
                    std::array<char, N> next = state;
                    next[11 + room * room_size + depth] = '.';
                    next[hallway] = state[11 + room * room_size + depth];
                    nexts.emplace_back(next, (depth + 1 + std::abs(entrances[room] - hallway)) * cost[state[11 + room * room_size + depth] - 'A']);
                }
            }
        }
        for (const auto& [next, energy] : nexts) {
            const int total = current + energy;

            if (!distance.contains(next) || total < distance[next]) {
                distance[next] = total;
                queue.emplace(total, next);
            }
        }
    }
    std::unreachable();
}

int part1(const char* input) {
    std::array<char, 19> start;
    std::string line;
    std::vector<std::string> grid;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        grid.push_back(line);
    }
    start.fill('.');

    for (int i = 0; i < 11; i++) {
        start[i] = grid[1][i + 1];
    }
    for (int room = 0; room < 4; room++) {
        start[11 + room * 2] = grid[2][3 + room * 2];
        start[11 + room * 2 + 1] = grid[3][3 + room * 2];
    }
    return solve(start, 2);
}

/*
--- Part Two ---
As you prepare to give the amphipods your solution, you notice that the diagram they handed you was actually folded up. As you unfold it, you discover
an extra part of the diagram.

Between the first and second lines of text that contain amphipod starting positions, insert the following lines:
  #D#C#B#A#
  #D#B#A#C#

So, the above example now becomes:
#############
#...........#
###B#C#B#D###
  #D#C#B#A#
  #D#B#A#C#
  #A#D#C#A#
  #########

The amphipods still want to be organized into rooms similar to before:
#############
#...........#
###A#B#C#D###
  #A#B#C#D#
  #A#B#C#D#
  #A#B#C#D#
  #########

In this updated example, the least energy required to organize these amphipods is 44169:
#############
#...........#
###B#C#B#D###
  #D#C#B#A#
  #D#B#A#C#
  #A#D#C#A#
  #########

#############
#..........D#
###B#C#B#.###
  #D#C#B#A#
  #D#B#A#C#
  #A#D#C#A#
  #########

#############
#A.........D#
###B#C#B#.###
  #D#C#B#.#
  #D#B#A#C#
  #A#D#C#A#
  #########

#############
#A........BD#
###B#C#.#.###
  #D#C#B#.#
  #D#B#A#C#
  #A#D#C#A#
  #########

#############
#A......B.BD#
###B#C#.#.###
  #D#C#.#.#
  #D#B#A#C#
  #A#D#C#A#
  #########

#############
#AA.....B.BD#
###B#C#.#.###
  #D#C#.#.#
  #D#B#.#C#
  #A#D#C#A#
  #########

#############
#AA.....B.BD#
###B#.#.#.###
  #D#C#.#.#
  #D#B#C#C#
  #A#D#C#A#
  #########

#############
#AA.....B.BD#
###B#.#.#.###
  #D#.#C#.#
  #D#B#C#C#
  #A#D#C#A#
  #########

#############
#AA...B.B.BD#
###B#.#.#.###
  #D#.#C#.#
  #D#.#C#C#
  #A#D#C#A#
  #########

#############
#AA.D.B.B.BD#
###B#.#.#.###
  #D#.#C#.#
  #D#.#C#C#
  #A#.#C#A#
  #########

#############
#AA.D...B.BD#
###B#.#.#.###
  #D#.#C#.#
  #D#.#C#C#
  #A#B#C#A#
  #########

#############
#AA.D.....BD#
###B#.#.#.###
  #D#.#C#.#
  #D#B#C#C#
  #A#B#C#A#
  #########

#############
#AA.D......D#
###B#.#.#.###
  #D#B#C#.#
  #D#B#C#C#
  #A#B#C#A#
  #########

#############
#AA.D......D#
###B#.#C#.###
  #D#B#C#.#
  #D#B#C#.#
  #A#B#C#A#
  #########

#############
#AA.D.....AD#
###B#.#C#.###
  #D#B#C#.#
  #D#B#C#.#
  #A#B#C#.#
  #########

#############
#AA.......AD#
###B#.#C#.###
  #D#B#C#.#
  #D#B#C#.#
  #A#B#C#D#
  #########

#############
#AA.......AD#
###.#B#C#.###
  #D#B#C#.#
  #D#B#C#.#
  #A#B#C#D#
  #########

#############
#AA.......AD#
###.#B#C#.###
  #.#B#C#.#
  #D#B#C#D#
  #A#B#C#D#
  #########

#############
#AA.D.....AD#
###.#B#C#.###
  #.#B#C#.#
  #.#B#C#D#
  #A#B#C#D#
  #########

#############
#A..D.....AD#
###.#B#C#.###
  #.#B#C#.#
  #A#B#C#D#
  #A#B#C#D#
  #########

#############
#...D.....AD#
###.#B#C#.###
  #A#B#C#.#
  #A#B#C#D#
  #A#B#C#D#
  #########

#############
#.........AD#
###.#B#C#.###
  #A#B#C#D#
  #A#B#C#D#
  #A#B#C#D#
  #########

#############
#..........D#
###A#B#C#.###
  #A#B#C#D#
  #A#B#C#D#
  #A#B#C#D#
  #########

#############
#...........#
###A#B#C#D###
  #A#B#C#D#
  #A#B#C#D#
  #A#B#C#D#
  #########

Using the initial configuration from the full diagram, what is the least energy required to organize the amphipods?
*/

int part2(const char* input) {
    constexpr std::array inserted1 = {'D', 'C', 'B', 'A'};
    constexpr std::array inserted2 = {'D', 'B', 'A', 'C'};
    std::array<char, 27> start;
    std::string line;
    std::vector<std::string> grid;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        grid.push_back(line);
    }
    start.fill('.');

    for (int i = 0; i < 11; i++) {
        start[i] = grid[1][i + 1];
    }
    for (int room = 0; room < 4; room++) {
        start[11 + room * 4] = grid[2][3 + room * 2];
        start[11 + room * 4 + 1] = inserted1[room];
        start[11 + room * 4 + 2] = inserted2[room];
        start[11 + room * 4 + 3] = grid[3][3 + room * 2];
    }
    return solve(start, 4);
}

int main() {
    std::println("Part 1:");
    Executor::test(part1, R"(#############
#...........#
###B#C#B#D###
  #A#D#C#A#
  #########)",
                   12521);
    Executor::run(part1, input23);

    std::println("Part 2:");
    Executor::test(part2, R"(#############
#...........#
###B#C#B#D###
  #A#D#C#A#
  #########)",
                   44169);
    Executor::run(part2, input23);

    return 0;
}
