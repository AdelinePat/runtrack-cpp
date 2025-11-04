#ifndef AQUATIC
#define AQUATIC

#include <iostream>
#include <string>

class Aquatic {
 public:
  virtual void swim();

  double getSwimmingSpeed();
  void setSwimmingSpeed(double newSpeed);

 private:
  double speed{2.0};  // m/s
};

#endif
