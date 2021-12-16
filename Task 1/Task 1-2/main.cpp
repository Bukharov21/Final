#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

/**
* \brief Точка входа в программу
* \return 0  в случае успеха
*/
int main()
{

    long double x, y;
    cout << " Введите первое число: " << "\n" << " x = ";
    cin >> x;

    cout << " Введите второе число: " << "\n" << " y = ";
    cin >> y;

    cout << " x + y = " << x + y << endl;
    cout << " x - y = " << x - y << endl;
    cout << " x * y = " << x * y << endl;
    cout << " x : y = " << x / y << endl;

    return 0;
}