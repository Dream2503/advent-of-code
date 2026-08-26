#include "inputs.hpp"

/*
--- Day 20: Jurassic Jigsaw ---
The high-speed train leaves the forest and quickly carries you south. You can even see a desert in the distance! Since you have some spare time, you
might as well see if there was anything interesting in the image the Mythical Information Bureau satellite captured.

After decoding the satellite messages, you discover that the data actually contains many small images created by the satellite's camera array. The
camera array consists of many cameras; rather than produce a single square image, they produce many smaller square image tiles that need to be
reassembled back into a single image.

Each camera in the camera array returns a single monochrome image tile with a random unique ID number. The tiles (your puzzle input) arrived in a
random order.

Worse yet, the camera array appears to be malfunctioning: each image tile has been rotated and flipped to a random orientation. Your first task is to
reassemble the original image by orienting the tiles so they fit together.

To show how the tiles should be reassembled, each tile's image data includes a border that should line up exactly with its adjacent tiles. All tiles
have this border, and the border lines up exactly when the tiles are both oriented correctly. Tiles at the edge of the image also have this border,
but the outermost edges won't line up with any other tiles.

For example, suppose you have the following nine tiles:
Tile 2311:
..##.#..#.
##..#.....
#...##..#.
####.#...#
##.##.###.
##...#.###
.#.#.#..##
..#....#..
###...#.#.
..###..###

Tile 1951:
#.##...##.
#.####...#
.....#..##
#...######
.##.#....#
.###.#####
###.##.##.
.###....#.
..#.#..#.#
#...##.#..

Tile 1171:
####...##.
#..##.#..#
##.#..#.#.
.###.####.
..###.####
.##....##.
.#...####.
#.##.####.
####..#...
.....##...

Tile 1427:
###.##.#..
.#..#.##..
.#.##.#..#
#.#.#.##.#
....#...##
...##..##.
...#.#####
.#.####.#.
..#..###.#
..##.#..#.

Tile 1489:
##.#.#....
..##...#..
.##..##...
..#...#...
#####...#.
#..#.#.#.#
...#.#.#..
##.#...##.
..##.##.##
###.##.#..

Tile 2473:
#....####.
#..#.##...
#.##..#...
######.#.#
.#...#.#.#
.#########
.###.#..#.
########.#
##...##.#.
..###.#.#.

Tile 2971:
..#.#....#
#...###...
#.#.###...
##.##..#..
.#####..##
.#..####.#
#..#.#..#.
..####.###
..#.#.###.
...#.#.#.#

Tile 2729:
...#.#.#.#
####.#....
..#.#.....
....#..#.#
.##..##.#.
.#.####...
####.#.#..
##.####...
##..#.##..
#.##...##.

Tile 3079:
#.#.#####.
.#..######
..#.......
######....
####.#..#.
.#...#.##.
#.#####.##
..#.###...
..#.......
..#.###...

By rotating, flipping, and rearranging them, you can find a square arrangement that causes all adjacent borders to line up:

#...##.#.. ..###..### #.#.#####.
..#.#..#.# ###...#.#. .#..######
.###....#. ..#....#.. ..#.......
###.##.##. .#.#.#..## ######....
.###.##### ##...#.### ####.#..#.
.##.#....# ##.##.###. .#...#.##.
#...###### ####.#...# #.#####.##
.....#..## #...##..#. ..#.###...
#.####...# ##..#..... ..#.......
#.##...##. ..##.#..#. ..#.###...

#.##...##. ..##.#..#. ..#.###...
##..#.##.. ..#..###.# ##.##....#
##.####... .#.####.#. ..#.###..#
####.#.#.. ...#.##### ###.#..###
.#.####... ...##..##. .######.##
.##..##.#. ....#...## #.#.#.#...
....#..#.# #.#.#.##.# #.###.###.
..#.#..... .#.##.#..# #.###.##..
####.#.... .#..#.##.. .######...
...#.#.#.# ###.##.#.. .##...####

...#.#.#.# ###.##.#.. .##...####
..#.#.###. ..##.##.## #..#.##..#
..####.### ##.#...##. .#.#..#.##
#..#.#..#. ...#.#.#.. .####.###.
.#..####.# #..#.#.#.# ####.###..
.#####..## #####...#. .##....##.
##.##..#.. ..#...#... .####...#.
#.#.###... .##..##... .####.##.#
#...###... ..##...#.. ...#..####
..#.#....# ##.#.#.... ...##.....
For reference, the IDs of the above tiles are:
1951    2311    3079
2729    1427    2473
2971    1489    1171

To check that you've assembled the image correctly, multiply the IDs of the four corner tiles together. If you do this with the assembled tiles from
the example above, you get 1951 * 3079 * 2971 * 1171 = 20899048083289.

Assemble the tiles into an image. What do you get if you multiply together the IDs of the four corner tiles?
*/

