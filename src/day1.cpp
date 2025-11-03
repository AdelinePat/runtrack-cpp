#include "day1.hpp"

void say_hello(std::string name) {
  std::cout << "Hello, world! " << name << std::endl;
}

int mulitplyInteger(int a, int b) { return a * b; }

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
  for (int number : numbers) {
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
  float finalPrice =
      priceWithoutTaxes +
      priceWithoutTaxes * (static_cast<float>(taxesInPercentage) / 100);
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
  // bool isLeap{false};
  if (year % 4 == 0) {
    if (year % 100 != 0 || year % 400 == 0) {
      //   isLeap = true;
      return true;
    }
  }
  return false;
}

int findSmallestInt(int numbers[], int size) {
  // << "The list is : " << numbersList << "
  int smallest = numbers[0];
  for (int i = 0; i < size; ++i) {
    if (smallest > numbers[i]) {
      smallest = numbers[i];
    }
  }
  return smallest;
}

int findSmallestIntV2(int* numbers[], int size) {
  // << "The list is : " << numbersList << "
  int smallest = *numbers[0];
  for (int i = 0; i < size; ++i) {
    if (smallest > *numbers[i]) {
      smallest = *numbers[i];
    }
  }
  return smallest;
}

void swapValues(int& a, int& b) { swapInteger(a, b); }

int doubleArray(int numbers[], int size) {
  int sum{0};
  for (int i{0}; i < size; ++i) {
    numbers[i] *= 2;
    sum += numbers[i];
  }
  return sum;
}

void printArray(int numbers[], int size) {
  for (int i{0}; i < size; ++i) {
    std::cout << numbers[i] << " - ";
  }
  std::cout << std::endl;
}