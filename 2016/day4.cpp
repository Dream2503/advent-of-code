#include "inputs.hpp"

/*
--- Day 4: Security Through Obscurity ---
Finally, you come across an information kiosk with a list of rooms. Of course, the list is encrypted and full of decoy data, but the instructions to
decode the list are barely hidden nearby. Better remove the decoy data first.

Each room consists of an encrypted name (lowercase letters separated by dashes) followed by a dash, a sector ID, and a checksum in square brackets.

A room is real (not a decoy) if the checksum is the five most common letters in the encrypted name, in order, with ties broken by alphabetization. For
example:

aaaaa-bbb-z-y-x-123[abxyz] is a real room because the most common letters are a (5), b (3), and then a tie between x, y, and z, which are listed
alphabetically. a-b-c-d-e-f-g-h-987[abcde] is a real room because although the letters are all tied (1 of each), the first five are listed
alphabetically. not-a-real-room-404[oarel] is a real room. totally-real-room-200[decoy] is not. Of the real rooms from the list above, the sum of
their sector IDs is 1514.

What is the sum of the sector IDs of the real rooms?
*/

int part1() {
    int res = 0;
    std::string line;
    std::array<std::pair<char, int>, 26> hash = {};
    std::stringstream file(input4);

    while (std::getline(file, line)) {
        bool on_checksum = false, valid = true;
        int sector_id = 0;
        std::string checksum;

        for (int i = 0; i < 26; i++) {
            hash[i] = {'a' + i, 0};
        }
        for (const char ch : line) {
            if (std::isalpha(ch)) {
                if (on_checksum) {
                    checksum.push_back(ch);
                } else {
                    hash[ch - 'a'].second++;
                }
            } else if (std::isdigit(ch)) {
                sector_id = sector_id * 10 + ch - '0';
            } else if (ch == '[') {
                on_checksum = true;
            }
        }
        std::ranges::stable_sort(hash,
                                 [](const std::pair<char, int>& lhs, const std::pair<char, int>& rhs) -> bool { return lhs.second > rhs.second; });

        for (int i = 0; i < 5; i++) {
            if (checksum.find(hash[i].first) == std::string::npos) {
                valid = false;
                break;
            }
        }
        if (valid) {
            res += sector_id;
        }
    }
    return res;
}

/*
--- Part Two ---
With all the decoy data out of the way, it's time to decrypt this list and get moving.

The room names are encrypted by a state-of-the-art shift cipher, which is nearly unbreakable without the right software. However, the information
kiosk designers at Easter Bunny HQ were not expecting to deal with a master cryptographer like yourself.

To decrypt a room name, rotate each letter forward through the alphabet a number of times equal to the room's sector ID. A becomes B, B becomes C, Z
becomes A, and so on. Dashes become spaces.

For example, the real name for qzmt-zixmtkozy-ivhz-343 is very encrypted name.

What is the sector ID of the room where North Pole objects are stored?
*/

int part2() {
    const std::string target = "northpole object storage ";
    std::string line;
    std::stringstream file(input4);

    while (std::getline(file, line)) {
        bool valid = true;
        int sector_id = 0;
        std::string name;

        for (const char ch : line) {
            if (std::isdigit(ch)) {
                sector_id = sector_id * 10 + ch - '0';
            } else if (ch == '[') {
                break;
            } else {
                name.push_back(ch);
            }
        }
        if (name.length() == target.length()) {
            const int size = name.length();

            for (int i = 0; i < size; i++) {
                if ((name[i] == '-' && target[i] != ' ') || (std::isalpha(name[i]) && (name[i] - 'a' + sector_id) % 26 != target[i] - 'a')) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                return sector_id;
            }
        }
    }
    return -1;
}

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
