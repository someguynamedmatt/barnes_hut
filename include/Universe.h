#ifndef _UNIVERSE_H_
#define _UNIVERSE_H_

//--------- Standard Includes ----------
#include <array>

//--------- Header Includes ----------
#include "ParticleSystem.h"

// Quadrants broken down as a standard Cartesian
// coordinate set
enum Quadrant {
  Q1,
  Q2,
  Q3,
  Q4
};

//-------- Class Def -------
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
