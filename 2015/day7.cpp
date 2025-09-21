#include <iostream>
#include <sstream>
#include <unordered_map>
#include "inputs.hpp"

/*
--- Day 7: Some Assembly Required ---
This year, Santa brought little Bobby Tables a set of wires and bitwise logic gates! Unfortunately, little Bobby is a little under the recommended age
range, and he needs help assembling the circuit.

Each wire has an identifier (some lowercase letters) and can carry a 16-bit signal (a number from 0 to 65535). A signal is provided to each wire by a
gate, another wire, or some specific value. Each wire can only get a signal from one source, but can provide its signal to multiple destinations. A
gate provides no signal until all of its inputs have a signal.

The included instructions booklet describes how to connect the parts together: x AND y -> z means to connect wires x and y to an AND gate, and then
connect its output to wire z.

For example:
    - 123 -> x means that the signal 123 is provided to wire x.
    - x AND y -> z means that the bitwise AND of wire x and wire y is provided to wire z.
    - p LSHIFT 2 -> q means that the value from wire p is left-shifted by 2 and then provided to wire q.
    - NOT e -> f means that the bitwise complement of the value from wire e is provided to wire f.
    - Other possible gates include OR (bitwise OR) and RSHIFT (right-shift). If, for some reason, you'd like to emulate the circuit instead, almost
      all programming languages (for example, C, JavaScript, or Python) provide operators for these gates.

For example, here is a simple circuit:
```
123 -> x
456 -> y
x AND y -> d
x OR y -> e
x LSHIFT 2 -> f
y RSHIFT 2 -> g
NOT x -> h
NOT y -> i
```
After it is run, these are the signals on the wires:
```
d: 72
e: 507
f: 492
g: 114
h: 65412
i: 65079
x: 123
y: 456
```
In little Bobby's kit's instructions booklet (provided as your puzzle input), what signal is ultimately provided to wire a?
*/

using value = std::tuple<std::string, std::string, std::string>;

uint16_t resolve(std::unordered_map<std::string, value>& hash, std::unordered_map<std::string, uint16_t>& cache, const std::string& key) {
    if (std::isdigit(static_cast<unsigned char>(key[0]))) {
        return static_cast<uint16_t>(std::stoi(key));
    }
    if (cache.count(key)) {
        return cache[key];
    }
    auto& [lhs, opr, rhs] = hash[key];
    uint16_t left = 0, right = 0;

    if (!lhs.empty()) {
        left = resolve(hash, cache, lhs);
    }
    right = resolve(hash, cache, rhs);

    uint16_t result;
    if (opr == "NOT") {
        result = static_cast<uint16_t>(~right);
    } else if (opr == "AND") {
        result = static_cast<uint16_t>(left & right);
    } else if (opr == "OR") {
        result = static_cast<uint16_t>(left | right);
    } else if (opr == "LSHIFT") {
        result = static_cast<uint16_t>(left << right);
    } else if (opr == "RSHIFT") {
        result = static_cast<uint16_t>(left >> right);
    } else if (opr == "=") {
        result = right;
    } else {
        throw std::runtime_error("Unknown operator: " + opr);
    }

    cache[key] = result;
    return result;
}

std::unordered_map<std::string, value> parse() {
    std::unordered_map<std::string, value> hash;
    std::stringstream sss(input7);
    std::string token, arrow, res, opr, rhs, line;

    while (std::getline(sss, line)) {
        std::stringstream ss(line);
        ss >> token;

        if (token[0] == 'N') {
            ss >> rhs >> arrow >> res;
            hash[res] = {"", token, rhs};
        } else {
            ss >> opr;
            if (opr == "->") {
                ss >> res;
                hash[res] = {"", "=", token};
            } else {
                ss >> rhs >> arrow >> res;
                hash[res] = {token, opr, rhs};
            }
        }
    }

    return hash;
}

int part1() {
    std::unordered_map<std::string, value> hash = parse();
    std::unordered_map<std::string, uint16_t> cache;
    return resolve(hash, cache, "a");
}

/*
--- Part Two ---
Now, take the signal you got on wire a, override wire b to that signal, and reset the other wires (including wire a). What new signal is ultimately
provided to wire a?
*/

int part2() {
    std::unordered_map<std::string, value> hash = parse();
    std::unordered_map<std::string, uint16_t> cache;
    hash["b"] = {"", "=", std::to_string(part1())};
    cache.clear();
    return resolve(hash, cache, "a");
}

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
