#include "main.hpp"

#include "day1.hpp"

int main() {
  std::string name = "Florence";

  // Job 1
  say_hello(name);

  // Job 2
  int c = mulitplyInteger(3, 6);
  std::cout << c << std::endl;

  // Job 3
  //  std::array<int, 5> numbers = getNumbers();
  //  std::cout << "Average: " << average(numbers) << std::endl;

  // Job 4
  std::cout << (isPair() ? "Even" : "Odd") << std::endl;

  // Job 5
  int a = 123;
  int b = 321;
  swapInteger(a, b);

  // Job 6
  std::cout << "Enter the price of whatever here :" << std::endl;
  float priceWithoutTaxes{0};
  std::cin >> priceWithoutTaxes;
  std::cout << "final price is : "
            << getTaxesIncludedPrice(priceWithoutTaxes, 15) << "€" << std::endl;

  // Job 7
  std::cout << "Enter a number to revert" << std::endl;
  int number{0};
  std::cin >> number;
  std::cout << "Your reversed number is : " << revertNumber(number)
            << std::endl;

  // Job 8
  std::cout << "Enter a year and check if it is a leap year :" << std::endl;
  int year{0};
  std::cin >> year;
  std::cout << year << (isLeapYear(year) ? " is " : " isn't ") << "a leap year."
            << std::endl;

  // Job 9
  int numbersList[5]{1, 2, 0, 5, 11};
  std::cout << "The list is : ";
  for (int i = 0; i < 5; i++) {
    std::cout << numbersList[i] << " ";
  }

  std::cout << "The smallest number is : " << findSmallestInt(numbersList, 5)
            << std::endl;

  // Job 10
  int a1{5}, b1{2}, c1{8}, d1{1}, e1{3};
  int* numbersListV2[5]{&a1, &b1, &c1, &d1, &e1};
  std::cout << "The list is : ";
  for (int i = 0; i < 5; i++) {
    std::cout << *numbersListV2[i] << " ";
  }

  std::cout << "The smallest number is : "
            << findSmallestIntV2(numbersListV2, 5) << std::endl;

  // Job 5
  int a2 = 456;
  int b2 = 789;
  swapInteger(a2, b2);

  return 0;
}
