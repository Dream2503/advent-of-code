#include "inputs.hpp"

/*
--- Day 13: Mine Cart Madness ---
A crop of this size requires significant logistics to transport produce, soil, fertilizer, and so on. The Elves are very busy pushing things around in
carts on some kind of rudimentary system of tracks they've come up with.

Seeing as how cart-and-track systems don't appear in recorded history for another 1000 years, the Elves seem to be making this up as they go along.
They haven't even figured out how to avoid collisions yet.

You map out the tracks (your puzzle input) and see where you can help.

Tracks consist of straight paths (| and -), curves (/ and \), and intersections (+). Curves connect exactly two perpendicular pieces of track; for
example, this is a closed loop:
/----\
|    |
|    |
\----/

Intersections occur when two perpendicular paths cross. At an intersection, a cart is capable of turning left, turning right, or continuing straight.
Here are two loops connected by two intersections:
/-----\
|     |
|  /--+--\
|  |  |  |
\--+--/  |
   |     |
   \-----/

Several carts are also on the tracks. Carts always face either up (^), down (v), left (<), or right (>). (On your initial map, the track under each
cart is a straight path matching the direction the cart is facing.)

Each time a cart has the option to turn (by arriving at any intersection), it turns left the first time, goes straight the second time, turns right
the third time, and then repeats those directions starting again with left the fourth time, straight the fifth time, and so on. This process is
independent of the particular intersection at which the cart has arrived - that is, the cart has no per-intersection memory.

Carts all move at the same speed; they take turns moving a single step at a time. They do this based on their current location: carts on the top row
move first (acting from left to right), then carts on the second row move (again from left to right), then carts on the third row, and so on. Once
each cart has moved one step, the process repeats; each of these loops is called a tick.

For example, suppose there are two carts on a straight track:
|  |  |  |  |
v  |  |  |  |
|  v  v  |  |
|  |  |  v  X
|  |  ^  ^  |
^  ^  |  |  |
|  |  |  |  |

First, the top cart moves. It is facing down (v), so it moves down one square. Second, the bottom cart moves. It is facing up (^), so it moves up one
square. Because all carts have moved, the first tick ends. Then, the process repeats, starting with the first cart. The first cart moves down, then
the second cart moves up - right into the first cart, colliding with it! (The location of the crash is marked with an X.) This ends the second and
last tick.

Here is a longer example:
/->-\
|   |  /----\
| /-+--+-\  |
| | |  | v  |
\-+-/  \-+--/
  \------/

/-->\
|   |  /----\
| /-+--+-\  |
| | |  | |  |
\-+-/  \->--/
  \------/

/---v
|   |  /----\
| /-+--+-\  |
| | |  | |  |
\-+-/  \-+>-/
  \------/

/---\
|   v  /----\
| /-+--+-\  |
| | |  | |  |
\-+-/  \-+->/
  \------/

/---\
|   |  /----\
| /->--+-\  |
| | |  | |  |
\-+-/  \-+--^
  \------/

/---\
|   |  /----\
| /-+>-+-\  |
| | |  | |  ^
\-+-/  \-+--/
  \------/

/---\
|   |  /----\
| /-+->+-\  ^
| | |  | |  |
\-+-/  \-+--/
  \------/

/---\
|   |  /----<
| /-+-->-\  |
| | |  | |  |
\-+-/  \-+--/
  \------/

/---\
|   |  /---<\
| /-+--+>\  |
| | |  | |  |
\-+-/  \-+--/
  \------/

/---\
|   |  /--<-\
| /-+--+-v  |
| | |  | |  |
\-+-/  \-+--/
  \------/

/---\
|   |  /-<--\
| /-+--+-\  |
| | |  | v  |
\-+-/  \-+--/
  \------/

/---\
|   |  /<---\
| /-+--+-\  |
| | |  | |  |
\-+-/  \-<--/
  \------/

/---\
|   |  v----\
| /-+--+-\  |
| | |  | |  |
\-+-/  \<+--/
  \------/

/---\
|   |  /----\
| /-+--v-\  |
| | |  | |  |
\-+-/  ^-+--/
  \------/

/---\
|   |  /----\
| /-+--+-\  |
| | |  X |  |
\-+-/  \-+--/
  \------/

After following their respective paths for a while, the carts eventually crash. To help prevent crashes, you'd like to know the location of the first
crash. Locations are given in X,Y coordinates, where the furthest left column is X=0 and the furthest top row is Y=0:
           111
 0123456789012
0/---\
1|   |  /----\
2| /-+--+-\  |
3| | |  X |  |
4\-+-/  \-+--/
5  \------/

In this example, the location of the first crash is 7,3.
*/

