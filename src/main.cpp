#include "main.hpp"
#include "day1.hpp"

int main() {
    std::string name = "Florence";

    //Job 1
    say_hello(name);

    //Job 2
    int c = mulitplyInteger(3, 6);
    std::cout << c << std::endl;

    //Job 3
    // std::array<int, 5> numbers = getNumbers();
    // std::cout << "Average: " << average(numbers) << std::endl;

    //Job 4
    std::cout << (isPair() ? "Even" : "Odd") << std::endl;

    //Job 5
    int a = 123;
    int b = 321;
    swapInteger(a, b);

    //Job 6
    std::cout << "Enter the price of whatever here :" << std::endl;
    float priceWithoutTaxes{0};
    std::cin >> priceWithoutTaxes;
    std::cout << "final price is : " << getTaxesIncludedPrice(priceWithoutTaxes, 15) << "€" << std::endl;

    //Job 7
    std::cout << "Enter a number to revert" << std::endl;
    int number{0};
    std::cin >> number;
    std::cout << "Your reversed number is : " << revertNumber(number) << std::endl;

    return 0;
}
