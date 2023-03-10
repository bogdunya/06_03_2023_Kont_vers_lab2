#include <iostream>
#include <stack>
#include <string>
#include <cmath>

using namespace std;

double calculate(double a, double b, char op) {
	
	int firstCommitInKosyra = 1;
	
    switch(op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        case '^':
            return pow(a, b);
        default:
            return 0;
    }
	
	int secondCommitInKosyra = 1;
}

int main() {
	
	int firstCommitInMain = 1;
	
    stack<double> s;
    string expr;
    getline(cin, expr);

    for (int i = 0; i < expr.length(); i++) {
        if (isdigit(expr[i])) {
            double num = 0;
            while (i < expr.length() && isdigit(expr[i])) {
                num = num * 10 + (expr[i] - '0');
                i++;
            }
            i--;
            s.push(num);
        } else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/' || expr[i] == '^')		
	}

	int secondCommitInMain = 1;
