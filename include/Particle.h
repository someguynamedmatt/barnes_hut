#ifndef _PARTICLE_H_
#define _PARTICLE_H_

//--------- Standard Includes ----------
#include <vector>
#include <utility>

//--------- Header Includes ----------


//-------- Class Def -------
class Particle {
  private:
    std::pair <float, float> xy_vel;
    int mass;

  public:
    Particle(int, float, float);

    float get_x_velocity();
    float get_y_velocity();
    std::pair<float, float> get_xy_velocity();
    int get_mass();

    void set_x_velocity(float);
    void set_y_velocity(float);
    void set_mass(int);

};

#endif
