#include "inputs.hpp"

/*
--- Day 20: A Regular Map ---
While you were learning about instruction pointers, the Elves made considerable progress. When you look up, you discover that the North Pole base
construction project has completely surrounded you.

The area you are in is made up entirely of rooms and doors. The rooms are arranged in a grid, and rooms only connect to adjacent rooms when a door is
present between them.

For example, drawing rooms as ., walls as #, doors as | or -, your current position as X, and where north is up, the area you're in might look like
this:
#####
#.|.#
#-###
#.|X#
#####

You get the attention of a passing construction Elf and ask for a map. "I don't have time to draw out a map of this place - it's huge. Instead, I can
give you directions to every room in the facility!" He writes down some directions on a piece of parchment and runs off. In the example above, the
instructions might have been ^WNE$, a regular expression or "regex" (your puzzle input).

The regex matches routes (like WNE for "west, north, east") that will take you from your current room through various doors in the facility. In
aggregate, the routes will take you through every door in the facility at least once; mapping out all of these routes will let you build a proper map
and find your way around.

^ and $ are at the beginning and end of your regex; these just mean that the regex doesn't match anything outside the routes it describes.
(Specifically, ^ matches the start of the route, and $ matches the end of it.) These characters will not appear elsewhere in the regex.

The rest of the regex matches various sequences of the characters N (north), S (south), E (east), and W (west). In the example above, ^WNE$ matches
only one route, WNE, which means you can move west, then north, then east from your current position. Sequences of letters like this always match that
exact route in the same order.

Sometimes, the route can branch. A branch is given by a list of options separated by pipes (|) and wrapped in parentheses. So, ^N(E|W)N$ contains a
branch: after going north, you must choose to go either east or west before finishing your route by going north again. By tracing out the possible
routes after branching, you can determine where the doors are and, therefore, where the rooms are in the facility.

For example, consider this regex: ^ENWWW(NEEE|SSE(EE|N))$

This regex begins with ENWWW, which means that from your current position, all routes must begin by moving east, north, and then west three times, in
that order. After this, there is a branch. Before you consider the branch, this is what you know about the map so far, with doors you aren't sure
about marked with a ?:
#?#?#?#?#
?.|.|.|.?
#?#?#?#-#
    ?X|.?
    #?#?#

After this point, there is (NEEE|SSE(EE|N)). This gives you exactly two options: NEEE and SSE(EE|N). By following NEEE, the map now looks like this:
#?#?#?#?#
?.|.|.|.?
#-#?#?#?#
?.|.|.|.?
#?#?#?#-#
    ?X|.?
    #?#?#

Now, only SSE(EE|N) remains. Because it is in the same parenthesized group as NEEE, it starts from the same room NEEE started in. It states that
starting from that point, there exist doors which will allow you to move south twice, then east; this ends up at another branch. After that, you can
either move east twice or north once. This information fills in the rest of the doors:
#?#?#?#?#
?.|.|.|.?
#-#?#?#?#
?.|.|.|.?
#-#?#?#-#
?.?.?X|.?
#-#-#?#?#
?.|.|.|.?
#?#?#?#?#

Once you've followed all possible routes, you know the remaining unknown parts are all walls, producing a finished map of the facility:
#########
#.|.|.|.#
#-#######
#.|.|.|.#
#-#####-#
#.#.#X|.#
#-#-#####
#.|.|.|.#
#########

Sometimes, a list of options can have an empty option, like (NEWS|WNSE|). This means that routes at this point could effectively skip the options in
parentheses and move on immediately. For example, consider this regex and the corresponding map:
^ENNWSWW(NEWS|)SSSEEN(WNSE|)EE(SWEN|)NNN$

###########
#.|.#.|.#.#
#-###-#-#-#
#.|.|.#.#.#
#-#####-#-#
#.#.#X|.#.#
#-#-#####-#
#.#.|.|.|.#
#-###-###-#
#.|.|.#.|.#
###########

This regex has one main route which, at three locations, can optionally include additional detours and be valid: (NEWS|), (WNSE|), and (SWEN|).
Regardless of which option is taken, the route continues from the position it is left at after taking those steps. So, for example, this regex matches
all of the following routes (and more that aren't listed here):
    - ENNWSWWSSSEENEENNN
    - ENNWSWWNEWSSSSEENEENNN
    - ENNWSWWNEWSSSSEENEESWENNNN
    - ENNWSWWSSSEENWNSEEENNN

By following the various routes the regex matches, a full map of all of the doors and rooms in the facility can be assembled.

To get a sense for the size of this facility, you'd like to determine which room is furthest from you: specifically, you would like to find the room
for which the shortest path to that room would require passing through the most doors.
    - In the first example (^WNE$), this would be the north-east corner 3 doors away.
    - In the second example (^ENWWW(NEEE|SSE(EE|N))$), this would be the south-east corner 10 doors away.
    - In the third example (^ENNWSWW(NEWS|)SSSEEN(WNSE|)EE(SWEN|)NNN$), this would be the north-east corner 18 doors away.

Here are a few more examples:
Regex: ^ESSWWN(E|NNENN(EESS(WNSE|)SSS|WWWSSSSE(SW|NNNE)))$
Furthest room requires passing 23 doors

#############
#.|.|.|.|.|.#
#-#####-###-#
#.#.|.#.#.#.#
#-#-###-#-#-#
#.#.#.|.#.|.#
#-#-#-#####-#
#.#.#.#X|.#.#
#-#-#-###-#-#
#.|.#.|.#.#.#
###-#-###-#-#
#.|.#.|.|.#.#
#############
Regex: ^WSSEESWWWNW(S|NENNEEEENN(ESSSSW(NWSW|SSEN)|WSWWN(E|WWS(E|SS))))$
Furthest room requires passing 31 doors

###############
#.|.|.|.#.|.|.#
#-###-###-#-#-#
#.|.#.|.|.#.#.#
#-#########-#-#
#.#.|.|.|.|.#.#
#-#-#########-#
#.#.#.|X#.|.#.#
###-#-###-#-#-#
#.|.#.#.|.#.|.#
#-###-#####-###
#.|.#.|.|.#.#.#
#-#-#####-#-#-#
#.#.|.|.|.#.|.#
###############

What is the largest number of doors you would be required to pass through to reach a room? That is, find the room for which the shortest path from
your starting location to that room would require passing through the most doors; what is the fewest doors you can pass through to reach it?
*/

