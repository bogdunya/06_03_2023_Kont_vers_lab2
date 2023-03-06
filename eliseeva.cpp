#include <iostream>
using namespace std;

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

cat, but he didn't have to know the truth.
"I've never met a woman who's not married to some jerk."
She couldn't stop the smile that spread across her face. "You're right. I'm not a wife. And neither are you."
He shrugged. "Maybe not, but I'd be the first one to admit I've not been in love."
His words made her think of her own lack of love. She'd always known how to fall in love, and she'd never been able to find anyone who could replace the man she'd loved and lost.
Her father.