std::array<std::vector<std::string>, 8> get_all_rotations(const std::vector<std::string>& tile) {
    const int rows = tile.size(), cols = tile.front().size();
    std::array<std::vector<std::string>, 8> res;
    res.fill(tile);

    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                res[i][j][k] = res[i - 1][rows - 1 - k][j];
            }
        }
    }
    res[4] = res[0];
    for (std::string& row : res[4]) {
        std::ranges::reverse(row);
    }
    for (int i = 5; i < 8; i++) {
        for (int j = 0; j < rows; j++) {
            for (int k = 0; k < cols; k++) {
                res[i][j][k] = res[i - 1][rows - 1 - k][j];
            }
        }
    }
    return res;
}

bool is_compactible(const std::vector<std::vector<std::pair<int, std::vector<std::string>>>>& grid, const std::vector<std::string>& tile,
                    const Vec2<int>& position) {
    const int size = grid.size();

    if (position.x > 0 && grid[position.x - 1][position.y].first != -1) {
        if (grid[position.x - 1][position.y].second.back() != tile.front()) {
            return false;
        }
    }
    if (position.x < size - 1 && grid[position.x + 1][position.y].first != -1) {
        if (grid[position.x + 1][position.y].second.front() != tile.back()) {
            return false;
        }
    }
    if (position.y > 0 && grid[position.x][position.y - 1].first != -1) {
        if (!std::ranges::all_of(std::views::zip_transform([](const std::string& lhs, const std::string& rhs) { return lhs.back() == rhs.front(); },
                                                           grid[position.x][position.y - 1].second, tile),
                                 std::identity{})) {
            return false;
        }
    }
    if (position.y < size - 1 && grid[position.x][position.y + 1].first != -1) {
        if (!std::ranges::all_of(std::views::zip_transform([](const std::string& lhs, const std::string& rhs) { return lhs.front() == rhs.back(); },
                                                           grid[position.x][position.y + 1].second, tile),
                                 std::identity{})) {
            return false;
        }
    }
    return true;
}

uint64_t resolve(std::vector<std::vector<std::pair<int, std::vector<std::string>>>>& grid,
                 const std::unordered_map<int, std::vector<std::string>>& tiles, const Vec2<int>& position, std::unordered_set<int>& seen) {
    if (seen.size() == grid.size() * grid.size()) {
        return static_cast<uint64_t>(grid.front().front().first) * grid.front().back().first * grid.back().front().first * grid.back().back().first;
    }
    for (const auto& [id, tile] : tiles |
             std::views::filter([&seen](const std::pair<int, std::vector<std::string>>& element) -> bool { return !seen.contains(element.first); })) {
        for (const std::vector<std::string>& rotation : get_all_rotations(tile)) {
            if (is_compactible(grid, rotation, position)) {
                Vec2<int> next = position;
                grid[position.x][position.y] = {id, rotation};
                seen.insert(id);

                if (next.y == grid.size() - 1) {
                    next.y = 0;
                    next.x++;
                } else {
                    next.y++;
                }
                if (const uint64_t result = resolve(grid, tiles, next, seen)) {
                    return result;
                }
                seen.erase(id);
                grid[position.x][position.y] = {-1, {}};
            }
        }
    }
    return 0;
}

