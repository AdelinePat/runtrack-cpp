#include <iostream>

#include "aquatic.hpp"
#include "terrestrial.hpp"
using namespace std;

class Penguin : public Aquatic, public Terrestrial {
 public:
  Penguin(std::string name);
  void presentYourself();
  void swim() override;
  void walk() override;
  std::string getName();
  void setName(std::string newName);

 private:
  std::string name{"Unknown"};
};