#include <iostream>
using namespace std;

int main() {
  double num1, num2, result; // Переменные num1, num2, result
  char op;                   //ПЕременная op
  cout << "Enter first number, operator, second number: ";
  cin >> num1 >> op >> num2;

  switch(op) {  // Это switch case
    case '+':
      result = num1 + num2; //Прибавление
      break;
    case '-':
      result = num1 - num2; // Вычитание
      break;
    case '*':
      result = num1 * num2; // Умножение
      break;
    case '/':               // Деление по дефолту
      if(num2 == 0) {
        cout << "Error: division by zero" << endl;
        return 1;
      }
      result = num1 / num2;
      break;
    default:
      cout << "Error: invalid operator" << endl;
      return 1;
  }
  
  cout << num1 << " " << op << " " << num2 << " = " << result << endl;
  return 0;
}
