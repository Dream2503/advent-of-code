#include <algorithm>
#include <iostream>
#include <sstream>
#include "inputs.hpp"

/*
--- Day 22: Wizard Simulator 20XX ---
Little Henry Case decides that defeating bosses with swords and stuff is boring. Now he's playing the game with a wizard. Of course, he gets stuck on
another boss and needs your help again.

In this version, combat still proceeds with the player and the boss taking alternating turns. The player still goes first. Now, however, you don't get
any equipment; instead, you must choose one of your spells to cast. The first character at or below 0 hit points loses.

Since you're a wizard, you don't get to wear armor, and you can't attack normally. However, since you do magic damage, your opponent's armor is
ignored, and so the boss effectively has zero armor as well. As before, if armor (from a spell, in this case) would reduce damage below 1, it becomes
1 instead - that is, the boss' attacks always deal at least 1 damage.

On each of your turns, you must select one of your spells to cast. If you cannot afford to cast any spell, you lose. Spells cost mana; you start with
500 mana, but have no maximum limit. You must have enough mana to cast a spell, and its cost is immediately deducted when you cast it. Your spells are
Magic Missile, Drain, Shield, Poison, and Recharge.
    - Magic Missile costs 53 mana. It instantly does 4 damage.
    - Drain costs 73 mana. It instantly does 2 damage and heals you for 2 hit points.
    - Shield costs 113 mana. It starts an effect that lasts for 6 turns. While it is active, your armor is increased by 7.
    - Poison costs 173 mana. It starts an effect that lasts for 6 turns. At the start of each turn while it is active, it deals the boss 3 damage.
    - Recharge costs 229 mana. It starts an effect that lasts for 5 turns. At the start of each turn while it is active, it gives you 101 new mana.

Effects all work the same way. Effects apply at the start of both the player's turns and the boss' turns. Effects are created with a timer (the number
of turns they last); at the start of each turn, after they apply any effect they have, their timer is decreased by one. If this decreases the timer to
zero, the effect ends. You cannot cast a spell that would start an effect which is already active. However, effects can be started on the same turn
they end.

For example, suppose the player has 10 hit points and 250 mana, and that the boss has 13 hit points and 8 damage:
-- Player turn --
- Player has 10 hit points, 0 armor, 250 mana
- Boss has 13 hit points
Player casts Poison.

-- Boss turn --
- Player has 10 hit points, 0 armor, 77 mana
- Boss has 13 hit points
Poison deals 3 damage; its timer is now 5.
Boss attacks for 8 damage.

-- Player turn --
- Player has 2 hit points, 0 armor, 77 mana
- Boss has 10 hit points
Poison deals 3 damage; its timer is now 4.
Player casts Magic Missile, dealing 4 damage.

-- Boss turn --
- Player has 2 hit points, 0 armor, 24 mana
- Boss has 3 hit points
Poison deals 3 damage. This kills the boss, and the player wins.

Now, suppose the same initial conditions, except that the boss has 14 hit points instead:
-- Player turn --
- Player has 10 hit points, 0 armor, 250 mana
- Boss has 14 hit points
Player casts Recharge.

-- Boss turn --
- Player has 10 hit points, 0 armor, 21 mana
- Boss has 14 hit points
Recharge provides 101 mana; its timer is now 4.
Boss attacks for 8 damage!

-- Player turn --
- Player has 2 hit points, 0 armor, 122 mana
- Boss has 14 hit points
Recharge provides 101 mana; its timer is now 3.
Player casts Shield, increasing armor by 7.

-- Boss turn --
- Player has 2 hit points, 7 armor, 110 mana
- Boss has 14 hit points
Shield's timer is now 5.
Recharge provides 101 mana; its timer is now 2.
Boss attacks for 8 - 7 = 1 damage!

-- Player turn --
- Player has 1 hit point, 7 armor, 211 mana
- Boss has 14 hit points
Shield's timer is now 4.
Recharge provides 101 mana; its timer is now 1.
Player casts Drain, dealing 2 damage, and healing 2 hit points.

-- Boss turn --
- Player has 3 hit points, 7 armor, 239 mana
- Boss has 12 hit points
Shield's timer is now 3.
Recharge provides 101 mana; its timer is now 0.
Recharge wears off.
Boss attacks for 8 - 7 = 1 damage!

-- Player turn --
- Player has 2 hit points, 7 armor, 340 mana
- Boss has 12 hit points
Shield's timer is now 2.
Player casts Poison.

-- Boss turn --
- Player has 2 hit points, 7 armor, 167 mana
- Boss has 12 hit points
Shield's timer is now 1.
Poison deals 3 damage; its timer is now 5.
Boss attacks for 8 - 7 = 1 damage!

-- Player turn --
- Player has 1 hit point, 7 armor, 167 mana
- Boss has 9 hit points
Shield's timer is now 0.
Shield wears off, decreasing armor by 7.
Poison deals 3 damage; its timer is now 4.
Player casts Magic Missile, dealing 4 damage.

-- Boss turn --
- Player has 1 hit point, 0 armor, 114 mana
- Boss has 2 hit points
Poison deals 3 damage. This kills the boss, and the player wins.
You start with 50 hit points and 500 mana points. The boss's actual stats are in your puzzle input. What is the least amount of mana you can spend and still win the fight? (Do not include mana recharge effects as "spending" negative mana.)
*/

