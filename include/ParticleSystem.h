#ifndef _PARTICLE_SYSTEM_H_
#define _PARTICLE_SYSTEM_H_

//--------- Standard Includes ----------
#include <vector>

//--------- Header Includes ----------
#include "Particle.h"

//-------- Class Def -------
/*
 * A Particle System, while similar in nature to a Universe,
 * is particularly concerened with management of
 * particles _within_ a Universe (or Universal Quadrant). While
 * a Universe is concerned with Quadrant management.
 *
 * A Universe has -or can have- four Quadrants with four
 * independent Particle Systems. Or no Quadrants and one
 * Particle System.
 */
class ParticleSystem {
  std::vector<Particle> v_particles;

  public:
    ParticleSystem();
    ParticleSystem(std::vector<Particle>);

    std::vector<Particle> get_particles();
};

#endif