enum class State { START = 'X', ROOM = '.', WALL = '#', V_DOOR = '|', H_DOOR = '-' };

void resolve(const std::string& input, std::unordered_map<Vec2<int>, State>& graph, int& i, Vec2<int>& position) {
    static const int size = input.length();
    const Vec2 start = position;

    while (i < size) {
        switch (input[++i]) {
        case 'N':
            position.y--;
            graph[position] = State::H_DOOR;
            position.y--;
            graph[position] = State::ROOM;
            break;

        case 'S':
            position.y++;
            graph[position] = State::H_DOOR;
            position.y++;
            graph[position] = State::ROOM;
            break;

        case 'E':
            position.x++;
            graph[position] = State::V_DOOR;
            position.x++;
            graph[position] = State::ROOM;
            break;

        case 'W':
            position.x--;
            graph[position] = State::V_DOOR;
            position.x--;
            graph[position] = State::ROOM;
            break;

        case '(':
            resolve(input, graph, i, position);
            break;

        case ')':
            return;

        case '|':
            position = start;
            break;

        default:
            break;
        }
    }
}

int part1(const bool vicinity = false) {
    int i = 0;
    Vec2<int> position, min = INT32_MAX, max = INT32_MIN;
    std::unordered_map<Vec2<int>, State> graph;
    resolve(input20, graph, i, position);

    for (const auto& [x, y] : graph | std::views::keys) {
        min.x = std::min(min.x, x);
        min.y = std::min(min.y, y);
        max.x = std::max(max.x, x);
        max.y = std::max(max.y, y);
    }
    min -= 1;
    max += 2;
    const int height = max.y - min.y, width = max.x - min.x;
    std::vector map(height, std::vector(width, State::WALL));
    map[0 - min.y][0 - min.x] = State::START;

    for (const auto& [pos, state] : graph) {
        map[pos.y - min.y][pos.x - min.x] = state;
    }
    std::queue<Vec2<int>> queue;
    std::unordered_map<Vec2<int>, int> distance;
    queue.emplace(0, 0);
    distance[queue.front()] = 0;

    while (!queue.empty()) {
        const Vec2 current = queue.front();
        queue.pop();

        for (const Vec2<int>& direction : directions_basic) {
            Vec2 next = current + direction;

            if (map[next.y - min.y][next.x - min.x] != State::WALL) {
                next += direction;

                if (!distance.contains(next)) {
                    distance[next] = distance[current] + 1;
                    queue.push(next);
                }
            }
        }
    }
    return vicinity ? std::ranges::count_if(distance | std::views::values, [](const int value) -> bool { return value >= 1000; })
                    : *std::ranges::max_element(distance | std::views::values);
}

/*
Okay, so the facility is big.

How many rooms have a shortest path from your current location that pass through at least 1000 doors?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
