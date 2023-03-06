#include <iostream>
using namespace std;

git of j?
8
Let z(i) = 5*i**2 - 5*i + 2. Let u be z(2). Suppose -3*t - u = -36. What is the units digit of t?
0
Let h(f) = -f**3 + 2*f**2 + 3*f + 1. Let l be h(3). Let c be (-4)/(-14) + l/7. Suppose 0 = -c*u - 2*u + 6. What is the tens digit of u?
1
Suppose 0 = -3*x - 15, -2*x = -4*m + x + 45. Suppose -m = -2*g - g. Suppose g*u = u + 30. What is the units digit of u?
6
Let y = -5 - -7. Suppose 0*n + y*n - 8 = 0. Suppose -2*p - 3*p + n*m = -71, -p = 2*m - 1. What is the tens digit of p?
1


int main() {
  int n, flag = 0;
  cout << "Enter a positive integer: ";
  cin >> n;
  
  for(int i = 2; i <= n/2; i++) {
    if(n % i == 0) {
      flag = 1;
      break;
    }
  }
  
  if(flag == 0) {
    cout << n << " is a prime number" << endl;
  }
  else {
    cout << n << " is not a prime number" << endl;
  }
  return 0;
}
