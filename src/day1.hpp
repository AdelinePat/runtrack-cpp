#ifndef ONE_HPP
#define ONE_HPP
#include <iostream>
#include <string>
#include <array>
#include <cmath> 

void say_hello(std::string name);
int mulitplyInteger(int a, int b);

std::array<int, 5> getNumbers();
float average(const std::array<int, 5>& numbers);

bool isPair();

void swapInteger(int& a, int& b);

float getTaxesIncludedPrice(float priceWithoutTaxes, int taxesInPercentage);

#endif
