#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

<<<<<<< HEAD
<<<<<<< HEAD
//первое изменение
<<<<<<< HEAD
//второе изменение в своей ветке
=======
>>>>>>> 075b38e15dcd1381759e928c9f63a5291b87941e
=======
//thrid change
>>>>>>> c87a0b3 (commit in main-2)
=======
//four
>>>>>>> origin/panova

int main() {
    int n, arr[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
