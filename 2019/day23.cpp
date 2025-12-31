#include "inputs.hpp"

/*
--- Day 23: Category Six ---
The droids have finished repairing as much of the ship as they can. Their report indicates that this was a Category 6 disaster - not because it was
that bad, but because it destroyed the stockpile of Category 6 network cables as well as most of the ship's network infrastructure.

You'll need to rebuild the network from scratch.

The computers on the network are standard Intcode computers that communicate by sending packets to each other. There are 50 of them in total, each
running a copy of the same Network Interface Controller (NIC) software (your puzzle input). The computers have network addresses 0 through 49; when
each computer boots up, it will request its network address via a single input instruction. Be sure to give each computer a unique network address.

Once a computer has received its network address, it will begin doing work and communicating over the network by sending and receiving packets. All
packets contain two values named X and Y. Packets sent to a computer are queued by the recipient and read in the order they are received.

To send a packet to another computer, the NIC will use three output instructions that provide the destination address of the packet followed by its X
and Y values. For example, three output instructions that provide the values 10, 20, 30 would send a packet with X=20 and Y=30 to the computer with
address 10.

To receive a packet from another computer, the NIC will use an input instruction. If the incoming packet queue is empty, provide -1. Otherwise,
provide the X value of the next packet; the computer will then use a second input instruction to receive the Y value for the same packet. Once both
values of the packet are read in this way, the packet is removed from the queue.

Note that these input and output instructions never block. Specifically, output instructions do not wait for the sent packet to be received - the
computer might send multiple packets before receiving any. Similarly, input instructions do not wait for a packet to arrive - if no packet is waiting,
input instructions should receive -1.

Boot up all 50 computers and attach them to your network. What is the Y value of the first packet sent to address 255?
*/

int part1(const bool NAT = false) {
    bool valid = false;
    int last_y = 0;
    Vec2<int> nat;
    VirtualMachine VM(input23);
    std::vector<VirtualMachine> network;
    std::array<std::queue<int64_t>, 50> recipients;
    network.reserve(50);

    for (int i = 0; i < 49; i++) {
        network.push_back(VM);
    }
    network.push_back(std::move(VM));

    for (int i = 0; i < 50; i++) {
        network[i].inputs.push(i);
    }
    while (true) {
        bool idle = true;

        for (int i = 0; i < 50; i++) {
            network[i].interpret(3);

            if (network[i].status == VirtualMachine::Status::WAITING) {
                if (!recipients[i].empty()) {
                    idle = false;

                    for (int _ = 0; _ < 2; _++) {
                        network[i].inputs.push(recipients[i].front());
                        recipients[i].pop();
                    }
                } else {
                    network[i].inputs.push(-1);
                }
            } else if (network[i].status == VirtualMachine::Status::SLEEPING) {
                const int recipient = network[i].outputs.front();
                network[i].outputs.pop();

                if (recipient == 255) {
                    nat.x = network[i].outputs.front();
                    network[i].outputs.pop();
                    nat.y = network[i].outputs.front();
                    network[i].outputs.pop();
                    valid = true;

                    if (!NAT) {
                        return nat.y;
                    }
                } else {
                    idle = false;

                    for (int _ = 0; _ < 2; _++) {
                        recipients[recipient].push(network[i].outputs.front());
                        network[i].outputs.pop();
                    }
                }
            }
        }
        if (idle && valid) {
            recipients[0].push(nat.x);
            recipients[0].push(nat.y);

            if (last_y && last_y == nat.y) {
                return last_y;
            }
            last_y = nat.y;
        }
    }
}

/*
--- Part Two ---
Packets sent to address 255 are handled by a device called a NAT (Not Always Transmitting). The NAT is responsible for managing power consumption of
the network by blocking certain packets and watching for idle periods in the computers.

If a packet would be sent to address 255, the NAT receives it instead. The NAT remembers only the last packet it receives; that is, the data in each
packet it receives overwrites the NAT's packet memory with the new packet's X and Y values.

The NAT also monitors all computers on the network. If all computers have empty incoming packet queues and are continuously trying to receive packets
without sending packets, the network is considered idle.

Once the network is idle, the NAT sends only the last packet it received to address 0; this will cause the computers on the network to resume activity.
In this way, the NAT can throttle power consumption of the network when the ship needs power in other areas.

Monitor packets released to the computer at address 0 by the NAT. What is the first Y value delivered by the NAT to the computer at address 0 twice in
a row?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
