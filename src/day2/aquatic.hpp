#ifndef AQUATIC
#define AQUATIC

#include <iostream>
#include <string>

class Aquatic {
 public:
  Aquatic();
  Aquatic(double speed);
  
  virtual void swim();

  double getSwimmingSpeed();
  void setSwimmingSpeed(double newSpeed);

 private:
  double speed{2.0};  // m/s
};

#endif
