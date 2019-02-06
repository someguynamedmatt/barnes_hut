#include <iostream>

#include "../include/Particle.h"

Particle::Particle(int m, float x_vel, float y_vel) {
  mass = m;
  xy_vel.first = x_vel;
  xy_vel.second = y_vel;
}

float Particle::get_x_velocity() {
  return xy_vel.first;
}

float Particle::get_y_velocity() {
  return xy_vel.second;
}

std::pair<float, float> Particle::get_xy_velocity() {
  return xy_vel;
}

int Particle::get_mass() {
  return mass;
}

void Particle::set_x_velocity(float x) {
  xy_vel.first = x;
}

void Particle::set_y_velocity(float y) {
  xy_vel.second = y;
}

void Particle::set_mass(int m) {
  mass = m;
}
