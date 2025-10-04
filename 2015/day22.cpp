#include <algorithm>
#include <iostream>
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
You start with 50 hit points and 500 mana points. The boss's actual stats are in your puzzle input. What is the least amount of mana you can spend and
still win the fight? (Do not include mana recharge effects as "spending" negative mana.)
*/

struct State {
    int player_hp, player_mana, boss_hp, boss_damage, shield_timer, poison_timer, recharge_timer, mana_spent;
};

void simulate(State state, const bool player_turn, int& best, const bool hard) {
    int armor = 0;

    if (player_turn && hard) {
        state.player_hp--;
    }
    if (state.mana_spent >= best || !state.player_hp) {
        return;
    }
    if (state.shield_timer > 0) {
        armor = 7;
        state.shield_timer--;
    }
    if (state.poison_timer > 0) {
        state.boss_hp -= 3;
        state.poison_timer--;
    }
    if (state.recharge_timer > 0) {
        state.player_mana += 101;
        state.recharge_timer--;
    }
    if (state.boss_hp <= 0) {
        best = std::min(best, state.mana_spent);
        return;
    }
    if (player_turn) {
        if (state.player_mana >= 53) {
            State temp_state = state;
            temp_state.player_mana -= 53;
            temp_state.boss_hp -= 4;
            temp_state.mana_spent += 53;
            simulate(temp_state, false, best, hard);
        }
        if (state.player_mana >= 73) {
            State temp_state = state;
            temp_state.player_mana -= 73;
            temp_state.boss_hp -= 2;
            temp_state.player_hp += 2;
            temp_state.mana_spent += 73;
            simulate(temp_state, false, best, hard);
        }
        if (state.player_mana >= 113 && !state.shield_timer) {
            State temp_state = state;
            temp_state.player_mana -= 113;
            temp_state.shield_timer = 6;
            temp_state.mana_spent += 113;
            simulate(temp_state, false, best, hard);
        }
        if (state.player_mana >= 173 && !state.poison_timer) {
            State temp_state = state;
            temp_state.player_mana -= 173;
            temp_state.poison_timer = 6;
            temp_state.mana_spent += 173;
            simulate(temp_state, false, best, hard);
        }
        if (state.player_mana >= 229 && !state.recharge_timer) {
            State temp_state = state;
            temp_state.player_mana -= 229;
            temp_state.recharge_timer = 5;
            temp_state.mana_spent += 229;
            simulate(temp_state, false, best, hard);
        }
    } else {
        state.player_hp -= std::max(1, state.boss_damage - armor);

        if (state.player_hp > 0) {
            simulate(state, true, best, hard);
        }
    }
}

int part1(const bool hard = false) {
    int hp, damage, best = INT32_MAX;
    std::sscanf(input22, "Hit Points: %d\nDamage: %d", &hp, &damage);
    simulate({50, 500, hp, damage, 0, 0, 0, 0}, true, best, hard);
    return best;
}

/*
--- Part Two ---
On the next run through the game, you increase the difficulty to hard.

At the start of each player turn (before any other effects apply), you lose 1 hit point. If this brings you to or below 0 hit points, you lose.

With the same starting stats for you and the boss, what is the least amount of mana you can spend and still win the fight?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
