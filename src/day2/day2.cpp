#include "day2.hpp"
int main() {
  shared_ptr<Penguin> firstPengin = std::make_shared<Penguin>("Roger");
  firstPengin->registerInColony();
  firstPengin->presentYourself();
  firstPengin->walk();
  firstPengin->swim();

  shared_ptr<Penguin> secondPenguin = std::make_shared<Penguin>(firstPengin.get());
  secondPenguin->setName("Albert");
  secondPenguin->registerInColony();

//   firstPengin->presentYourself();
//   secondPenguin->presentYourself();

  for (std::shared_ptr<Penguin> penguin : Penguin::colony) {
    penguin->presentYourself();
  }

  return 0;
}