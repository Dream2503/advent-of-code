#include "inputs.hpp"

/*
--- Day 20: Donut Maze ---
You notice a strange pattern on the surface of Pluto and land nearby to get a closer look. Upon closer inspection, you realize you've come across one
of the famous space-warping mazes of the long-lost Pluto civilization!

Because there isn't much space on Pluto, the civilization that used to live here thrived by inventing a method for folding spacetime. Although the
technology is no longer understood, mazes like this one provide a small glimpse into the daily life of an ancient Pluto citizen.

This maze is shaped like a donut. Portals along the inner and outer edge of the donut can instantly teleport you from one side to the other. For
example:
         A
         A
  #######.#########
  #######.........#
  #######.#######.#
  #######.#######.#
  #######.#######.#
  #####  B    ###.#
BC...##  C    ###.#
  ##.##       ###.#
  ##...DE  F  ###.#
  #####    G  ###.#
  #########.#####.#
DE..#######...###.#
  #.#########.###.#
FG..#########.....#
  ###########.#####
             Z
             Z

This map of the maze shows solid walls (#) and open passages (.). Every maze on Pluto has a start (the open tile next to AA) and an end (the open tile
next to ZZ). Mazes on Pluto also have portals; this maze has three pairs of portals: BC, DE, and FG. When on an open tile next to one of these labels,
a single step can take you to the other tile with the same label. (You can only walk on . tiles; labels and empty space are not traversable.)

One path through the maze doesn't require any portals. Starting at AA, you could go down 1, right 8, down 12, left 4, and down 1 to reach ZZ, a total
of 26 steps.

However, there is a shorter path: You could walk from AA to the inner BC portal (4 steps), warp to the outer BC portal (1 step), walk to the inner DE
(6 steps), warp to the outer DE (1 step), walk to the outer FG (4 steps), warp to the inner FG (1 step), and finally walk to ZZ (6 steps). In total,
this is only 23 steps.

Here is a larger example:
                   A
                   A
  #################.#############
  #.#...#...................#.#.#
  #.#.#.###.###.###.#########.#.#
  #.#.#.......#...#.....#.#.#...#
  #.#########.###.#####.#.#.###.#
  #.............#.#.....#.......#
  ###.###########.###.#####.#.#.#
  #.....#        A   C    #.#.#.#
  #######        S   P    #####.#
  #.#...#                 #......VT
  #.#.#.#                 #.#####
  #...#.#               YN....#.#
  #.###.#                 #####.#
DI....#.#                 #.....#
  #####.#                 #.###.#
ZZ......#               QG....#..AS
  ###.###                 #######
JO..#.#.#                 #.....#
  #.#.#.#                 ###.#.#
  #...#..DI             BU....#..LF
  #####.#                 #.#####
YN......#               VT..#....QG
  #.###.#                 #.###.#
  #.#...#                 #.....#
  ###.###    J L     J    #.#.###
  #.....#    O F     P    #.#...#
  #.###.#####.#.#####.#####.###.#
  #...#.#.#...#.....#.....#.#...#
  #.#####.###.###.#.#.#########.#
  #...#.#.....#...#.#.#.#.....#.#
  #.###.#####.###.###.#.#.#######
  #.#.........#...#.............#
  #########.###.###.#############
           B   J   C
           U   P   P

Here, AA has no direct path to ZZ, but it does connect to AS and CP. By passing through AS, QG, BU, and JO, you can reach ZZ in 58 steps.

In your maze, how many steps does it take to get from the open tile marked AA to the open tile marked ZZ?
*/

using Portal = std::pair<Vec3<int>, std::string>;
using State = std::pair<int, Portal>;
using Node = std::pair<int, State>;

Portal resolve_portal(const std::vector<std::string>& maze, const Vec2<int>& position) {
    std::string portal;

    for (const Vec2<int>& direction : directions_basic) {
        const Vec2<int> next = position + direction;

        if (std::isalpha(maze[next.x][next.y])) {
            portal.push_back(maze[next.x][next.y]);
            const Vec2<int> next_next = next + direction;
            portal.push_back(maze[next_next.x][next_next.y]);

            if (direction == Vec2(-1, 0) || direction == Vec2(0, -1)) {
                std::ranges::reverse(portal);
            }
            int level = -1;
            const auto [x, y] = next_next + direction;

            if (x >= 0 && x < maze.size() && y >= 0 && y < maze[x].size()) {
                level = 1;
            }
            return {{next.x, next.y, level}, portal};
        }
    }
    return {};
}

