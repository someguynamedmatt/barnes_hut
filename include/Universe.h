#ifndef _UNIVERSE_H_
#define _UNIVERSE_H_

//--------- Standard Includes ----------
#include <array>

//--------- Header Includes ----------
#include "ParticleSystem.h"

// Quadrants broken down as a standard Cartesian
// coordinate set
enum Quadrant {
  Q1 = 1,
  Q2 = 2,
  Q3 = 3,
  Q4 = 4
};

//-------- Class Def -------
/*
 * A Universe can have four quadrants or no Quadrants.
 * If any of those quadrants need to be
 * broken-down further, it will be created
 * as another Universe.
 *
 * Each Universe can have, at most, four quadrants
 * with four Particle Systems. It is possible
 * to have a Universe with no Quadrants and
 * one Particle System. But it cannot be the
 * case of having > 1 Particle System and 0 Quadrants,
 * nor can we have multiple Particle Systems and <=1
 * Quadrant.
 *
 * Universes do not manage particles, that is the job
 * of a Particle System. Universe's manage Quadrants.
 */
class Universe {
  std::array<Quadrant, 4> quadrants;

  public:
    Universe();
    Universe(std::array<Quadrant, 4>);
    Universe(ParticleSystem);

    ParticleSystem get_particle_system_from(Quadrant);
    double get_center_of_mass();
};

#endif
