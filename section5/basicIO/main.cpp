#include <iostream>

using namespace std;

int main() {
  cout << "Hello world!" << endl;

  cout << "Hello";
  cout << "world" << endl;

  cout << "Hello world!" << endl;
  cout << "Hello" << " world!" << endl;
  cout << "Hello" << " world!\n";
  cout << "Hello\nOut\nThere\n";

  int num1;
  int num2;
  double num3;

  cout << "Enter an integer: ";
  cin >> num1;
  cout << "You entered: " << num1 << endl;

  // prints 2 integers from the input. One important thing to mention
  // is that you can enter both integers in the first prompt and it will print
  // the last line of code, but it wont ask for the second integer
  cout << "Enter a first integer: ";
  cin >> num1;
  cout << "Enter a second integer: ";
  cin >> num2;
  cout << "You entered " << num1 << " and " << num2 << endl;

  // does the same that the above code but we are chaining the input variables
  // in order to reduce the lines of code and to resolve the issue with
  // both integers being entered in the first prompt
  cout << "Enter 2 integers separated with a space: ";
  cin >> num1 >> num2;
  cout << "You entered " << num1 << " and " << num2 << endl;

  // prints the double the user enters
  cout << "Enter a double: ";
  cin >> num3;
  cout << "You entered: " << num3 << endl;

  // prints two numbers, one integer and one double. But it has an issue
  // if you enter a double in the first prompt it will not ask for the second
  // number because for example 10.5 will read 10 as the first integer
  // and then will read .5 as the double, and that will be printed
  cout << "Enter an integer: ";
  cin >> num1;
  cout << "Enter a double: ";
  cin >> num3;
  cout << "The integer is: " << num1 << endl;
  cout << "And the double is: " << num3 << endl;
}
