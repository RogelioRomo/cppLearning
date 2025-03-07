#include <iostream>

using namespace std;

int main() {
  int total{};
  int num1{}, num2{}, num3{};
  const int count{3};

  cout << "Enter 3 integers separated by spaces: ";
  cin >> num1 >> num2 >> num3;

  total = num1 + num2 + num3;

  double average{0.0};

  average = static_cast<double>(total) / count;
  // note that without the static_cast method we wouldn't get
  // any doubles as a result of the average because we would
  // divide total by an integer and that means C++ converts
  // the result to an integer

  cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3
       << endl;
  cout << "The sum of the numbers is: " << total << endl;
  cout << "The average of the numbers is: " << average << endl;

  cout << endl;
  return 0;
}

// Ask the user to enter 3 integers
// Calculate the sum of the integers then calculate the average of the 3
// integers Display the 3 integers entered, the sum of the 3 integers and the
// average
