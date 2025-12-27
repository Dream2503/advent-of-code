#include "inputs.hpp"

/*
--- Day 24: Immune System Simulator 20XX ---
After a weird buzzing noise, you appear back at the man's cottage. He seems relieved to see his friend, but quickly notices that the little reindeer
caught some kind of cold while out exploring.

The portly man explains that this reindeer's immune system isn't similar to regular reindeer immune systems:

The immune system and the infection each have an army made up of several groups; each group consists of one or more identical units. The armies
repeatedly fight until only one army has units remaining.

Units within a group all have the same hit points (amount of damage a unit can take before it is destroyed), attack damage (the amount of damage each
unit deals), an attack type, an initiative (higher initiative units attack first and win ties), and sometimes weaknesses or immunities. Here is an
example group:
18 units each with 729 hit points (weak to fire; immune to cold, slashing)
 with an attack that does 8 radiation damage at initiative 10

Each group also has an effective power: the number of units in that group multiplied by their attack damage. The above group has an effective power of
18 * 8 = 144. Groups never have zero or negative units; instead, the group is removed from combat.

Each fight consists of two phases: target selection and attacking.

During the target selection phase, each group attempts to choose one target. In decreasing order of effective power, groups choose their targets; in a
tie, the group with the higher initiative chooses first. The attacking group chooses to target the group in the enemy army to which it would deal the
most damage (after accounting for weaknesses and immunities, but not accounting for whether the defending group has enough units to actually receive
all of that damage).

If an attacking group is considering two defending groups to which it would deal equal damage, it chooses to target the defending group with the
largest effective power; if there is still a tie, it chooses the defending group with the highest initiative. If it cannot deal any defending groups
damage, it does not choose a target. Defending groups can only be chosen as a target by one attacking group.

At the end of the target selection phase, each group has selected zero or one groups to attack, and each group is being attacked by zero or one
groups.

During the attacking phase, each group deals damage to the target it selected, if any. Groups attack in decreasing order of initiative, regardless of
whether they are part of the infection or the immune system. (If a group contains no units, it cannot attack.)

The damage an attacking group deals to a defending group depends on the attacking group's attack type and the defending group's immunities and
weaknesses. By default, an attacking group would deal damage equal to its effective power to the defending group. However, if the defending group is
immune to the attacking group's attack type, the defending group instead takes no damage; if the defending group is weak to the attacking group's
attack type, the defending group instead takes double damage.

The defending group only loses whole units from damage; damage is always dealt in such a way that it kills the most units possible, and any remaining
damage to a unit that does not immediately kill it is ignored. For example, if a defending group contains 10 units with 10 hit points each and
receives 75 damage, it loses exactly 7 units and is left with 3 units at full health.

After the fight is over, if both armies still contain units, a new fight begins; combat only ends once one army has lost all of its units.

For example, consider the following armies:
Immune System:
17 units each with 5390 hit points (weak to radiation, bludgeoning) with
 an attack that does 4507 fire damage at initiative 2
989 units each with 1274 hit points (immune to fire; weak to bludgeoning,
 slashing) with an attack that does 25 slashing damage at initiative 3

Infection:
801 units each with 4706 hit points (weak to radiation) with an attack
 that does 116 bludgeoning damage at initiative 1
4485 units each with 2961 hit points (immune to radiation; weak to fire,
 cold) with an attack that does 12 slashing damage at initiative 4

If these armies were to enter combat, the following fights, including details during the target selection and attacking phases, would take place:
Immune System:
Group 1 contains 17 units
Group 2 contains 989 units
Infection:
Group 1 contains 801 units
Group 2 contains 4485 units

Infection group 1 would deal defending group 1 185832 damage
Infection group 1 would deal defending group 2 185832 damage
Infection group 2 would deal defending group 2 107640 damage
Immune System group 1 would deal defending group 1 76619 damage
Immune System group 1 would deal defending group 2 153238 damage
Immune System group 2 would deal defending group 1 24725 damage

Infection group 2 attacks defending group 2, killing 84 units
Immune System group 2 attacks defending group 1, killing 4 units
Immune System group 1 attacks defending group 2, killing 51 units
Infection group 1 attacks defending group 1, killing 17 units
Immune System:
Group 2 contains 905 units
Infection:
Group 1 contains 797 units
Group 2 contains 4434 units

Infection group 1 would deal defending group 2 184904 damage
Immune System group 2 would deal defending group 1 22625 damage
Immune System group 2 would deal defending group 2 22625 damage

Immune System group 2 attacks defending group 1, killing 4 units
Infection group 1 attacks defending group 2, killing 144 units
Immune System:
Group 2 contains 761 units
Infection:
Group 1 contains 793 units
Group 2 contains 4434 units

Infection group 1 would deal defending group 2 183976 damage
Immune System group 2 would deal defending group 1 19025 damage
Immune System group 2 would deal defending group 2 19025 damage

Immune System group 2 attacks defending group 1, killing 4 units
Infection group 1 attacks defending group 2, killing 143 units
Immune System:
Group 2 contains 618 units
Infection:
Group 1 contains 789 units
Group 2 contains 4434 units

Infection group 1 would deal defending group 2 183048 damage
Immune System group 2 would deal defending group 1 15450 damage
Immune System group 2 would deal defending group 2 15450 damage

Immune System group 2 attacks defending group 1, killing 3 units
Infection group 1 attacks defending group 2, killing 143 units
Immune System:
Group 2 contains 475 units
Infection:
Group 1 contains 786 units
Group 2 contains 4434 units

Infection group 1 would deal defending group 2 182352 damage
Immune System group 2 would deal defending group 1 11875 damage
Immune System group 2 would deal defending group 2 11875 damage

Immune System group 2 attacks defending group 1, killing 2 units
Infection group 1 attacks defending group 2, killing 142 units
Immune System:
Group 2 contains 333 units
Infection:
Group 1 contains 784 units
Group 2 contains 4434 units

Infection group 1 would deal defending group 2 181888 damage
Immune System group 2 would deal defending group 1 8325 damage
Immune System group 2 would deal defending group 2 8325 damage

Immune System group 2 attacks defending group 1, killing 1 unit
Infection group 1 attacks defending group 2, killing 142 units
Immune System:
Group 2 contains 191 units
Infection:
Group 1 contains 783 units
Group 2 contains 4434 units

Infection group 1 would deal defending group 2 181656 damage
Immune System group 2 would deal defending group 1 4775 damage
Immune System group 2 would deal defending group 2 4775 damage

Immune System group 2 attacks defending group 1, killing 1 unit
Infection group 1 attacks defending group 2, killing 142 units
Immune System:
Group 2 contains 49 units
Infection:
Group 1 contains 782 units
Group 2 contains 4434 units

Infection group 1 would deal defending group 2 181424 damage
Immune System group 2 would deal defending group 1 1225 damage
Immune System group 2 would deal defending group 2 1225 damage

Immune System group 2 attacks defending group 1, killing 0 units
Infection group 1 attacks defending group 2, killing 49 units
Immune System:
No groups remain.
Infection:
Group 1 contains 782 units
Group 2 contains 4434 units

In the example above, the winning army ends up with 782 + 4434 = 5216 units.

You scan the reindeer's condition (your puzzle input); the white-bearded man looks nervous. As it stands now, how many units would the winning army
have?
*/