uint64_t part1(const char* input, const bool sea_monster) {
    std::string line;
    std::unordered_set<int> seen;
    std::unordered_map<int, std::vector<std::string>> tiles;
    std::stringstream file(input);

    while (std::getline(file, line)) {
        int idx;
        std::sscanf(line.c_str(), "Tile %d:", &idx);

        while (std::getline(file, line)) {
            if (line.empty()) {
                break;
            }
            tiles[idx].push_back(line);
        }
    }
    const int size = std::sqrt(tiles.size());
    std::vector grid(size, std::vector(size, std::pair(-1, std::vector<std::string>())));
    const uint64_t res = resolve(grid, tiles, {0, 0}, seen);

    if (sea_monster) {
        constexpr std::array monster = {
            Vec2{18, 0}, Vec2{0, 1}, Vec2{5, 1}, Vec2{6, 1}, Vec2{11, 1}, Vec2{12, 1}, Vec2{17, 1}, Vec2{18, 1},
            Vec2{19, 1}, Vec2{1, 2}, Vec2{4, 2}, Vec2{7, 2}, Vec2{10, 2}, Vec2{13, 2}, Vec2{16, 2},
        };
        const int tile_size = grid.front().front().second.size();
        std::vector<std::string> image;

        for (int i = 0; i < size; i++) {
            for (int k = 1; k < tile_size - 1; k++) {
                std::string row;

                for (int j = 0; j < size; j++) {
                    for (int l = 1; l < tile_size - 1; l++) {
                        row += grid[i][j].second[k][l];
                    }
                }
                image.push_back(std::move(row));
            }
        }
        const int image_size = image.size();

        for (const std::vector<std::string>& rotation : get_all_rotations(image)) {
            int monsters = 0;

            for (int y = 0; y < image_size - 2; y++) {
                for (int x = 0; x < image_size - 19; x++) {
                    bool found = true;

                    for (const auto& [dx, dy] : monster) {
                        if (rotation[y + dy][x + dx] != '#') {
                            found = false;
                            break;
                        }
                    }
                    if (found) {
                        monsters++;
                    }
                }
            }
            if (monsters > 0) {
                return std::ranges::fold_left(rotation, 0,
                                              [](const int sum, const std::string& row) -> int { return sum + std::ranges::count(row, '#'); }) -
                    monsters * monster.size();
            }
        }
    } else {
        return res;
    }
    std::unreachable();
}

/*
--- Part Two ---
Now, you're ready to check the image for sea monsters.

The borders of each tile are not part of the actual image; start by removing them.

In the example above, the tiles become:
.#.#..#. ##...#.# #..#####
###....# .#....#. .#......
##.##.## #.#.#..# #####...
###.#### #...#.## ###.#..#
##.#.... #.##.### #...#.##
...##### ###.#... .#####.#
....#..# ...##..# .#.###..
.####... #..#.... .#......

#..#.##. .#..###. #.##....
#.####.. #.####.# .#.###..
###.#.#. ..#.#### ##.#..##
#.####.. ..##..## ######.#
##..##.# ...#...# .#.#.#..
...#..#. .#.#.##. .###.###
.#.#.... #.##.#.. .###.##.
###.#... #..#.##. ######..

.#.#.### .##.##.# ..#.##..
.####.## #.#...## #.#..#.#
..#.#..# ..#.#.#. ####.###
#..####. ..#.#.#. ###.###.
#####..# ####...# ##....##
#.##..#. .#...#.. ####...#
.#.###.. ##..##.. ####.##.
...###.. .##...#. ..#..###

Remove the gaps to form the actual image:
.#.#..#.##...#.##..#####
###....#.#....#..#......
##.##.###.#.#..######...
###.#####...#.#####.#..#
##.#....#.##.####...#.##
...########.#....#####.#
....#..#...##..#.#.###..
.####...#..#.....#......
#..#.##..#..###.#.##....
#.####..#.####.#.#.###..
###.#.#...#.######.#..##
#.####....##..########.#
##..##.#...#...#.#.#.#..
...#..#..#.#.##..###.###
.#.#....#.##.#...###.##.
###.#...#..#.##.######..
.#.#.###.##.##.#..#.##..
.####.###.#...###.#..#.#
..#.#..#..#.#.#.####.###
#..####...#.#.#.###.###.
#####..#####...###....##
#.##..#..#...#..####...#
.#.###..##..##..####.##.
...###...##...#...#..###

Now, you're ready to search for sea monsters! Because your image is monochrome, a sea monster will look like this:
                  #
#    ##    ##    ###
 #  #  #  #  #  #

When looking for this pattern in the image, the spaces can be anything; only the # need to match. Also, you might need to rotate or flip your image
before it's oriented correctly to find sea monsters. In the above image, after flipping and rotating it to the appropriate orientation, there are two
sea monsters (marked with O):
.####...#####..#...###..
#####..#..#.#.####..#.#.
.#.#...#.###...#.##.O#..
#.O.##.OO#.#.OO.##.OOO##
..#O.#O#.O##O..O.#O##.##
...#.#..##.##...#..#..##
#.##.#..#.#..#..##.#.#..
.###.##.....#...###.#...
#.####.#.#....##.#..#.#.
##...#..#....#..#...####
..#.##...###..#.#####..#
....#.##.#.#####....#...
..##.##.###.....#.##..#.
#...#...###..####....##.
.#.##...#.##.#.#.###...#
#.###.#..####...##..#...
#.###...#.##...#.##O###.
.O##.#OO.###OO##..OOO##.
..O#.O..O..O.#O##O##.###
#.#..##.########..#..##.
#.#####..#.#...##..#....
#....##..#.#########..##
#...#.....#..##...###.##
#..###....##.#...##.##.#

Determine how rough the waters are in the sea monsters' habitat by counting the number of # that are not part of a sea monster. In the above example,
the habitat's water roughness is 273.

How many # are not part of a sea monster?
*/

