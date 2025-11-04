#include <iostream>
#include <memory>
#include <vector>

#include "aquatic.hpp"
#include "terrestrial.hpp"
using namespace std;

class Penguin : public Aquatic,
                public Terrestrial,
                public std::enable_shared_from_this<Penguin> {
 public:
  //   static std::vector<std::shared_ptr<Penguin>> colony;
  static std::vector<std::shared_ptr<Penguin>> colony;

  Penguin(std::string name);
  Penguin(Penguin* penguin);
  ~Penguin();
  void registerInColony();
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