#include <iostream>
#include <cmath>
#include <random>

using namespace std;

/**
* \brief Проверка ввода размера массива.
* \return размер массива.
*/
size_t GetSize();

/**
* \brief Заполнение массива случайными числами.
* \param size размер массива.
* \param minValue минимальное значение элементов массива.
* \param maxValue максимальное значение элементов массива.
* \return заполненный массив.
*/
int* getRandomArr(size_t size, int minValue, int maxValue);

/**
* \brief Метод, возвращающий заполненный пользователем массив.
* \param size размер массива.
* \param minValue минимальное значение элементов массива.
* \param maxValue максимальное значение элементов массива.
* \return заполненный массив.
*/
int* getArrWithKeyboard(size_t size);
/**
* \brief Метод, возвращающий сумму четных элементов массива.
* \param size размер массива.
* \param Arr массив.
* \param count количество.
* \return сумма четных элементов массива.
*/
int getCountNumberFromToDigits(const int* Arr, size_t size);

/**
* \brief Метод, возвращающий количество элементов массивам состоящих из 2х цифр.
* \param size размер массива.
* \param Arr массив.
* \param Sum сумма.
* \return количество элементов массива состоящих из 2х цифр.
*/
int getSumEvenNumbers(const int* Arr, size_t size);

/**
* \brief Варианты ввода массива.
*/
enum class ArrInputWay { random, keyboard };

/**
* \brief Вывод массива на консоль.
* \param Arr массив.
* \param size размер массива.
*/
void printArr(const int* Arr, size_t size);

/**
* \brief Замена последнего отрицательного элемента на модуль первого элемента.
* \param size размер массива.
* \param Arr массив.
*/
void replcaingLastNegativeElementOnModuleFirstElement(int* Arr, size_t size);

/**
* \brief Точка входа в программу.
* \return 0 в случае успеха.
*/
int main()
{
    setlocale(LC_ALL, "ru");
    size_t size = GetSize();

    if (size == 0) return 1;

    cout << "Как заполнить массив?\n";
    cout << static_cast<int>(ArrInputWay::random) << " - рандомно\n";
    cout << static_cast<int>(ArrInputWay::keyboard) << " - вручную\n";
    cout << "Ваш выбор: ";
    int choice;
    cin >> choice;

    const auto chosen = static_cast<ArrInputWay>(choice);
    int* Arr = nullptr;

    auto minValue = 0;
    auto maxValue = 0;
    cout << "Введите диапазон чисел массива (от и до): " << endl;
    cin >> minValue >> maxValue;

    if (maxValue <= minValue) cout << "Введен неправильный диапазон!\n" << endl;

    switch (chosen)
    {
    case ArrInputWay::random:
    {
        Arr = getRandomArr(size, minValue, maxValue);
        break;
    }
    case ArrInputWay::keyboard:
    {
        Arr = getArrWithKeyboard(size);
        break;
    }

    }

    printArr(Arr, size);

    cout << "Сумма четных элементов массива: " << getSumEvenNumbers(Arr, size) << endl;
    cout << "Количество элементов массива состоящих из двух цифр: " << getCountNumberFromToDigits(Arr, size) << endl;

    replcaingLastNegativeElementOnModuleFirstElement(Arr, size);
    printArr(Arr, size);

    return 0;
}

size_t GetSize()
{
    int size = 0;
    cout << "Введите размер массива: " << endl;
    cin >> size;
    if (size <= 0)
    {
        cout << "Введён неверный размер массива!";
        return 0;
    }

    return size;
}

int* getRandomArr(const size_t size, const int minValue, const int maxValue)
{
    srand(time(NULL));
    const auto area = abs(minValue) + abs(maxValue) + 1;
    auto* arr = new int[size];
    for (size_t index = 0; index < size; index++)
    {
        arr[index] = rand() % area + minValue;
    }

    return arr;
}

int* getArrWithKeyboard(const size_t size)
{
    auto* arr = new int[size];
    cout << "Введите элементы массива: " << endl;
    for (size_t index = 0; index < size; index++)
    {
        cin >> arr[index];
    }

    return arr;
}

int getCountNumberFromToDigits(const int* Arr, const size_t size)
{
    int count = 0;

    for (size_t index = 0; index < size; index++)
    {
        if (Arr[index] > 9 && Arr[index] < 100)
            count++;
    }

    return count;
}

int getSumEvenNumbers(const int* Arr, const size_t size)
{
    int sum = 0;

    for (size_t index = 0; index < size; index++)
    {
        if (Arr[index] % 2 == 0) sum
            += Arr[index];
    }

    return sum;
}

void printArr(const int* Arr, const size_t size)
{
    cout << "\n";
    if (Arr == nullptr)
    {
        cout << "Массива не существует!";
    }
    else
    {
        cout << "Массив: ";
        for (size_t index = 0; index < size; index++)
        {
            cout << Arr[index] << " ";
        }

    }

    cout << "\n" << "\n";
    return;
}

void replcaingLastNegativeElementOnModuleFirstElement(int* Arr, const size_t size)
{
    for (int index = (size - 1); index >= 0; index--)
    {
        if (Arr[index] < 0)
        {
            Arr[index] = abs(Arr[0]);
            break;
        }
    }
}