struct Item {
    std::string name;
    int cost, damage, armor;
};

struct Character {
    int hp, damage, armor;
};

const std::vector<Item> weapons = {
    {"Dagger", 8, 4, 0}, {"Shortsword", 10, 5, 0}, {"Warhammer", 25, 6, 0}, {"Longsword", 40, 7, 0}, {"Greataxe", 74, 8, 0}};
const std::vector<Item> armors = {{"None", 0, 0, 0},        {"Leather", 13, 0, 1},    {"Chainmail", 31, 0, 2},
                                  {"Splintmail", 53, 0, 3}, {"Bandedmail", 75, 0, 4}, {"Platemail", 102, 0, 5}};
const std::vector<Item> rings = {{"None", 0, 0, 0},        {"Damage +1", 25, 1, 0},  {"Damage +2", 50, 2, 0}, {"Damage +3", 100, 3, 0},
                                 {"Defense +1", 20, 0, 1}, {"Defense +2", 40, 0, 2}, {"Defense +3", 80, 0, 3}};


bool simulate_battle(Character player, Character boss) {
    while (player.hp > 0 && boss.hp > 0) {
        boss.hp -= std::max(1, player.damage - boss.armor);

        if (boss.hp <= 0) {
            return true;
        }
        player.hp -= std::max(1, boss.damage - player.armor);

        if (player.hp <= 0) {
            return false;
        }
    }
    return false;
}

int part1(const std::function<int(int, int)>& func = [](const int x, const int y) { return std::min(x, y); }, const bool lose = false) {
    int hp, damage, armour, cost = lose ? INT32_MIN : INT32_MAX;
    std::string word;
    std::stringstream(input21) >> word >> word >> hp >> word >> damage >> word >> armour;
    const Character boss = {hp, damage, armour};

    for (const Item& weapon : weapons) {
        for (const Item& armor : armors) {
            for (size_t i = 0; i < rings.size(); ++i) {
                for (size_t j = i; j < rings.size(); ++j) {
                    const Character player = {100, weapon.damage + rings[i].damage + (i != j ? rings[j].damage : 0),
                                              armor.armor + rings[i].armor + (i != j ? rings[j].armor : 0)};

                    if (lose ^ simulate_battle(player, boss)) {
                        cost = func(cost, weapon.cost + armor.cost + rings[i].cost + (i != j ? rings[j].cost : 0));
                    }
                }
            }
        }
    }
    return cost;
}

/*
--- Part Two ---
Turns out the shopkeeper is working with the boss, and can persuade you to buy whatever items he wants. The other rules still apply, and he still only
has one of each item.

What is the most amount of gold you can spend and still lose the fight?
*/

int part2() {
    return part1([](const int x, const int y) { return std::max(x, y); }, true);
}

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
