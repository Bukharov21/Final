#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \return 0 в случае успеха
 */
double getA(const double x, const double y, const double z);

/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \param x параметр х
 * \param y параметр y
 * \param z параметр z
 * \return 0 в случае успеха
 */
double getB(const double x, const double y, const double z, const double a);

/**
 * \brief Точка входа в программу
 * \return 0 в случае успеха
 */
int main()
{
    const double x = -0.5;
    const double y = 1.7;
    const double z = 0.44;

    const double a = getA(x, y, z);
    const double b = getB(x, y, z, a);


    cout << " x = " << x << " y = " << y << " z = " << z
        << " a = " << a << " b = " << b << endl;
    return 0;
}


double getA(const double x, const double y, const double z)
{
    return exp(-y * z) * sin(x * z - y) - sqrt(abs(y * z + x));
}

double getB(const double x, const double y, const double z, const double a)
{
    return y * sin(a * pow(z, 2) * cos(2 * z)) - 1;
}