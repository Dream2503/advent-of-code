#include "inputs.hpp"

/*
--- Day 7: Internet Protocol Version 7 ---
While snooping around the local network of EBHQ, you compile a list of IP addresses (they're IPv7, of course; IPv6 is much too limited). You'd like to
figure out which IPs support TLS (transport-layer snooping).

An IP supports TLS if it has an Autonomous Bridge Bypass Annotation, or ABBA. An ABBA is any four-character sequence which consists of a pair of two
different characters followed by the reverse of that pair, such as xyyx or abba. However, the IP also must not have an ABBA within any hypernet
sequences, which are contained by square brackets.

For example:

abba[mnop]qrst supports TLS (abba outside square brackets).
abcd[bddb]xyyx does not support TLS (bddb is within square brackets, even though xyyx is outside square brackets).
aaaa[qwer]tyui does not support TLS (aaaa is invalid; the interior characters must be different).
ioxxoj[asdfgh]zxcvbn supports TLS (oxxo is outside square brackets, even though it's within a larger string).
How many IPs in your puzzle input support TLS?
*/

bool is_abba(const std::string& line, const int i) { return line[i] == line[i - 3] && line[i - 1] == line[i - 2] && line[i] != line[i - 1]; }

int part1() {
    int res = 0;
    std::string line;
    std::stringstream file(input7);

    while (std::getline(file, line)) {
        bool on_hypernet = false, valid = false;
        const int size = line.size();
        int i = 3;

        while (i < size) {
            if (line[i] == '[') {
                on_hypernet = true;
                i += 3;
            } else if (line[i] == ']') {
                on_hypernet = false;
                i += 3;
            }
            if (on_hypernet && is_abba(line, i)) {
                valid = false;
                break;
            }
            if (!on_hypernet && is_abba(line, i)) {
                valid = true;
            }
            i++;
        }
        if (valid) {
            res++;
        }
    }
    return res;
}

/*
--- Part Two ---
You would also like to know which IPs support SSL (super-secret listening).

An IP supports SSL if it has an Area-Broadcast Accessor, or ABA, anywhere in the supernet sequences (outside any square bracketed sections), and a
corresponding Byte Allocation Block, or BAB, anywhere in the hypernet sequences. An ABA is any three-character sequence which consists of the same
character twice with a different character between them, such as xyx or aba. A corresponding BAB is the same characters but in reversed positions: yxy
and bab, respectively.

For example:

aba[bab]xyz supports SSL (aba outside square brackets with corresponding bab within square brackets).
xyx[xyx]xyx does not support SSL (xyx, but no corresponding yxy).
aaa[kek]eke supports SSL (eke in supernet with corresponding kek in hypernet; the aaa sequence is not related, because the interior character must be
different). zazbz[bzb]cdb supports SSL (zaz has no corresponding aza, but zbz has a corresponding bzb, even though zaz and zbz overlap). How many IPs
in your puzzle input support SSL?
*/

bool is_aba(const std::string& line, const int i) { return line[i] == line[i - 2] && line[i] != line[i - 1]; }

int part2() {
    int res = 0;
    std::string line;
    std::stringstream file(input7);

    while (std::getline(file, line)) {
        bool on_hypernet = false, valid;
        const int size = line.size();
        int i = 2;
        std::unordered_set<std::string> seen;

        while (i < size) {
            if (line[i] == '[') {
                on_hypernet = true;
                i += 2;
            } else if (line[i] == ']') {
                on_hypernet = false;
                i += 2;
            }
            if (on_hypernet && is_aba(line, i)) {
                seen.emplace(std::string() + line[i - 1] + line[i] + line[i - 1]);
            }
            i++;
        }
        on_hypernet = false, valid = false;
        i = 2;

        while (i < size) {
            if (line[i] == '[') {
                on_hypernet = true;
                i += 2;
            } else if (line[i] == ']') {
                on_hypernet = false;
                i += 2;
            }
            if (!on_hypernet && is_aba(line, i)) {
                if (seen.contains(std::string() + line[i] + line[i - 1] + line[i])) {
                    valid = true;
                    break;
                }
            }
            i++;
        }
        if (valid) {
            res++;
        }
    }
    return res;
}

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
