#include "inputs.hpp"

/*
--- Day 11: Radioisotope Thermoelectric Generators ---
You come upon a column of four floors that have been entirely sealed off from the rest of the building except for a small dedicated lobby. There are
some radiation warnings and a big sign which reads "Radioisotope Testing Facility".

According to the project status board, this facility is currently being used to experiment with Radioisotope Thermoelectric Generators (RTGs, or
simply "generators") that are designed to be paired with specially-constructed microchips. Basically, an RTG is a highly radioactive rock that
generates electricity through heat.

The experimental RTGs have poor radiation containment, so they're dangerously radioactive. The chips are prototypes and don't have normal radiation
shielding, but they do have the ability to generate an electromagnetic radiation shield when powered. Unfortunately, they can only be powered by their
corresponding RTG. An RTG powering a microchip is still dangerous to other microchips.

In other words, if a chip is ever left in the same area as another RTG, and it's not connected to its own RTG, the chip will be fried. Therefore, it
is assumed that you will follow procedure and keep chips connected to their corresponding RTG when they're in the same room, and away from other RTGs
otherwise.

These microchips sound very interesting and useful to your current activities, and you'd like to try to retrieve them. The fourth floor of the
facility has an assembling machine which can make a self-contained, shielded computer for you to take with you - that is, if you can bring it all of
the RTGs and microchips.

Within the radiation-shielded part of the facility (in which it's safe to have these pre-assembly RTGs), there is an elevator that can move between
the four floors. Its capacity rating means it can carry at most yourself and two RTGs or microchips in any combination. (They're rigged to some heavy
diagnostic equipment - the assembling machine will detach it for you.) As a security measure, the elevator will only function if it contains at least
one RTG or microchip. The elevator always stops on each floor to recharge, and this takes long enough that the items within it and the items on that
floor can irradiate each other. (You can prevent this if a Microchip and its Generator end up on the same floor in this way, as they can be connected
while the elevator is recharging.)

You make some notes of the locations of each component of interest (your puzzle input). Before you don a hazmat suit and start moving things around,
you'd like to have an idea of what you need to do.

When you enter the containment area, you and the elevator will start on the first floor.

For example, suppose the isolated area has the following arrangement:
The first floor contains a hydrogen-compatible microchip and a lithium-compatible microchip.
The second floor contains a hydrogen generator.
The third floor contains a lithium generator.
The fourth floor contains nothing relevant.

As a diagram (F# for a Floor number, E for Elevator, H for Hydrogen, L for Lithium, M for Microchip, and G for Generator), the initial state looks
like this:
F4 .  .  .  .  .
F3 .  .  .  LG .
F2 .  HG .  .  .
F1 E  .  HM .  LM

Then, to get everything up to the assembling machine on the fourth floor, the following steps could be taken:
    - Bring the Hydrogen-compatible Microchip to the second floor, which is safe because it can get power from the Hydrogen Generator:
      F4 .  .  .  .  .
      F3 .  .  .  LG .
      F2 E  HG HM .  .
      F1 .  .  .  .  LM

    - Bring both Hydrogen-related items to the third floor, which is safe because the Hydrogen-compatible microchip is getting power from its
      generator:
      F4 .  .  .  .  .
      F3 E  HG HM LG .
      F2 .  .  .  .  .
      F1 .  .  .  .  LM

    - Leave the Hydrogen Generator on floor three, but bring the Hydrogen-compatible Microchip back down with you so you can still use the elevator:
      F4 .  .  .  .  .
      F3 .  HG .  LG .
      F2 E  .  HM .  .
      F1 .  .  .  .  LM

    - At the first floor, grab the Lithium-compatible Microchip, which is safe because Microchips don't affect each other:
      F4 .  .  .  .  .
      F3 .  HG .  LG .
      F2 .  .  .  .  .
      F1 E  .  HM .  LM

    - Bring both Microchips up one floor, where there is nothing to fry them:
      F4 .  .  .  .  .
      F3 .  HG .  LG .
      F2 E  .  HM .  LM
      F1 .  .  .  .  .

    - Bring both Microchips up again to floor three, where they can be temporarily connected to their corresponding generators while the elevator
      recharges, preventing either of them from being fried:
      F4 .  .  .  .  .
      F3 E  HG HM LG LM
      F2 .  .  .  .  .
      F1 .  .  .  .  .

    - Bring both Microchips to the fourth floor:
      F4 E  .  HM .  LM
      F3 .  HG .  LG .
      F2 .  .  .  .  .
      F1 .  .  .  .  .

    - Leave the Lithium-compatible microchip on the fourth floor, but bring the Hydrogen-compatible one so you can still use the elevator; this is
      safe because although the Lithium Generator is on the destination floor, you can connect Hydrogen-compatible microchip to the Hydrogen Generator
      there:
      F4 .  .  .  .  LM
      F3 E  HG HM LG .
      F2 .  .  .  .  .
      F1 .  .  .  .  .

    - Bring both Generators up to the fourth floor, which is safe because you can connect the Lithium-compatible Microchip to the Lithium Generator
      upon arrival:
      F4 E  HG .  LG LM
      F3 .  .  HM .  .
      F2 .  .  .  .  .
      F1 .  .  .  .  .

    - Bring the Lithium Microchip with you to the third floor so you can use the elevator:
      F4 .  HG .  LG .
      F3 E  .  HM .  LM
      F2 .  .  .  .  .
      F1 .  .  .  .  .

    - Bring both Microchips to the fourth floor:
      F4 E  HG HM LG LM
      F3 .  .  .  .  .
      F2 .  .  .  .  .
      F1 .  .  .  .  .

In this arrangement, it takes 11 steps to collect all of the objects at the fourth floor for assembly. (Each elevator stop counts as one step, even if
nothing is added to or removed from it.)

In your situation, what is the minimum number of steps required to bring all of the objects to the fourth floor?
*/