uint64_t part2(const char* input) { return part1(input, true); }

int main() {
    std::println("Part 1:");
    Executor::test(part1, R"(Tile 2311:
..##.#..#.
##..#.....
#...##..#.
####.#...#
##.##.###.
##...#.###
.#.#.#..##
..#....#..
###...#.#.
..###..###

Tile 1951:
#.##...##.
#.####...#
.....#..##
#...######
.##.#....#
.###.#####
###.##.##.
.###....#.
..#.#..#.#
#...##.#..

Tile 1171:
####...##.
#..##.#..#
##.#..#.#.
.###.####.
..###.####
.##....##.
.#...####.
#.##.####.
####..#...
.....##...

Tile 1427:
###.##.#..
.#..#.##..
.#.##.#..#
#.#.#.##.#
....#...##
...##..##.
...#.#####
.#.####.#.
..#..###.#
..##.#..#.

Tile 1489:
##.#.#....
..##...#..
.##..##...
..#...#...
#####...#.
#..#.#.#.#
...#.#.#..
##.#...##.
..##.##.##
###.##.#..

Tile 2473:
#....####.
#..#.##...
#.##..#...
######.#.#
.#...#.#.#
.#########
.###.#..#.
########.#
##...##.#.
..###.#.#.

Tile 2971:
..#.#....#
#...###...
#.#.###...
##.##..#..
.#####..##
.#..####.#
#..#.#..#.
..####.###
..#.#.###.
...#.#.#.#

Tile 2729:
...#.#.#.#
####.#....
..#.#.....
....#..#.#
.##..##.#.
.#.####...
####.#.#..
##.####...
##..#.##..
#.##...##.

Tile 3079:
#.#.#####.
.#..######
..#.......
######....
####.#..#.
.#...#.##.
#.#####.##
..#.###...
..#.......
..#.###...)", false, 20899048083289);
    Executor::run(part1, input20, false);

    std::println("Part 2:");
    Executor::test(part2, R"(Tile 2311:
..##.#..#.
##..#.....
#...##..#.
####.#...#
##.##.###.
##...#.###
.#.#.#..##
..#....#..
###...#.#.
..###..###

Tile 1951:
#.##...##.
#.####...#
.....#..##
#...######
.##.#....#
.###.#####
###.##.##.
.###....#.
..#.#..#.#
#...##.#..

Tile 1171:
####...##.
#..##.#..#
##.#..#.#.
.###.####.
..###.####
.##....##.
.#...####.
#.##.####.
####..#...
.....##...

Tile 1427:
###.##.#..
.#..#.##..
.#.##.#..#
#.#.#.##.#
....#...##
...##..##.
...#.#####
.#.####.#.
..#..###.#
..##.#..#.

Tile 1489:
##.#.#....
..##...#..
.##..##...
..#...#...
#####...#.
#..#.#.#.#
...#.#.#..
##.#...##.
..##.##.##
###.##.#..

Tile 2473:
#....####.
#..#.##...
#.##..#...
######.#.#
.#...#.#.#
.#########
.###.#..#.
########.#
##...##.#.
..###.#.#.

Tile 2971:
..#.#....#
#...###...
#.#.###...
##.##..#..
.#####..##
.#..####.#
#..#.#..#.
..####.###
..#.#.###.
...#.#.#.#

Tile 2729:
...#.#.#.#
####.#....
..#.#.....
....#..#.#
.##..##.#.
.#.####...
####.#.#..
##.####...
##..#.##..
#.##...##.

Tile 3079:
#.#.#####.
.#..######
..#.......
######....
####.#..#.
.#...#.##.
#.#####.##
..#.###...
..#.......
..#.###...)", 273);
    Executor::run(part2, input20);

    return 0;
}
