#include <iostream>
using namespace std;

class Terrestrial {
 public:
  Terrestrial();
  Terrestrial(double speed);
  virtual void walk();
  double getWalkingSpeed();
  void setWalkingSpeed(double newSpeed);

 private:
  double speed{2};  // m/s
};