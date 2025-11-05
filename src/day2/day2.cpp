#include "day2.hpp"
int main() {
  // swim speed for a penguin 5 ~ 7 m/s
  // walk speed for a penguin ~  1,08 m/s.
  shared_ptr<Penguin> firstPengin = std::make_shared<Penguin>("Roger", 6.0, 1.2);
  firstPengin->registerInColony();
  firstPengin->presentYourself();
  firstPengin->walk();
  firstPengin->swim();

  shared_ptr<Penguin> secondPenguin =
      std::make_shared<Penguin>(firstPengin.get());
  secondPenguin->setName("Albert");
  secondPenguin->setWalkingSpeed(1.1);
  secondPenguin->registerInColony();
  shared_ptr<Penguin> thirdPenguin =
      std::make_shared<Penguin>(secondPenguin.get());
  thirdPenguin->setName("Albert Jr");
  thirdPenguin->setSwimmingSpeed(7.0);
  thirdPenguin->registerInColony();
  shared_ptr<Penguin> fourthPenguin = std::make_shared<Penguin>("Noname");
  fourthPenguin->registerInColony();
  //   firstPengin->presentYourself();
  //   secondPenguin->presentYourself();
  fourthPenguin->removeFromColony();
  fourthPenguin.reset();

  for (std::shared_ptr<Penguin> penguin : Penguin::colony) {
    penguin->presentYourself();
  }
  std::cout << "test" << std::endl;

  Penguin::displayNameAndTime(firstPengin.get(), MovementType::Slide, 15.0);
  Penguin::displayNameAndTime(secondPenguin.get(), MovementType::Walk, 20.0);
  Penguin::displayNameAndTime(thirdPenguin.get(), MovementType::Swim, 50.0);
  Penguin::displayNameAndTime(firstPengin.get(), MovementType::Walk, 15.0);


  return 0;
}