#include <algorithm>
#include <iostream>
#include "../md5.hpp"
#include "inputs.hpp"

/*
--- Day 17: Two Steps Forward ---
You're trying to access a secure vault protected by a 4x4 grid of small rooms connected by doors. You start in the top-left room (marked S), and you
can access the vault (marked V) once you reach the bottom-right room:
#########
#S| | | #
#-#-#-#-#
# | | | #
#-#-#-#-#
# | | | #
#-#-#-#-#
# | | |
####### V

Fixed walls are marked with #, and doors are marked with - or |.

The doors in your current room are either open or closed (and locked) based on the hexadecimal MD5 hash of a passcode (your puzzle input) followed by
a sequence of uppercase characters representing the path you have taken so far (U for up, D for down, L for left, and R for right).

Only the first four characters of the hash are used; they represent, respectively, the doors up, down, left, and right from your current position. Any
b, c, d, e, or f means that the corresponding door is open; any other character (any number or a) means that the corresponding door is closed and
locked.

To access the vault, all you need to do is reach the bottom-right room; reaching this room opens the vault and all doors in the maze.

For example, suppose the passcode is hijkl. Initially, you have taken no steps, and so your path is empty: you simply find the MD5 hash of hijkl
alone. The first four characters of this hash are ced9, which indicate that up is open (c), down is open (e), left is open (d), and right is closed
and locked (9). Because you start in the top-left corner, there are no "up" or "left" doors to be open, so your only choice is down.

Next, having gone only one step (down, or D), you find the hash of hijklD. This produces f2bc, which indicates that you can go back up, left (but
that's a wall), or right. Going right means hashing hijklDR to get 5745 - all doors closed and locked. However, going up instead is worthwhile: even
though it returns you to the room you started in, your path would then be DU, opening a different set of doors.

After going DU (and then hashing hijklDU to get 528e), only the right door is open; after going DUR, all doors lock. (Fortunately, your actual
passcode is not hijkl).

Passcodes actually used by Easter Bunny Vault Security do allow access to the vault if you know the right path. For example:
    - If your passcode were ihgpwlah, the shortest path would be DDRRRD.
    - With kglvqrro, the shortest path would be DDUDRLRRUDRD.
    - With ulqzkmiv, the shortest would be DRURDRUDDLLDLUURRDULRLDUUDDDRR.

Given your vault's passcode, what is the shortest path (the actual path, not just the length) to reach the vault?
*/

constexpr std::pair terminate = {3, 3};

constexpr bool possible(const char ch) { return ch >= 'b' && ch <= 'f'; }

void search(const std::string& passcode, const int i, const int j, std::string& path) {
    if (i == terminate.first && j == terminate.second) {
        path = passcode.substr(8);
        return;
    }
    const std::string hash = md5(passcode);

    if (i > 0 && possible(hash[0])) {
        search(passcode + 'U', i - 1, j, path);
    }
    if (i < 3 && possible(hash[1])) {
        search(passcode + 'D', i + 1, j, path);
    }
    if (j > 0 && possible(hash[2])) {
        search(passcode + 'L', i, j - 1, path);
    }
    if (j < 3 && possible(hash[3])) {
        search(passcode + 'R', i, j + 1, path);
    }
}

std::string part1() {
    std::string path;
    search(input17, 0, 0, path);
    return path;
}

/*
--- Part Two ---
You're curious how robust this security solution really is, and so you decide to find longer and longer paths which still provide access to the vault.
You remember that paths always end the first time they reach the bottom-right room (that is, they can never pass through it, only end in it).

For example:
    - If your passcode were ihgpwlah, the longest path would take 370 steps.
    - With kglvqrro, the longest path would be 492 steps long.
    - With ulqzkmiv, the longest path would be 830 steps long.

What is the length of the longest path that reaches the vault?
*/

std::string search(const std::string& passcode, const int i, const int j) {
    if (i == terminate.first && j == terminate.second) {
        return passcode.substr(8);
    }
    const std::string hash = md5(passcode);
    std::array<std::string, 4> paths;

    if (i > 0 && possible(hash[0])) {
        paths[0] = search(passcode + 'U', i - 1, j);
    }
    if (i < 3 && possible(hash[1])) {
        paths[1] = search(passcode + 'D', i + 1, j);
    }
    if (j > 0 && possible(hash[2])) {
        paths[2] = search(passcode + 'L', i, j - 1);
    }
    if (j < 3 && possible(hash[3])) {
        paths[3] = search(passcode + 'R', i, j + 1);
    }
    return *std::ranges::max_element(paths, [](const std::string& lhs, const std::string& rhs) -> bool { return lhs.length() < rhs.length(); });
}

int part2() { return search(input17, 0, 0).length(); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
