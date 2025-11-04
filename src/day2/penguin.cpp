#include "penguin.hpp"
using namespace std;

Penguin::Penguin(std::string name) : name(name) {}

void Penguin::presentYourself() {
  std::cout << "My name is " << this->name << "." << std::endl;
}

void Penguin::swim() {
    std::cout << "Penguin swims at " << this->getSwimmingSpeed() << " m/s" << std::endl;
}

void Penguin::walk() {
    std::cout << "Penguin walks at " << this->getWalkingSpeed() << " m/s" << std::endl;
}

std::string Penguin::getName() { return this->name; }

void Penguin::setName(std::string newName) { this->name = newName; }
