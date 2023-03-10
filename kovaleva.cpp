#include <iostream>
#include <cmath>

//One commit in Main

using namespace std;

//One commit in Kovaleva

double f(double x) // Функция для вычисления значения уравнения
{
    return x * x - 4;
}

double df(double x) // Функция для вычисления значения производной
{
    return 2 * x;
}

//Second commit in Kovaleva

int main()
{
    double x0 = 1; // Начальное приближение для корня
    double epsilon = 0.0001; // Точность решения
    double x1;

    do
    {
        x1 = x0 - f(x0) / df(x0); // Применяем метод Ньютона для нахождения нового приближения
        x0 = x1; // Обновляем значение приближения
    } while (abs(f(x1)) > epsilon); // Проверяем точность решения

    cout << "Корень уравнения: " << x1 << endl;

    return 0;
}

//Second commit in Main
