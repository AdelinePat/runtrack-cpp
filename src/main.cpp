#include "main.hpp"

int main() {
    std::string name = "Florence";
    say_hello(name);
    return 0;
}

void say_hello(std::string name) {
    std::cout << "Hello, world! " << name << std::endl;
}