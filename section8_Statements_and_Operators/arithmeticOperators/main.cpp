#include <iostream>

using namespace std;

int main() {
  int num1{200};
  int num2{100};

  // cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

  int result{0};
  result = num1 + num2;
  cout << num1 << " + " << num2 << " = " << result << endl;

  result = num1 -
           num2; // this can have negative numbers, and will show it by default
  cout << num1 << " - " << num2 << " = " << result << endl;

  result = num1 * num2;
  cout << num1 << " * " << num2 << " = " << result << endl;

  result = num1 / num2;
  cout << num1 << " / " << num2 << " = " << result << endl;

  result = num1 % num2;
  cout << num1 << " 5 " << num2 << " = " << result << endl;

  num1 = 10;
  num2 = 3;

  result = num1 % num2;
  cout << num1 << " % " << num2 << " = " << result << endl;

  result = num1 * 10 + num2; // use PEMDAS
  cout << 5 / 10 << endl; // this will not show 0.5, remember is using integers
  cout << 5.0 / 10.0 << endl; // this will show 0.5 because we are using double

  cout << endl;
  return 0;
}

/*Overloaded to work with multiple types like int, double, etc:
 * + addition
 * - subtraction
 * * multiplication
 * / division
 *
 * Works only for integers:
 * % modulo or remainder
 * */
