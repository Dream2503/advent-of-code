#include <iostream>
#include <sstream>
#include "inputs.hpp"

/*
--- Day 5: Doesn't He Have Intern-Elves For This? ---
Santa needs help figuring out which strings in his text file are naughty or nice.

A nice string is one with all of the following properties:
    - It contains at least three vowels (aeiou only), like aei, xazegov, or aeiouaeiouaeiou.
    - It contains at least one letter that appears twice in a row, like xx, abcdde (dd), or aabbccdd (aa, bb, cc, or dd).
    - It does not contain the strings ab, cd, pq, or xy, even if they are part of one of the other requirements.

For example:
    - ugknbfddgicrmopn is nice because it has at least three vowels (u...i...o...), a double letter (...dd...), and none of the disallowed substrings.
    - aaa is nice because it has at least three vowels and a double letter, even though the letters used by different rules overlap.
    - jchzalrnumimnmhp is naughty because it has no double letter.
    - haegwjzuvuyypxyu is naughty because it contains the string xy.
    - dvszwmarrgswjxmb is naughty because it contains only one vowel.

How many strings are nice?
*/

int part1() {
    int res = 0;
    std::string line;
    std::stringstream file(input5);

    while (std::getline(file, line)) {
        const int size = line.length();
        int vowels = 0, twice = 0, not_valid = 0;

        for (int j = 0; j < size; j++) {
            vowels += line[j] == 'a' || line[j] == 'e' || line[j] == 'i' || line[j] == 'o' || line[j] == 'u';
            twice += j < size - 1 && line[j] == line[j + 1];
            not_valid += j < size - 1 &&
                (line[j] == 'a' && line[j + 1] == 'b' || line[j] == 'c' && line[j + 1] == 'd' || line[j] == 'p' && line[j + 1] == 'q' ||
                 line[j] == 'x' && line[j + 1] == 'y');
        }
        line += size + 1;
        res += vowels >= 3 && twice && !not_valid;
    }
    return res;
}

/*
--- Part Two ---
Realizing the error of his ways, Santa has switched to a better model of determining whether a string is naughty or nice. None of the old rules apply,
as they are all clearly ridiculous.

Now, a nice string is one with all of the following properties:
    - It contains a pair of any two letters that appears at least twice in the string without overlapping, like xyxy (xy) or aabcdefgaa (aa), but not
      like aaa (aa, but it overlaps).
    - It contains at least one letter which repeats with exactly one letter between them, like xyx, abcdefeghi (efe), or even aaa.

For example:
    - qjhvhtzxzqqjkmpb is nice because is has a pair that appears twice (qj) and a letter that repeats with exactly one letter between them (zxz).
    - xxyxx is nice because it has a pair that appears twice and a letter that repeats with one between, even though the letters used by each rule
      overlap.
    - uurcxstgmygtbstg is naughty because it has a pair (tg) but no repeat with a single letter between them.
    - ieodomkazucvgmuy is naughty because it has a repeating letter with one between (odo), but no pair that appears twice.

How many strings are nice under these new rules?
*/

int part2() {
    int res = 0;
    std::string line;
    std::stringstream file(input5);

    while (std::getline(file, line)) {
        bool twice = false;
        const int size = line.length();
        int repeat = 0;

        for (int i = 0; i < size; i++) {
            repeat += i < size - 2 && line[i] == line[i + 2];

            for (int j = i + 2; j < size - 1; j++) {
                if (line[i] == line[j] && line[i + 1] == line[j + 1]) {
                    twice = true;
                }
            }
        }
        line += size + 1;
        res += repeat && twice;
    }
    return res;
}

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
