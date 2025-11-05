#include <iostream>
#include <memory>
#include <vector>

#include "aquatic.hpp"
#include "terrestrial.hpp"
using namespace std;

enum class MovementType { Walk, Swim, Slide };

class Penguin : public Aquatic,
                public Terrestrial,
                public std::enable_shared_from_this<Penguin> {
 public:
  //   static std::vector<std::shared_ptr<Penguin>> colony;
  static std::vector<std::shared_ptr<Penguin>> colony;
  static void displayNameAndTime(Penguin* pengin, MovementType type,
                                 double distance);

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
  void removeFromColony();
  double getTime(MovementType type, double distance);

 private:
  std::string name{"Unknown"};
  double slidingSpeed{4.0};
};