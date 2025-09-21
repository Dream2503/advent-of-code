#include <iostream>
#include "inputs.hpp"

/*
--- Day 12: JSAbacusFramework.io ---
Santa's Accounting-Elves need help balancing the books after a recent order. Unfortunately, their accounting software uses a peculiar storage format.
That's where you come in.

They have a JSON document which contains a variety of things: arrays ([1,2,3]), objects ({"a":1, "b":2}), numbers, and strings. Your first job is to
simply find all of the numbers throughout the document and add them together.

For example:
    - [1,2,3] and {"a":2,"b":4} both have a sum of 6.
    - [[[3]]] and {"a":{"b":4},"c":-1} both have a sum of 3.
    - {"a":[-1,1]} and [-1,{"a":1}] both have a sum of 0.
    - [] and {} both have a sum of 0.
You will not encounter any strings containing numbers.

What is the sum of all numbers in the document?
*/

int part1() {
    const std::string input(input12);
    std::string number;
    const int size = input.length();
    int res = 0, i = 0;

    while (i < size) {
        if (input[i] == '-' || std::isdigit(input[i])) {
            const int start = i++;

            while (i < size && std::isdigit(input[i])) {
                i++;
            }
            res += std::stoi(input.substr(start, i - start));
        }
        i++;
    }
    return res;
}

/*
--- Part Two ---
Uh oh - the Accounting-Elves have realized that they double-counted everything red.

Ignore any object (and all of its children) which has any property with the value "red". Do this only for objects ({...}), not arrays ([...]).
    - [1,2,3] still has a sum of 6.
    - [1,{"c":"red","b":2},3] now has a sum of 4, because the middle object is ignored.
    - {"d":"red","e":[1,2,3,4],"f":5} now has a sum of 0, because the entire structure is ignored.
    - [1,"red",5] has a sum of 6, because "red" in an array has no effect.
*/

int depth_first_count(const std::string& input, int& idx) {
    static const int size = input.length();

    if (idx >= size) {
        return 0;
    }
    const char object = input[idx];
    int res = 0;
    idx++;

    while (idx < size) {
        if (input[idx] == '-' || std::isdigit(input[idx])) {
            const int start = idx++;

            while (idx < size && std::isdigit(input[idx])) {
                idx++;
            }
            res += std::stoi(input.substr(start, idx - start));
            continue;
        }
        if (input[idx] == '"') {
            const int start = ++idx;

            while (idx < size) {
                if (input[idx] == '"') {
                    idx++;
                    break;
                }
                idx++;
            }
            std::string word = input.substr(start, idx - start - 1);

            if (object == '{' && word == "red") {
                int depth = 1;

                while (idx < size && depth > 0) {
                    if (input[idx] == '{') {
                        depth++;
                    } else if (input[idx] == '}') {
                        depth--;
                    }
                    idx++;
                }
                return 0;
            }
            continue;
        }
        if (input[idx] == '{' || input[idx] == '[') {
            res += depth_first_count(input, idx);
            continue;
        }
        if (object + 2 == input[idx]) {
            idx++;
            return res;
        }
        idx++;
    }
    return res;
}

int part2(int idx = 0) { return depth_first_count(input12, idx); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
