#include "day2.hpp"
int main() {
  Penguin* firstPengin = new Penguin("Roger");
  firstPengin->presentYourself();
  firstPengin->walk();
  firstPengin->swim();
  return 0;
}