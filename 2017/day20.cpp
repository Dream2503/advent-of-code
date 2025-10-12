#include <algorithm>
#include <iostream>
#include <numeric>
#include <sstream>
#include "inputs.hpp"

/*
--- Day 20: Particle Swarm ---
Suddenly, the GPU contacts you, asking for help. Someone has asked it to simulate too many particles, and it won't be able to finish them all in time
to render the next frame at this rate.

It transmits to you a buffer (your puzzle input) listing each particle in order (starting with particle 0, then particle 1, particle 2, and so on).
For each particle, it provides the X, Y, and Z coordinates for the particle's position (p), velocity (v), and acceleration (a), each in the format
<X,Y,Z>.

Each tick, all particles are updated simultaneously. A particle's properties are updated in the following order:
    - Increase the X velocity by the X acceleration.
    - Increase the Y velocity by the Y acceleration.
    - Increase the Z velocity by the Z acceleration.
    - Increase the X position by the X velocity.
    - Increase the Y position by the Y velocity.
    - Increase the Z position by the Z velocity.

Because of seemingly tenuous rationale involving z-buffering, the GPU would like to know which particle will stay closest to position <0,0,0> in the
long term. Measure this using the Manhattan distance, which in this situation is simply the sum of the absolute values of a particle's X, Y, and Z
position.

For example, suppose you are only given two particles, both of which stay entirely on the X-axis (for simplicity). Drawing the current states of
particles 0 and 1 (in that order) with an adjacent a number line and diagram of current X positions (marked in parentheses), the following would take
place: p=< 3,0,0>, v=< 2,0,0>, a=<-1,0,0>    -4 -3 -2 -1  0  1  2  3  4 p=< 4,0,0>, v=< 0,0,0>, a=<-2,0,0>                         (0)(1)

p=< 4,0,0>, v=< 1,0,0>, a=<-1,0,0>    -4 -3 -2 -1  0  1  2  3  4
p=< 2,0,0>, v=<-2,0,0>, a=<-2,0,0>                      (1)   (0)

p=< 4,0,0>, v=< 0,0,0>, a=<-1,0,0>    -4 -3 -2 -1  0  1  2  3  4
p=<-2,0,0>, v=<-4,0,0>, a=<-2,0,0>          (1)               (0)

p=< 3,0,0>, v=<-1,0,0>, a=<-1,0,0>    -4 -3 -2 -1  0  1  2  3  4
p=<-8,0,0>, v=<-6,0,0>, a=<-2,0,0>                         (0)

At this point, particle 1 will never be closer to <0,0,0> than particle 0, and so, in the long run, particle 0 will stay closest.

Which particle will stay closest to position <0,0,0> in the long term?
*/

struct Vec3 {
    int x = 0, y = 0, z = 0;

    constexpr Vec3& operator+=(const Vec3& vec3) noexcept {
        x += vec3.x;
        y += vec3.y;
        z += vec3.z;
        return *this;
    }

    constexpr bool operator==(const Vec3& vec3) const noexcept { return x == vec3.x && y == vec3.y && z == vec3.z; }
    constexpr bool operator<(const Vec3& vec3) const noexcept { return distance() < vec3.distance(); }

    constexpr int distance() const noexcept { return std::abs(x) + std::abs(y) + std::abs(z); }
};

struct Particle {
    Vec3 position, velocity, acceleration;

    constexpr bool operator==(const Particle& particle) const noexcept {
        return position == particle.position && velocity == particle.velocity && acceleration == particle.acceleration;
    }
};

int part1(const bool collide = false) {
    constexpr int ticks = 320;
    std::string line;
    std::vector<Particle> particles;
    std::stringstream file(input20);

    while (std::getline(file, line)) {
        Particle particle;
        std::sscanf(line.c_str(), "p=<%d,%d,%d>, v=<%d,%d,%d>, a=<%d,%d,%d>", &particle.position.x, &particle.position.y, &particle.position.z,
                    &particle.velocity.x, &particle.velocity.y, &particle.velocity.z, &particle.acceleration.x, &particle.acceleration.y,
                    &particle.acceleration.z);
        particles.push_back(particle);
    }
    const int size = particles.size();

    for (int i = 0; i < ticks; i++) {
        for (int j = 0; j < size; j++) {
            particles[j].position += particles[j].velocity += particles[j].acceleration;
        }
        if (collide) {
            std::ranges::sort(particles, [](const Particle& lhs, const Particle& rhs) -> bool { return lhs.position < rhs.position; });
            bool collision = false;

            for (int k = 0; k < size - 1; k++) {
                if (particles[k].position == particles[k + 1].position) {
                    collision = true;
                    particles[k] = Particle();
                } else if (collision) {
                    particles[k] = Particle();
                    collision = false;
                }
            }
            if (collision) {
                particles[size - 1] = Particle();
            }
        }
    }
    return collide
        ? std::transform_reduce(particles.begin(), particles.end(), 0, std::plus(),
                                [](const Particle& particle) -> int { return particle != Particle(); })
        : std::ranges::min_element(particles, [](const Particle& lhs, const Particle& rhs) -> bool { return lhs.position < rhs.position; }) -
            particles.begin();
}

/*
--- Part Two ---
To simplify the problem further, the GPU would like to remove any particles that collide. Particles collide if their positions ever exactly match.
Because particles are updated simultaneously, more than two particles can collide at the same time and place. Once particles collide, they are removed
and cannot collide with anything else after that tick.

For example:
p=<-6,0,0>, v=< 3,0,0>, a=< 0,0,0>
p=<-4,0,0>, v=< 2,0,0>, a=< 0,0,0>    -6 -5 -4 -3 -2 -1  0  1  2  3
p=<-2,0,0>, v=< 1,0,0>, a=< 0,0,0>    (0)   (1)   (2)            (3)
p=< 3,0,0>, v=<-1,0,0>, a=< 0,0,0>

p=<-3,0,0>, v=< 3,0,0>, a=< 0,0,0>
p=<-2,0,0>, v=< 2,0,0>, a=< 0,0,0>    -6 -5 -4 -3 -2 -1  0  1  2  3
p=<-1,0,0>, v=< 1,0,0>, a=< 0,0,0>             (0)(1)(2)      (3)
p=< 2,0,0>, v=<-1,0,0>, a=< 0,0,0>

p=< 0,0,0>, v=< 3,0,0>, a=< 0,0,0>
p=< 0,0,0>, v=< 2,0,0>, a=< 0,0,0>    -6 -5 -4 -3 -2 -1  0  1  2  3
p=< 0,0,0>, v=< 1,0,0>, a=< 0,0,0>                       X (3)
p=< 1,0,0>, v=<-1,0,0>, a=< 0,0,0>

------destroyed by collision------
------destroyed by collision------    -6 -5 -4 -3 -2 -1  0  1  2  3
------destroyed by collision------                      (3)
p=< 0,0,0>, v=<-1,0,0>, a=< 0,0,0>

In this example, particles 0, 1, and 2 are simultaneously destroyed at the time and place marked X. On the next tick, particle 3 passes through
unharmed.

How many particles are left after all collisions are resolved?
*/

int part2() { return part1(true); }

int main() {
    std::cout << part1() << std::endl << part2() << std::endl;
    return 0;
}
