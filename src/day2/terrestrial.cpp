#include "terrestrial.hpp"
using namespace std;

Terrestrial::Terrestrial() : speed(2.0) {}

Terrestrial::Terrestrial(double speed) : speed(speed) {}

void Terrestrial::walk() {
  std::cout << "Walks at " << this->speed << " m/s" << std::endl;
}
double Terrestrial::getWalkingSpeed() { return this->speed; }
void Terrestrial::setWalkingSpeed(double newSpeed) { this->speed = newSpeed; }
