#include <iostream>
#include <cmath>
#include <iomanip>

/**
*\brief Расчет функции в точке x
*\param x входной параметр - точка x
*\return Значение функции
*/
double Calculation(const double x);

/**
*\brief точка входа в программу
*\return код ошибки (0 - успех)
*/
int main()
{
	const auto LeftBound = 1.0;
	const auto RightBound = 3.0;
	const auto Step = 0.2;

	auto x = LeftBound;
	std::cout << std::setw(9) << "x" << std::setw(16) << "y\n";
	while ((x < RightBound) || (abs(x - RightBound) < Step))
	{
		const auto y = Calculation(x);
		std::cout << std::setw(10) << std::setprecision(2) << x << std::setw(15) << std::setprecision(5) << y << "\n";
		x += Step;
	}
	return 0;
}

double Calculation (const double x)
{
	return sin(log(x)) - cos(log(x)) + 2 * (log(x));
}