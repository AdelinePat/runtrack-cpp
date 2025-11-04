#ifndef ONE_HPP
#define ONE_HPP
#include <array>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <string>

void say_hello(std::string name);
int mulitplyInteger(int a, int b);

std::array<int, 5> getNumbers();
float average(const std::array<int, 5>& numbers);

bool isPair();

void swapInteger(int& a, int& b);

float getTaxesIncludedPrice(float priceWithoutTaxes, int taxesInPercentage);

int revertNumber(int number);

bool isLeapYear(int year);

int findSmallestInt(int numbers[], int size);

int findSmallestIntV2(int* numbers[], int size);

void swapValues(int& a, int& b);

int doubleArray(int numbers[], int size);
void printArray(int numbers[], int size);

std::array<int, 10> finobacci(int n);

bool hasEvenBits(uint32_t n);

long cube(int value);

#endif
