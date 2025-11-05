#include "aquatic.hpp"
using namespace std;

Aquatic::Aquatic() : speed(2.0) {}

Aquatic::Aquatic(double speed) : speed(speed) {}

void Aquatic::swim() {
  std::cout << "Swims at " << this->speed << " m/s" << std::endl;
}
double Aquatic::getSwimmingSpeed() { return this->speed; }
void Aquatic::setSwimmingSpeed(double newSpeed) { this->speed = newSpeed; }
