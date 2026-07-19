#include "inputs.hpp"

/*
--- Day 16: Ticket Translation ---
As you're walking to yet another connecting flight, you realize that one of the legs of your re-routed trip coming up is on a high-speed train.
However, the train ticket you were given is in a language you don't understand. You should probably figure out what it says before you get to the
train station after the next flight.

Unfortunately, you can't actually read the words on the ticket. You can, however, read the numbers, and so you figure out the fields these tickets
must have and the valid ranges for values in those fields.

You collect the rules for ticket fields, the numbers on your ticket, and the numbers on other nearby tickets for the same train service (via the
airport security cameras) together into a single document you can reference (your puzzle input).

The rules for ticket fields specify a list of fields that exist somewhere on the ticket and the valid ranges of values for each field. For example, a
rule like class: 1-3 or 5-7 means that one of the fields in every ticket is named class and can be any value in the ranges 1-3 or 5-7 (inclusive, such
that 3 and 5 are both valid in this field, but 4 is not).

Each ticket is represented by a single line of comma-separated values. The values are the numbers on the ticket in the order they appear; every ticket
has the same format. For example, consider this ticket:
.--------------------------------------------------------.
| ????: 101    ?????: 102   ??????????: 103     ???: 104 |
|                                                        |
| ??: 301  ??: 302             ???????: 303      ??????? |
| ??: 401  ??: 402           ???? ????: 403    ????????? |
'--------------------------------------------------------'

Here, ? represents text in a language you don't understand. This ticket might be represented as 101,102,103,104,301,302,303,401,402,403; of course,
the actual train tickets you're looking at are much more complicated. In any case, you've extracted just the numbers in such a way that the first
number is always the same specific field, the second number is always a different specific field, and so on - you just don't know what each position
actually means!

Start by determining which tickets are completely invalid; these are tickets that contain values which aren't valid for any field. Ignore your ticket
for now.

For example, suppose you have the following notes:
class: 1-3 or 5-7
row: 6-11 or 33-44
seat: 13-40 or 45-50

your ticket:
7,1,14

nearby tickets:
7,3,47
40,4,50
55,2,20
38,6,12

It doesn't matter which position corresponds to which field; you can identify invalid nearby tickets by considering only whether tickets contain
values that are not valid for any field. In this example, the values on the first nearby ticket are all valid for at least one field. This is not true
of the other three nearby tickets: the values 4, 55, and 12 are are not valid for any field. Adding together all of the invalid values produces your
ticket scanning error rate: 4 + 55 + 12 = 71.

Consider the validity of the nearby tickets you scanned. What is your ticket scanning error rate?
*/

int part1() {
    int res = 0;
    std::bitset<1000> values;
    std::string line;
    std::stringstream file(input16);

    while (std::getline(file, line) && line != "") {
        Vec2<int> range1, range2;
        std::sscanf(line.substr(line.find(':') + 2).c_str(), "%d-%d or %d-%d", &range1.x, &range1.y, &range2.x, &range2.y);

        for (const auto [begin, end] : {range1, range2}) {
            for (int i = begin; i <= end; i++) {
                values.set(i);
            }
        }
    }
    while (std::getline(file, line) && line != "nearby tickets:")
        ;

    while (std::getline(file, line)) {
        int value;
        std::stringstream ss(line);

        while (ss) {
            (ss >> value).ignore(1);

            if (!values[value]) {
                res += value;
            }
        }
    }
    return res;
}

/*
--- Part Two ---
Now that you've identified which tickets contain invalid values, discard those tickets entirely. Use the remaining valid tickets to determine which
field is which.

Using the valid ranges for each field, determine what order the fields appear on the tickets. The order is consistent between all tickets: if seat is
the third field, it is the third field on every ticket, including your ticket.

For example, suppose you have the following notes:
class: 0-1 or 4-19
row: 0-5 or 8-19
seat: 0-13 or 16-19

your ticket:
11,12,13

nearby tickets:
3,9,18
15,1,5
5,14,9

Based on the nearby tickets in the above example, the first position must be row, the second position must be class, and the third position must be
seat; you can conclude that in your ticket, class is 12, row is 11, and seat is 13.

Once you work out which field is which, look for the six fields on your ticket that start with the word departure. What do you get if you multiply
those six values together?
*/

uint64_t part2() {
    int value;
    std::vector<int> my_tickets;
    std::vector<std::bitset<1000>> values;
    std::string line, tickets;
    std::stringstream file(input16);

    while (std::getline(file, line) && line != "") {
        Vec2<int> range1, range2;
        std::sscanf(line.substr(line.find(':') + 2).c_str(), "%d-%d or %d-%d", &range1.x, &range1.y, &range2.x, &range2.y);
        values.push_back({});

        for (const auto [begin, end] : {range1, range2}) {
            for (int i = begin; i <= end; i++) {
                values.back().set(i);
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        std::getline(file, tickets);
    }
    std::stringstream ss(tickets);

    while (ss) {
        (ss >> value).ignore(1);
        my_tickets.push_back(value);
    }
    for (int i = 0; i < 2; i++) {
        std::getline(file, line);
    }
    int size = values.size();
    std::vector hash(size, std::views::iota(0) | std::views::take(size) | std::ranges::to<std::vector<int>>());

    do {
        bool valid = true;
        std::vector<int> ticket;
        std::stringstream sss(tickets);

        while (sss >> value) {
            sss.ignore(1);

            if (!std::ranges::any_of(values, [&](const auto& val) -> bool { return val[value]; })) {
                valid = false;
                break;
            }
            ticket.push_back(value);
        }
        if (valid) {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (!values[j][ticket[i]]) {
                        const auto itr = std::ranges::find(hash[i], j);

                        if (itr != hash[i].end()) {
                            hash[i].erase(itr);
                        }
                    }
                }
            }
        }
    } while (std::getline(file, tickets));
    bool changed = true;

    while (changed) {
        changed = false;

        for (int i = 0; i < size; i++) {
            if (hash[i].size() == 1) {
                for (int j = 0; j < size; j++) {
                    if (i != j) {
                        const auto itr = std::ranges::find(hash[j], hash[i].front());

                        if (itr != hash[j].end()) {
                            hash[j].erase(itr);
                            changed = true;
                        }
                    }
                }
            }
        }
    }
    uint64_t res = 1;

    for (int i = 0; i < size; ++i) {
        if (hash[i][0] < 6) {
            res *= my_tickets[i];
        }
    }
    return res;
}

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
