#include "inputs.hpp"

/*
--- Day 25: Cryostasis ---
As you approach Santa's ship, your sensors report two important details:

First, that you might be too late: the internal temperature is -40 degrees.

Second, that one faint life signature is somewhere on the ship.

The airlock door is locked with a code; your best option is to send in a small droid to investigate the situation. You attach your ship to Santa's,
break a small hole in the hull, and let the droid run in before you seal it up again. Before your ship starts freezing, you detach your ship and set
it to automatically stay within range of Santa's ship.

This droid can follow basic instructions and report on its surroundings; you can communicate with it through an Intcode program (your puzzle input)
running on an ASCII-capable computer.

As the droid moves through its environment, it will describe what it encounters. When it says Command?, you can give it a single instruction
terminated with a newline (ASCII code 10). Possible instructions are:
    - Movement via north, south, east, or west.
    - To take an item the droid sees in the environment, use the command take <name of item>. For example, if the droid reports seeing a red ball, you
      can pick it up with take red ball.
    - To drop an item the droid is carrying, use the command drop <name of item>. For example, if the droid is carrying a green ball, you can drop it
      with drop green ball.
    - To get a list of all of the items the droid is currently carrying, use the command inv (for "inventory").

Extra spaces or other characters aren't allowed - instructions must be provided precisely.

Santa's ship is a Reindeer-class starship; these ships use pressure-sensitive floors to determine the identity of droids and crew members. The
standard configuration for these starships is for all droids to weigh exactly the same amount to make them easier to detect. If you need to get past
such a sensor, you might be able to reach the correct weight by carrying items from the environment.

Look around the ship and see if you can find the password for the main airlock.
*/

static const std::unordered_set<std::string> RESTRICTED_ITEMS{"escape pod", "infinite loop", "giant electromagnet", "photons", "molten lava"};

std::tuple<std::string, std::vector<std::string>, std::vector<std::string>> parse(VirtualMachine& VM) {
    std::string name;
    std::vector<std::string> directions, items;

    for (int i = 0; i < 6; i++) {
        VM.outputs.pop();
    }
    while (VM.outputs.front() != '=') {
        name.push_back(VM.outputs.front());
        VM.outputs.pop();
    }
    name.pop_back();
    int i = 0;

    while (i < 4) {
        if (VM.outputs.front() == '\n') {
            i++;
        }
        VM.outputs.pop();
    }
    while (VM.outputs.front() == '-') {
        for (i = 0; i < 2; i++) {
            VM.outputs.pop();
        }
        directions.push_back("");

        while (VM.outputs.front() != '\n') {
            directions.back().push_back(VM.outputs.front());
            VM.outputs.pop();
        }
        VM.outputs.pop();
    }
    i = 0;

    while (i < 2) {
        if (VM.outputs.front() == '\n') {
            i++;
        }
        VM.outputs.pop();
    }
    if (!VM.outputs.empty()) {
        while (VM.outputs.front() == '-') {
            for (i = 0; i < 2; i++) {
                VM.outputs.pop();
            }
            items.push_back("");

            while (VM.outputs.front() != '\n') {
                items.back().push_back(VM.outputs.front());
                VM.outputs.pop();
            }
            VM.outputs.pop();
        }
    }
    while (!VM.outputs.empty()) {
        VM.outputs.pop();
    }
    return {name, directions, items};
}

std::string opposite(const std::string& direction) {
    if (direction == "north") {
        return "south";
    }
    if (direction == "south") {
        return "north";
    }
    if (direction == "east") {
        return "west";
    }
    if (direction == "west") {
        return "east";
    }
    return "";
}

void send(VirtualMachine& VM, const std::string& command) {
    for (const char ch : command) {
        VM.inputs.push(ch);
    }
    VM.inputs.push('\n');
}

void traverse(VirtualMachine& VM, std::unordered_set<std::string>& seen, const std::string& name, const std::vector<std::string>& directions,
              std::vector<std::string> items, std::vector<std::string>& inv, std::vector<std::string>& path,
              std::vector<std::string>& checkpoint_path) {
    seen.insert(name);

    for (const std::string& item : items | std::views::filter([](const std::string& string) { return !RESTRICTED_ITEMS.contains(string); })) {
        inv.push_back(item);
        send(VM, "take " + item);
        VM.interpret();
        VM.outputs = {};
    }
    for (const std::string& direction : directions) {
        path.push_back(direction);
        send(VM, direction);
        VM.interpret();
        auto [next_name, next_directions, next_items] = parse(VM);

        if (next_name == "Pressure-Sensitive Floor") {
            path.pop_back();
            continue;
        }
        if (next_name == "Security Checkpoint" && checkpoint_path.empty()) {
            checkpoint_path = path;
        }
        if (!seen.contains(next_name)) {
            traverse(VM, seen, next_name, next_directions, next_items, inv, path, checkpoint_path);
        }
        if (direction == "north") {
            send(VM, "south");
        } else if (direction == "south") {
            send(VM, "north");
        } else if (direction == "east") {
            send(VM, "west");
        } else if (direction == "west") {
            send(VM, "east");
        }
        VM.interpret();
        parse(VM);
        path.pop_back();
    }
}

int part1(const char* input) {
    VirtualMachine VM(input);
    std::unordered_set<std::string> seen;
    std::vector<std::string> inv, path, checkpoint_path;
    VM.interpret();
    auto [name, directions, items] = parse(VM);
    traverse(VM, seen, name, directions, items, inv, path, checkpoint_path);

    for (const std::string& direction : checkpoint_path) {
        send(VM, direction);
        VM.interpret();
        parse(VM);
    }
    for (size_t mask = 0; mask < 1ull << inv.size(); mask++) {
        std::vector<std::string> dropped;

        for (size_t i = 0; i < inv.size(); i++) {
            if (!(mask & (1ULL << i))) {
                dropped.push_back(inv[i]);
                send(VM, "drop " + inv[i]);
                VM.interpret();
                VM.outputs = {};
            }
        }
        int i = 0;
        std::string res;
        send(VM, "north");
        VM.interpret();

        while (i < 9) {
            if (VM.outputs.front() == '\n') {
                i++;
            }
            VM.outputs.pop();
        }
        for (i = 0; i < 28; i++) {
            VM.outputs.pop();
        }
        while (VM.outputs.front() != ' ') {
            res.push_back(VM.outputs.front());
            VM.outputs.pop();
        }
        if (res == "Analysis") {
            while (!std::isdigit(VM.outputs.front())) {
                VM.outputs.pop();
            }
            res.clear();

            while (std::isdigit(VM.outputs.front())) {
                res.push_back(VM.outputs.front());
                VM.outputs.pop();
            }
            return std::stoi(res);
        }
        for (const std::string& item : dropped) {
            send(VM, "take " + item);
            VM.interpret();
            VM.outputs = {};
        }
    }
    std::unreachable();
}

/*
--- Part Two ---
As you move through the main airlock, the air inside the ship is already heating up to reasonable levels. Santa explains that he didn't notice you
coming because he was just taking a quick nap. The ship wasn't frozen; he just had the thermostat set to "North Pole".

You make your way over to the navigation console. It beeps. "Status: Stranded. Please supply measurements from 49 stars to recalibrate."

"49 stars? But the Elves told me you needed fifty--"

Santa just smiles and nods his head toward the window. There, in the distance, you can see the center of the Solar System: the Sun!

The navigation console beeps again.
*/

int main() {
    std::println("Part 1:");
    Executor::run(part1, input25);

    return 0;
}
