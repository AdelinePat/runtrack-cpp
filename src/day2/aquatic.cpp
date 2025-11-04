// #include <iostream>
#include "aquatic.hpp"
using namespace std;

class Aquatic::Aquatic {
 private:
  double speed{2};  // m/s

 protected:
  void Aquatic::swim() {}
  double Aquatic::getSpeed() { return this->speed; }
  void Aquatic::setSpeed(double newSpeed) { this->speed = newSpeed; }
};
