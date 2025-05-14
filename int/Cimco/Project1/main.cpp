Header.h
#pragma once

int  addition(int a, int b);
int  subtraction(int a, int b);
int  multiplication(int a, int b);
int  division(int a, int b);
int  exponentiation(int a, int b);

math_power.cpp
#include "Header.h"
#include <math.h>

int  addition(int a, int b)
{
    return a + b;
};

int  subtraction(int a, int b)
{
    return a - b;
};

int  multiplication(int a, int b)
{
    return a * b;
};

int  division(int a, int b)
{
    return a / b;
};

int  exponentiation(int a, int b)
{
    return pow(a, b);
};

Source.cpp

#include <iostream>
#include <string>
#include "Header.h"
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b, choice, result;

    std::cout << "¬ведите первое число: ";
    std::cin >> a;

    std::cout << "¬ведите второе число: ";
    std::cin >> b;

    std::cout << "¬ыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        result = addition(a, b);
        std::cout << a << " + " << b << " = " << result;
        break;
    case 2:
        result = subtraction(a, b);
        std::cout << a << " - " << b << " = " << result;
        break;
    case 3:
        result = multiplication(a, b);
        std::cout << a << " * " << b << " = " << result;
        break;
    case 4:
        result = division(a, b);
        std::cout << a << " / " << b << " = " << result;
        break;
    case 5:
        result = exponentiation(a, b);
        std::cout << a << " dcd " << b << " = " << result;
        break;
    }

    return 0;
}
