#include <iostream>
#include <vector>

#include "../include/ParticleSystem.h"

ParticleSystem::ParticleSystem(std::vector<Particle> p) {
  particles = p;
}

std::vector<Particle> ParticleSystem::get_particles() {
  return particles;
}

void ParticleSystem::add_particle(Particle p) {
  particles.push_back(p);
}