struct State {
    int elevator;
    std::vector<std::pair<int, int>> items;

    bool operator==(const State& state) const { return elevator == state.elevator && items == state.items; }
};

std::string canon(State state) {
    std::ranges::sort(state.items);
    std::string key = std::to_string(state.elevator) + "|";

    for (const auto& [generator_floor, microchip_floor] : state.items) {
        key += std::to_string(generator_floor) + "," + std::to_string(microchip_floor) + ";";
    }
    return key;
}

bool valid(const State& state) {
    const int size = state.items.size();

    for (int i = 0; i < size; i++) {
        const auto& [generator_floor, microchip_floor] = state.items[i];

        if (generator_floor != microchip_floor) {
            for (int j = 0; j < size; j++) {
                if (j != i && state.items[j].first == microchip_floor) {
                    return false;
                }
            }
        }
    }
    return true;
}

void move(State& next, const int floor, const std::pair<int, int>& pair) {
    (pair.second ? next.items[pair.first].second : next.items[pair.first].first) = floor;
}

int bfs(const State& start) {
    auto [elevator, items] = start;
    std::queue<std::pair<State, int>> queue;
    std::unordered_set<std::string> seen;
    queue.emplace(start, 0);
    seen.insert(canon(start));

    for (std::pair<int, int>& pair : items) {
        pair = {3, 3};
    }
    while (!queue.empty()) {
        auto [current, distance] = std::move(queue.front());
        queue.pop();

        if (current.elevator == 3 && current.items == items) {
            return distance;
        }
        const int size = current.items.size();
        std::vector<std::pair<int, int>> positions;

        for (int i = 0; i < size; i++) {
            if (current.items[i].first == current.elevator) {
                positions.emplace_back(i, 0);
            }
            if (current.items[i].second == current.elevator) {
                positions.emplace_back(i, 1);
            }
        }
        std::vector floors = {current.elevator - 1, current.elevator + 1};

        for (const int floor : floors) {
            if (floor >= 0 && floor <= 3) {
                const int position_size = positions.size();

                for (int i = 0; i < position_size; i++) {
                    for (int j = i; j < position_size; j++) {
                        State next = current;
                        next.elevator = floor;
                        move(next, floor, positions[i]);

                        if (j != i) {
                            move(next, floor, positions[j]);
                        }
                        if (valid(next)) {
                            std::string key = canon(next);

                            if (!seen.contains(key)) {
                                seen.insert(key);
                                queue.push({next, distance + 1});
                            }
                        }
                    }
                }
            }
        }
    }
    return -1;
}

State parse_input(const char input[]) {
    struct Temp {
        int generator, microchip;
    };

    int id = 0, floor = 0;
    std::string word, line;
    std::stringstream s(input), file(input);
    std::vector<Temp> temp;
    std::map<std::string, int> hash;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        (ss.ignore(4) >> word).ignore(16);

        while (!ss.eof()) {
            ss >> word;

            if (word == "a") {
                ss >> word;
                bool is_microchip = word.ends_with("-compatible");
                word = is_microchip ? word.substr(0, word.size() - 11) : word;

                if (!hash.contains(word)) {
                    hash[word] = id++;
                    temp.push_back({});
                }
                (is_microchip ? temp[hash[word]].microchip : temp[hash[word]].generator) = floor;
                ss >> word;
            }
        }
        floor++;
    }
    State start;
    start.elevator = 0;
    start.items.resize(id);

    for (const int idx : hash | std::views::values) {
        start.items[idx] = {temp[idx].generator, temp[idx].microchip};
    }
    return start;
}

int part1() { return bfs(parse_input(input11)); }

/*
--- Part Two ---
You step into the cleanroom separating the lobby from the isolated area and put on the hazmat suit.

Upon entering the isolated containment area, however, you notice some extra parts on the first floor that weren't listed on the record outside:
    - An elerium generator.
    - An elerium-compatible microchip.
    - A dilithium generator.
    - A dilithium-compatible microchip.

These work just like the other generators and microchips. You'll have to get them up to assembly as well.

What is the minimum number of steps required to bring all of the objects, including these four new ones, to the fourth floor?
*/

int part2() {
    State start = parse_input(input11);

    for (const std::string& element : {"elerium", "dilithium"}) {
        start.items.push_back({0, 0});
    }
    return bfs(start);
}


int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