std::vector<State> resolve_graph(const std::vector<std::string>& maze, const Vec2<int>& source_position, const Portal& source_portal) {
    Portal portal;
    std::vector<State> res;
    std::queue<std::pair<int, Vec2<int>>> queue;
    std::unordered_set<Vec2<int>> seen;
    queue.emplace(0, source_position);

    while (!queue.empty()) {
        const auto [distance, position] = queue.front();
        queue.pop();
        seen.insert(position);

        if (!(portal = resolve_portal(maze, position)).second.empty() && portal != source_portal) {
            res.emplace_back(distance + 1, portal);
            continue;
        }
        for (const Vec2<int>& direction : directions_basic) {
            const Vec2<int> next = position + direction;

            if (maze[next.x][next.y] == '.' && !seen.contains(next)) {
                queue.emplace(distance + 1, next);
            }
        }
    }
    return res;
}

int resolve_path(const std::unordered_map<Portal, std::vector<State>>& graph, const std::unordered_map<Portal, Portal>& connection,
                 const Portal& source, const bool level) {
    std::priority_queue<Node, std::vector<Node>, std::greater<>> queue;
    std::unordered_map<State, int> seen;
    queue.emplace(0, State(0, source));
    seen[{0, source}] = 0;

    while (!queue.empty()) {
        auto [dist, state] = queue.top();
        auto [depth, portal] = state;
        queue.pop();

        if (dist > seen[state]) {
            continue;
        }
        for (const auto& [distance, port] : graph.at(portal)) {
            if (port.second == "ZZ") {
                if (depth == 0) {
                    return dist + distance;
                }
                continue;
            }
            int new_depth = depth + (level ? port.first.z : 0);

            if (new_depth < 0 || port.second == "AA") {
                continue;
            }
            int new_dist = dist + distance;
            Portal next = connection.at(port);
            State key{new_depth, next};

            if (!seen.contains(key) || new_dist < seen[key]) {
                seen[key] = new_dist;
                queue.emplace(new_dist, State(new_depth, next));
            }
        }
    }
    std::unreachable();
}

int part1(const bool level = false) {
    std::string line;
    Portal source;
    std::vector<std::string> maze;
    std::unordered_map<Portal, std::vector<State>> graph;
    std::stringstream file(input20);

    while (std::getline(file, line)) {
        maze.push_back(line);
    }
    int size = maze.size();

    for (int i = 0; i < size; i++) {
        const int row_size = maze[i].size();
        Portal portal;

        for (int j = 0; j < row_size; j++) {
            if (maze[i][j] == '.' && !(portal = resolve_portal(maze, {i, j})).second.empty()) {
                if (portal.second == "AA") {
                    source = portal;
                }
                graph[portal] = resolve_graph(maze, {i, j}, portal);
            }
        }
    }
    auto range = graph | std::views::keys;
    std::vector portals(range.begin(), range.end());
    std::unordered_map<Portal, Portal> connection;
    size = portals.size();

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (portals[i].second == portals[j].second) {
                connection[portals[i]] = portals[j];
                connection[portals[j]] = portals[i];
            }
        }
    }
    return resolve_path(graph, connection, source, level) - 1;
}

