#include <iostream>

using namespace std; //Second commit

int main() {
    char op;
    double num1, num2;
    cout << "Enter operator either + or - or * or /: ";
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num1 + num2;
            break;

        case '-':
            cout << num1 - num2;
            break;

        case '*':
            cout << num1 * num2;
            break;

        case '/':
            cout << num1 / num2;
            break;

        default:
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
<<<<<<< HEAD
<<<<<<< HEAD

<<<<<<< HEAD
//Первый коммит
=======
//Первый коммит коммент
>>>>>>> 3577846 (first commit main)
=======
//Первый коммит коммент
>>>>>>> d7cd8a8 (first commit salnikov)
=======
//Первый коммит коммент
//Второй коммит комминт своя ветка
>>>>>>> origin/salnikov
