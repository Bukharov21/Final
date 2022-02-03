#include <iostream>

using namespace std;

/**
*\brief Функция вычисляет сумму
*\param x первое число
*\param y второе число
*\return сумму
*/
double getSum (const double x, const double y);

/**
*\brief Функция вычисляет разность
*\param x первое число
*\param y второе число
*\return сумму
*/
double getDifference (const double x, const double y);

/**
*\brief Функция вычисляет произведение
*\param x первое число
*\param y второе число
*\return сумму
*/
double getProduct (const double x, const double y);

/**
*\brief Функция вычисляет частное
*\param x первое число
*\param y второе число
*\return сумму
*/
double getQuotient (const double x, const double y);

/**
*\brief Точка входа в программу
*\return 0 в случае успеха
*/
int main()
{

    long double x, y;
    cout << " Введите первое число: " << "\n" << " x = ";
    cin >> x;

    cout << " Введите второе число: " << "\n" << " y = ";
    cin >> y;

    cout << " x + y = " << getSum(x, y) << endl;
    cout << " x - y = " << getDifference(x, y) << endl;
    cout << " x * y = " << getProduct(x, y) << endl;
    cout << " x : y = " << getQuotient(x, y) << endl;
    return 0;
}

double getSum(const double x, const double y)
{
	return x + y;
}

double getDifference(const double x, const double y)
{
	return x - y;
}

double getProduct(const double x, const double y)
{
	return x * y;
}

double getQuotient(const double x, const double y)
{
	return x / y;
}
