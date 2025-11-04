#include "day2.hpp"
int main() {
  Penguin* firstPengin = new Penguin("Roger");
  firstPengin->presentYourself();
  firstPengin->walk();
  firstPengin->swim();

  Penguin* secondPenguin = new Penguin(firstPengin);
  secondPenguin->setName("Albert");

  firstPengin->presentYourself();
  secondPenguin->presentYourself();

  return 0;
}