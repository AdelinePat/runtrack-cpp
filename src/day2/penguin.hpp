#include <iostream>

#include "aquatic.hpp"
#include "terrestrial.hpp"
using namespace std;

class Penguin : public Aquatic, public Terrestrial {
 public:
  Penguin(std::string name);
  Penguin(Penguin* penguin);
  void presentYourself();
  void swim() override;
  void walk() override;
  std::string getName();
  void setName(std::string newName);
  double getSlidingSpeed();
  void setSlidingSpeed(double newSpeed);

 private:
  std::string name{"Unknown"};
  double slidingSpeed{4.0};
};