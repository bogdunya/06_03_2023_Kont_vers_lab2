#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, min, max;//переменные
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];//заполнение массива
    }

    // начальное значение для min и max
    min = arr[0];
    max = arr[0];

    // сравниваем каждый элемент массива с текущим min и max
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];//обновить минимальное значение
        }
        if (arr[i] > max) {
            max = arr[i];//обновить максиммальное значение
        }
    }

    cout << "The smallest element is: " << min << endl;//вывод минимального элемента
    cout << "The largest element is: " << max << endl;//вывод максимального элемента

    return 0;
}
