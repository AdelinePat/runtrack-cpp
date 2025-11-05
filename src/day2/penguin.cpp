#include "penguin.hpp"

#include <algorithm>
using namespace std;

std::vector<std::shared_ptr<Penguin>> Penguin::colony;

void Penguin::displayNameAndTime(Penguin* penguin, MovementType type,
                                 double distance) {
  std::string strType;
  switch (type) {
    case MovementType::Slide:
      strType = "en glissant ";
      break;
    case MovementType::Walk:
      strType = "en marchant ";
      break;
    case MovementType::Swim:
      strType = "en nageant ";
      break;
    default:
      strType = "";
  }

  std::cout << penguin->getName() << " a parcouru " << distance << "mètres en "
            << strType << penguin->getTime(type, distance) << "seconde."
            << std::endl;
}

Penguin::Penguin(std::string name) : name(name) {}

Penguin::Penguin(std::string name, double swimSpeed, double walkSpeed) : name(name), Aquatic(swimSpeed), Terrestrial(walkSpeed) {}

Penguin::Penguin(Penguin* penguin)
    : Aquatic(penguin->getSwimmingSpeed()), Terrestrial(penguin->getWalkingSpeed()), name(penguin->getName()) {}

Penguin::~Penguin() {
  std::cout << "destructor called for " << this->getName() << std::endl;
}

void Penguin::registerInColony() {
  Penguin::colony.push_back(shared_from_this());
}

void Penguin::presentYourself() {
  std::cout << "My name is " << this->name << "." << std::endl;
  std::cout << "I'm walking at " << this->getWalkingSpeed() << "m/s." << std::endl;
  std::cout << "I'm swimming at " << this->getSwimmingSpeed() << "m/s." << std::endl;
  std::cout << "I'm sliding at " << this->getSlidingSpeed() << "m/s." << std::endl;
  std::cout << std::endl;
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

void Penguin::removeFromColony() {
  // std::shared_ptr<Penguin> self = shared_from_this();
  Penguin::colony.erase(
      std::remove_if(Penguin::colony.begin(), Penguin::colony.end(),
                     [this](const std::shared_ptr<Penguin>& p) {
                       return p.get() == this;
                     }),
      Penguin::colony.end());
  // self.reset();
}

double Penguin::getTime(MovementType type, double distance) {
  // t = d/v
  double time{0};
  switch (type) {
    case MovementType::Walk:
      time = (distance / this->getWalkingSpeed());
      break;
    case MovementType::Swim:
      time = (distance / this->getSwimmingSpeed());
      break;
    case MovementType::Slide:
      time = (distance / this->getSlidingSpeed());
      break;
    default:
      std::cout << "default" << std::endl;
  }
  return time;
}
