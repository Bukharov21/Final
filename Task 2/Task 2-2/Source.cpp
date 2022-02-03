#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

/**
*\brief Функция, работающая для ограничений x < a
*\param x параметр x
* param a параметр a
*\return Значение функции
*/
double getFunctionY1(const double x, const double a);

/**
*\brief Функция, работающая для ограничений x >= a
*\param x параметр x
*\param a параметр a
*\return Значение функции
*/
double getFunctionY2(const double x, const double a);

/**
*\brief Точка входа в программу
*\return 0 в случае успеха
*/
int main()

{
    const auto THRESHOLD = 1.4;
    const double a = 1.65;
    std::cout << "Введите значение x = ";
    double x;
    std::cin >> x;

    double y;
    if (x < 1.34)
    {
        y = getFunctionY1(x, a);
    }
    else if (x > THRESHOLD)
    {
        y = getFunctionY2(x, a);
    }
    else
    {
        y = getFunctionY2(x, a);
    }
    std::cout << "y = " << y;
    return 0;
}

double getFunctionY1(const double x, const double a)
{
    return M_PI * pow(x, 2) - 7 / pow(x, 2);
}

double getFunctionY2(const double x, const double a)
{
    return log(x + 7 * sqrt(x + a));
}
