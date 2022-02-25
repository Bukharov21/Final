#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/**
*\ brief Расчет функции в точке x.
*\ param x входной параметр - точка x.
*\ return Значение функции.
*/
double Calculation(const double x);

/**
*\ brief Проверка на существование функции в x. 
*\ brief param x заданная точка. 
*\ return true, если значение в x существует. 
bool isExists(const double x);

/**
*\ brief точка входа в программу.
*\ return код ошибки (0 - успех).
*/
int main()
{
	const auto leftBound = 1.0;
	const auto rightBound = 3.0;
	const auto step = 0.2;

	auto x = leftBound;
	cout << setw(9) << "x" << setw(16) << "y\n";
	while ((x < rightBound) || (abs(x - rightBound) < step))
	{
		if(isExists(x)) 
		{
			const auto y = Calculation(x);
			cout << setw(10) << setprecision(2) << x << setw(15) << setprecision(5) << y << "\n";
		else
		{
			cout << "x= " << x << "y не существует\n";
		} 
		} 
		x += step; 
	}
	return 0;
}

double Calculation (const double x)
{
	return sin(log(x)) - cos(log(x)) + 2 * (log(x));
}

bool isExists(const double x)
{
	return x<=0;
}
