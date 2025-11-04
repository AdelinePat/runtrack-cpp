#include <iostream>
using namespace std;

class Terrestrial {
 public:
  virtual void walk();
  double getWalkingSpeed();
  void setWalkingSpeed(double newSpeed);

 private:
  double speed{2};  // m/s
};