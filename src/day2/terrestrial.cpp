#include <iostream>
using namespace std;

class Terrestrial {
 private:
  double speed{2};  // m/s

 protected:
  void walk() {}
  double getSpeed() { return this->speed; }
  void setSpeed(double newSpeed) { this->speed = newSpeed; }
};