#include <iostream>

/**
*\brief Функция вычисляет сумму
*\param a первое число
*\param b второе число
*\return сумму
*/
double getSum(const double a, const double b);

/**
*\brief Функция вычисляет разность
*\param a первое число
*\param b второе число
*\return разность
*/
double getDifference(const double a, const double b);

/**
*\brief Функция вычисляет произведение
*\param a первое число
*\param b второе число
*\return произведение
*/
double getProduct(const double a, const double b);

/**
*\brief Функция вычисляет частное
*\param a первое число
*\param b второе число
*\return частное
*/
double getQuotient(const double a, const double b);

/**
*\brief Выбор расчёта суммы(0), разности(1), произведения(2), частного(3)
*\return 0 в случае успеха
*/
enum class ActionChoice { Sum, Difference, Product, Quotient };

int main()
{
	setlocale(LC_ALL, "Russian");

	double a;
	std::cout << "Введите первое число:\n";
	std::cin >> a;

	double b;
	std::cout << "Введите второе число:\n";
	std::cin >> b;

	std::cout << "Введите выполняемое действие: (Сумма = " << static_cast<int>(ActionChoice::Sum) << ", Разность = " << static_cast<int>(ActionChoice::Difference) <<
		", Произведение = " << static_cast<int>(ActionChoice::Product) << ", Частное = " << static_cast<int>(ActionChoice::Quotient) << ")";
	int action;
	std::cin >> action;

	const auto choice = static_cast<ActionChoice>(action);

	switch (choice)
	{

	case ActionChoice::Sum:
		std::cout << "Сумма равна = " << getSum(a, b) << std::endl;
		break;
	case ActionChoice::Difference:
		std::cout << "Разность равна = " << getDifference(a, b) << std::endl;
		break;
	case ActionChoice::Product:
		std::cout << "Произведение = " << getProduct(a, b) << std::endl;
		break;
	case ActionChoice::Quotient:
		std::cout << "Частное = " << getQuotient(a, b) << std::endl;
		break;
	default:
		std::cout << "Такой команды не существует, введите корректную!";
		break;
	}
	std::cout << std::endl;
	return 0;
}

double getSum(const double a, const double b)
{
	return a + b;
}

double getDifference(const double a, const double b)
{
	return a - b;
}

double getProduct(const double a, const double b)
{
	return a * b;
}

double getQuotient(const double a, const double b)
{
	return a / b;
}
