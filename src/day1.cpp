#include "day1.hpp"

void say_hello(std::string name) {
    std::cout << "Hello, world! " << name << std::endl;
}

int mulitplyInteger(int a, int b) {
    return a * b;
}

std::array<int, 5> getNumbers() {
    std::array<int, 5> numbers;
    std::cout << "Enter a number: ";
    for (int i = 0; i < 5; i++) {
        std::cin >> numbers[i];
    }
    return numbers;
}

float average(const std::array<int, 5>& numbers) {
    float sum{0};
    for(int number: numbers) {
        sum += number;
    }
    return sum / numbers.size();
}


bool isPair() {
    int number{0};
    std::cout << "Enter a number to check if its even: ";
    std::cin >> number;
    return number % 2 == 0 ? true : false;
}

void swapInteger(int& a, int& b) {
    std::cout << "BEFORE SWAP : a = " << a << "  b = " << b << std::endl;
    int temp = a;
    a = b;
    b = temp;
    std::cout << "AFTER SWAP : a = " << a << "  b = " << b << std::endl;
}