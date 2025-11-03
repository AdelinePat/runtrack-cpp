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

float getTaxesIncludedPrice(float priceWithoutTaxes, int taxesInPercentage) {
    float finalPrice = priceWithoutTaxes + priceWithoutTaxes * (static_cast<float>(taxesInPercentage) / 100);
    finalPrice = std::round(finalPrice * 100.0f) / 100.0f;
    return finalPrice;
}

int revertNumber(int number) {
    int reversed = 0;
    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;   
    }
    return reversed;
}

bool isLeapYear(int year) {
    // 1. If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
    // 2. If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
    // 3. If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
    // 4. The year is a leap year (it has 366 days).
    // 5. The year is not a leap year (it has 365 days).
    bool isLeap{false};
    // if (year % 4 == 0 && year % 100 != 0) {
    //     isLeap = true;
    // } else if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) {
    //     isLeap = true;
    // }
    if (year % 4 == 0) {
        if (year % 100 != 0 || year % 400 == 0) {
            isLeap = true;
        }
    }
    return isLeap;
}