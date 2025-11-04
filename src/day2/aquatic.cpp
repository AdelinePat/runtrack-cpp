#include "aquatic.hpp"
using namespace std;

void Aquatic::swim() {
  std::cout << "Swims at " << this->speed << " m/s" << std::endl;
}
double Aquatic::getSwimmingSpeed() { return this->speed; }
void Aquatic::setSwimmingSpeed(double newSpeed) { this->speed = newSpeed; }