enum class Army { IMMUNE_SYSTEM, INFECTION };
enum class Attack { BLUDGEONING, COLD, FIRE, RADIATION, SLASHING };

struct Group {
    bool selected;
    int id, units, hit_points, damage, initiative, target;
    Army army;
    Attack attack;
    std::vector<Attack> weak, immune;
};

Attack to_attack(const std::string& attack) {
    if (attack == "bludgeoning") {
        return Attack::BLUDGEONING;
    }
    if (attack == "cold") {
        return Attack::COLD;
    }
    if (attack == "fire") {
        return Attack::FIRE;
    }
    if (attack == "radiation") {
        return Attack::RADIATION;
    }
    if (attack == "slashing") {
        return Attack::SLASHING;
    }
    std::cout << "Invalid Attack Type" << std::endl;
    return Attack::BLUDGEONING;
}

void extract_defence(std::stringstream& ss, Group& group, char& end) {
    std::string type;
    (ss >> type).ignore(3);

    if (type == "weak") {
        while (true) {
            std::string attack;
            ss >> attack;
            end = attack.back();
            attack.pop_back();
            group.weak.push_back(to_attack(attack));

            if (end != ',') {
                break;
            }
        }
    } else {
        while (true) {
            std::string attack;
            ss >> attack;
            end = attack.back();
            attack.pop_back();
            group.immune.push_back(to_attack(attack));

            if (end != ',') {
                break;
            }
        }
    }
}

