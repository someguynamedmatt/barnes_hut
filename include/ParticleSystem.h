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
 * particles _within_ a Universe. While a Universe
 * is concerned with identifying quadrants and centers of mass.
 *
 * A Universe has -or can have- four quadrants with four
 * independent Particle Systems.
 */
class ParticleSystem {
  std::vector<Particle> v_particles;

  public:
    ParticleSystem();
    ParticleSystem(std::vector<Particle>);

    std::vector<Particle> get_particles();
};

#endif
