#include "day2.hpp"
int main() {
  shared_ptr<Penguin> firstPengin = std::make_shared<Penguin>("Roger");
  firstPengin->registerInColony();
  firstPengin->presentYourself();
  firstPengin->walk();
  firstPengin->swim();

  shared_ptr<Penguin> secondPenguin =
      std::make_shared<Penguin>(firstPengin.get());
  secondPenguin->setName("Albert");
  secondPenguin->registerInColony();
  shared_ptr<Penguin> thirdPenguin =
      std::make_shared<Penguin>(secondPenguin.get());
  thirdPenguin->setName("Albert Jr");
  thirdPenguin->registerInColony();
  shared_ptr<Penguin> fourthPenguin = std::make_shared<Penguin>("Noname");
  fourthPenguin->registerInColony();
  //   firstPengin->presentYourself();
  //   secondPenguin->presentYourself();
  fourthPenguin->destroy();

  for (std::shared_ptr<Penguin> penguin : Penguin::colony) {
    penguin->presentYourself();
  }
  std::cout << "test" << std::endl;
  return 0;
}