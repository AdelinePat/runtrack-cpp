#include "penguin.hpp"

#include <algorithm>
using namespace std;

std::vector<std::shared_ptr<Penguin>> Penguin::colony;

Penguin::Penguin(std::string name) : name(name) {}

Penguin::Penguin(Penguin* penguin)
    : Aquatic(), Terrestrial(), name(penguin->getName()) {}

Penguin::~Penguin() {
  std::cout << "destructor called for " << this->getName() << std::endl;
}

void Penguin::registerInColony() {
  Penguin::colony.push_back(shared_from_this());
}

void Penguin::presentYourself() {
  std::cout << "My name is " << this->name << "." << std::endl;
}

void Penguin::swim() {
  std::cout << "Penguin swims at " << this->getSwimmingSpeed() << " m/s"
            << std::endl;
}

void Penguin::walk() {
  std::cout << "Penguin walks at " << this->getWalkingSpeed() << " m/s"
            << std::endl;
}

std::string Penguin::getName() { return this->name; }

void Penguin::setName(std::string newName) { this->name = newName; }

double Penguin::getSlidingSpeed() { return this->slidingSpeed; }

void Penguin::setSlidingSpeed(double newSpeed) {}

void Penguin::destroy() {
  std::shared_ptr<Penguin> self = shared_from_this();
  Penguin::colony.erase(
      std::remove_if(Penguin::colony.begin(), Penguin::colony.end(),
                     [this](const std::shared_ptr<Penguin>& p) {
                       return p.get() == this;
                     }),
      Penguin::colony.end());
  self.reset();
}
