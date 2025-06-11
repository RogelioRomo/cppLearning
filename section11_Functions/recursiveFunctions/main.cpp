#include <iostream>

using namespace std;

// factorial
unsigned long long factorial(unsigned long long n);

unsigned long long factorial(unsigned long long n) {
  // important to remember unwinding from a recursive call
  // thats how we get 6 in this example
  if (n == 0)
    return 1;                  // base case
  return n * factorial(n - 1); // recursion
}

// fibonacci
// unsigned long long fibonacci(unsigned long long n);
//
// unsigned long long fibonacci(unsigned long long n) {
//   if (n <= 1)
//     return n;
//   return fibonacci(n - 1) + fibonacci(n - 2); //recursion
// }

int main() {
  cout << factorial(3) << endl; // 6
  // cout << factorial(8) << endl; //40320
  // cout << factorial(12) << endl; //479001600
  // cout << factorial(20) << endl; //2432902008176640000

  // cout << fibonacci(3) << endl; //6
  // cout << fibonacci(30) << endl; //832040
  // cout << fibonacci(40) << endl; //1022334155

  cout << endl;
  return 0;
}
