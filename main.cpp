#include <iostream>
#include <vector>
#include <iomanip>
#include "include/Particle.h"
#include "include/ParticleSystem.h"

int main() {
  std::cout << "Barnes-Hut Simulator" << std::endl;
  std::vector<Particle> p_vec;
  Particle p1(10, 3.0f, 2.5f);
  Particle p2(15, 5.0f, 9.0f);
  Particle p3(1, 2.0f, 4.0f);
  p_vec.push_back(p1);
  p_vec.push_back(p2);
  p_vec.push_back(p3);

  ParticleSystem p_sys(p_vec);

  std::cout << "Mass: " << p1.get_mass() << ", ";
  std::cout << "X velocity: " << std::fixed << std::setprecision(3) << p1.get_x_velocity() << ", ";
  std::cout << "Y Velocity: " << std::fixed << std::setprecision(3) << p1.get_y_velocity() << std::endl;
  return 0;
}