struct Cart {
    enum Direction { LEFT, UP, RIGHT, DOWN } facing, next;
    int x, y;
};

int part1(const bool remove = false) {
    int i = 0, j;
    std::string line;
    std::vector<std::string> map;
    std::vector<Cart> carts;
    std::stringstream file(input13);

    while (std::getline(file, line)) {
        const int size = line.length();

        for (j = 0; j < size; j++) {
            bool is_cart = false;
            Cart::Direction facing;

            switch (line[j]) {
            case '<':
                facing = Cart::LEFT;
                is_cart = true;
                break;

            case '^':
                facing = Cart::UP;
                is_cart = true;
                break;

            case '>':
                facing = Cart::RIGHT;
                is_cart = true;
                break;

            case 'v':
                facing = Cart::DOWN;
                is_cart = true;
                break;

            default:
                break;
            }
            if (is_cart) {
                carts.emplace_back(facing, Cart::LEFT, i, j);
            }
        }
        map.push_back(line);
        i++;
    }

    while (true) {
        std::set<int, std::greater<int>> to_remove;
        std::ranges::sort(carts, [](const Cart& lhs, const Cart& rhs) -> bool { return lhs.x < rhs.x || (lhs.x == rhs.x && lhs.y < rhs.y); });

        for (auto& [facing, next, x, y] : carts) {
            switch (facing) {
            case Cart::LEFT:
                y--;
                break;

            case Cart::UP:
                x--;
                break;

            case Cart::RIGHT:
                y++;
                break;

            case Cart::DOWN:
                x++;
                break;
            }
            switch (map[x][y]) {
            case '/':
                switch (facing) {
                case Cart::LEFT:
                    facing = Cart::DOWN;
                    break;

                case Cart::UP:
                    facing = Cart::RIGHT;
                    break;

                case Cart::RIGHT:
                    facing = Cart::UP;
                    break;

                case Cart::DOWN:
                    facing = Cart::LEFT;
                    break;
                }
                break;

            case '\\':
                switch (facing) {
                case Cart::LEFT:
                    facing = Cart::UP;
                    break;

                case Cart::UP:
                    facing = Cart::LEFT;
                    break;

                case Cart::RIGHT:
                    facing = Cart::DOWN;
                    break;

                case Cart::DOWN:
                    facing = Cart::RIGHT;
                    break;
                }
                break;

            case '+':
                switch (next) {
                case Cart::LEFT:
                    facing = static_cast<Cart::Direction>((facing + 3) % 4);
                    break;

                case Cart::RIGHT:
                    facing = static_cast<Cart::Direction>((facing + 1) % 4);
                    break;

                case Cart::UP:
                case Cart::DOWN:
                    break;
                }
                next = static_cast<Cart::Direction>((next + 1) % 3);
                break;

            default:
                break;
            }
            for (i = 0; i < carts.size(); i++) {
                for (j = i + 1; j < carts.size(); j++) {
                    if (carts[i].x == carts[j].x && carts[i].y == carts[j].y) {
                        if (!remove) {
                            std::cout << carts[i].y << ',';
                            return carts[i].x;
                        }
                        to_remove.insert({i, j});
                    }
                }
            }
        }
        for (const int idx : to_remove) {
            carts.erase(carts.begin() + idx);
        }
        if (carts.size() == 1) {
            std::cout << carts[0].y << ',';
            return carts[0].x;
        }
    }
}

/*
--- Part Two ---
There isn't much you can do to prevent crashes in this ridiculous system. However, by predicting the crashes, the Elves know where to be in advance
and instantly remove the two crashing carts the moment any crash occurs.

They can proceed like this for a while, but eventually, they're going to run out of carts. It could be useful to figure out where the last cart that
hasn't crashed will end up.

For example:
/>-<\
|   |
| /<+-\
| | | v
\>+</ |
  |   ^
  \<->/

/---\
|   |
| v-+-\
| | | |
\-+-/ |
  |   |
  ^---^

/---\
|   |
| /-+-\
| v | |
\-+-/ |
  ^   ^
  \---/

/---\
|   |
| /-+-\
| | | |
\-+-/ ^
  |   |
  \---/

After four very expensive crashes, a tick ends with only one cart remaining; its final location is 6,4.

What is the location of the last cart at the end of the first tick where it is the only cart left?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