int compute_effective_damage(const Group& attacker, const Group& defender) {
    if (std::ranges::contains(defender.immune, attacker.attack)) {
        return 0;
    }
    return attacker.units * attacker.damage * (std::ranges::contains(defender.weak, attacker.attack) ? 2 : 1);
}

int part1() {
    bool on_immune = false;
    int id = 0;
    std::string line;
    std::vector<Group> groups;
    std::stringstream file(input24);

    while (std::getline(file, line)) {
        if (line.empty()) {
            continue;
        }
        if (line == "Immune System:") {
            on_immune = true;
            continue;
        }
        if (line == "Infection:") {
            on_immune = false;
            continue;
        }
        Group group;
        std::stringstream ss(line);
        ((ss >> group.units).ignore(17) >> group.hit_points).ignore(12);

        if (ss.peek() == '(') {
            char end;
            ss.ignore(1);
            extract_defence(ss, group, end);

            if (end != ')') {
                extract_defence(ss, group, end);
            }
            ss.ignore(1);
        }
        std::string attack;
        (ss.ignore(25) >> group.damage >> attack).ignore(22) >> group.initiative;
        group.attack = to_attack(attack);
        group.army = on_immune ? Army::IMMUNE_SYSTEM : Army::INFECTION;
        group.id = id++;
        groups.push_back(group);
    }
    while (std::ranges::count_if(groups, [](const Group& group) -> bool { return group.army == Army::IMMUNE_SYSTEM; }) &&
           std::ranges::count_if(groups, [](const Group& group) -> bool { return group.army == Army::INFECTION; })) {
        for (Group& group : groups) {
            group.selected = false;
            group.target = -1;
        }
        std::ranges::sort(groups, std::ranges::greater(),
                          [](const Group& group) -> std::pair<int, int> { return {group.units * group.damage, group.initiative}; });

        for (Group& attacker : groups) {
            Group* target = nullptr;

            for (Group& defender : groups) {
                const int effective_damage = compute_effective_damage(attacker, defender);

                if (defender.army != attacker.army && !defender.selected && effective_damage > 0 &&
                    (!target ||
                     std::tuple(effective_damage, defender.units * defender.damage, defender.initiative) >
                         std::tuple(compute_effective_damage(attacker, *target), target->units * target->damage, target->initiative))) {
                    target = &defender;
                }
            }
            if (target) {
                target->selected = true;
                attacker.target = target->id;
            }
        }
        std::ranges::sort(groups, std::ranges::greater(), &Group::initiative);

        for (Group& attacker : groups) {
            if (attacker.target != -1 && attacker.units > 0) {
                auto defender = std::ranges::find(groups, attacker.target, &Group::id);

                if (defender->units > 0) {
                    defender->units -= compute_effective_damage(attacker, *defender) / defender->hit_points;
                }
            }
        }
        std::erase_if(groups, [](const Group& group) -> bool { return group.units <= 0; });
    }
    return std::transform_reduce(groups.begin(), groups.end(), 0, std::plus(), [](const Group& group) -> int { return group.units; });
}

/*
--- Part Two ---
*/

int part2() { return 0; }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