/*
--- Part Two ---
Strangely, the exit isn't open when you reach it. Then, you remember: the ancient Plutonians were famous for building recursive spaces.

The marked connections in the maze aren't portals: they physically connect to a larger or smaller copy of the maze. Specifically, the labeled tiles
around the inside edge actually connect to a smaller copy of the same maze, and the smaller copy's inner labeled tiles connect to yet a smaller copy,
and so on.

When you enter the maze, you are at the outermost level; when at the outermost level, only the outer labels AA and ZZ function (as the start and end,
respectively); all other outer labeled tiles are effectively walls. At any other level, AA and ZZ count as walls, but the other outer labeled tiles
bring you one level outward.

Your goal is to find a path through the maze that brings you back to ZZ at the outermost level of the maze.

In the first example above, the shortest path is now the loop around the right side. If the starting level is 0, then taking the previously-shortest
path would pass through BC (to level 1), DE (to level 2), and FG (back to level 1). Because this is not the outermost level, ZZ is a wall, and the
only option is to go back around to BC, which would only send you even deeper into the recursive maze.

In the second example above, there is no path that brings you to ZZ at the outermost level.

Here is a more interesting example:
             Z L X W       C
             Z P Q B       K
  ###########.#.#.#.#######.###############
  #...#.......#.#.......#.#.......#.#.#...#
  ###.#.#.#.#.#.#.#.###.#.#.#######.#.#.###
  #.#...#.#.#...#.#.#...#...#...#.#.......#
  #.###.#######.###.###.#.###.###.#.#######
  #...#.......#.#...#...#.............#...#
  #.#########.#######.#.#######.#######.###
  #...#.#    F       R I       Z    #.#.#.#
  #.###.#    D       E C       H    #.#.#.#
  #.#...#                           #...#.#
  #.###.#                           #.###.#
  #.#....OA                       WB..#.#..ZH
  #.###.#                           #.#.#.#
CJ......#                           #.....#
  #######                           #######
  #.#....CK                         #......IC
  #.###.#                           #.###.#
  #.....#                           #...#.#
  ###.###                           #.#.#.#
XF....#.#                         RF..#.#.#
  #####.#                           #######
  #......CJ                       NM..#...#
  ###.#.#                           #.###.#
RE....#.#                           #......RF
  ###.###        X   X       L      #.#.#.#
  #.....#        F   Q       P      #.#.#.#
  ###.###########.###.#######.#########.###
  #.....#...#.....#.......#...#.....#.#...#
  #####.#.###.#######.#######.###.###.#.#.#
  #.......#.......#.#.#.#.#...#...#...#.#.#
  #####.###.#####.#.#.#.#.###.###.#.###.###
  #.......#.....#.#...#...............#...#
  #############.#.#.###.###################
               A O F   N
               A A D   M

One shortest path through the maze is the following:
    - Walk from AA to XF (16 steps)
    - Recurse into level 1 through XF (1 step)
    - Walk from XF to CK (10 steps)
    - Recurse into level 2 through CK (1 step)
    - Walk from CK to ZH (14 steps)
    - Recurse into level 3 through ZH (1 step)
    - Walk from ZH to WB (10 steps)
    - Recurse into level 4 through WB (1 step)
    - Walk from WB to IC (10 steps)
    - Recurse into level 5 through IC (1 step)
    - Walk from IC to RF (10 steps)
    - Recurse into level 6 through RF (1 step)
    - Walk from RF to NM (8 steps)
    - Recurse into level 7 through NM (1 step)
    - Walk from NM to LP (12 steps)
    - Recurse into level 8 through LP (1 step)
    - Walk from LP to FD (24 steps)
    - Recurse into level 9 through FD (1 step)
    - Walk from FD to XQ (8 steps)
    - Recurse into level 10 through XQ (1 step)
    - Walk from XQ to WB (4 steps)
    - Return to level 9 through WB (1 step)
    - Walk from WB to ZH (10 steps)
    - Return to level 8 through ZH (1 step)
    - Walk from ZH to CK (14 steps)
    - Return to level 7 through CK (1 step)
    - Walk from CK to XF (10 steps)
    - Return to level 6 through XF (1 step)
    - Walk from XF to OA (14 steps)
    - Return to level 5 through OA (1 step)
    - Walk from OA to CJ (8 steps)
    - Return to level 4 through CJ (1 step)
    - Walk from CJ to RE (8 steps)
    - Return to level 3 through RE (1 step)
    - Walk from RE to IC (4 steps)
    - Recurse into level 4 through IC (1 step)
    - Walk from IC to RF (10 steps)
    - Recurse into level 5 through RF (1 step)
    - Walk from RF to NM (8 steps)
    - Recurse into level 6 through NM (1 step)
    - Walk from NM to LP (12 steps)
    - Recurse into level 7 through LP (1 step)
    - Walk from LP to FD (24 steps)
    - Recurse into level 8 through FD (1 step)
    - Walk from FD to XQ (8 steps)
    - Recurse into level 9 through XQ (1 step)
    - Walk from XQ to WB (4 steps)
    - Return to level 8 through WB (1 step)
    - Walk from WB to ZH (10 steps)
    - Return to level 7 through ZH (1 step)
    - Walk from ZH to CK (14 steps)
    - Return to level 6 through CK (1 step)
    - Walk from CK to XF (10 steps)
    - Return to level 5 through XF (1 step)
    - Walk from XF to OA (14 steps)
    - Return to level 4 through OA (1 step)
    - Walk from OA to CJ (8 steps)
    - Return to level 3 through CJ (1 step)
    - Walk from CJ to RE (8 steps)
    - Return to level 2 through RE (1 step)
    - Walk from RE to XQ (14 steps)
    - Return to level 1 through XQ (1 step)
    - Walk from XQ to FD (8 steps)
    - Return to level 0 through FD (1 step)
    - Walk from FD to ZZ (18 steps)

This path takes a total of 396 steps to move from AA at the outermost layer to ZZ at the outermost layer.

In your maze, when accounting for recursion, how many steps does it take to get from the open tile marked AA to the open tile marked ZZ, both at the
outermost layer?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
