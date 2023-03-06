#include <iostream>
using namespace std;

int main() {
  double num, num, result;
  char op;
  cout << "Enter first number, operator, second number: ";
  cin >> num >> op >> num;

  switch(op) {
    case '+':
      result = num + num;
      break;
    case '-':
      result = num - num;
      break;
    case '*':
      result = num * num;
      break;
    case '/':
      if(num == 0) {
        cout << "Error: division by zero" << endl;
        return 1;
      }
      result = num / num;
      break;
    default:
      cout << "Error: invalid operator" << endl;
      return 1;
  }
  
  cout << num1 << " " << op << " " << num2 << " = " << result << endl;    //вывод результата в консоль
  return 0;
}
