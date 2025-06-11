#include <iostream>

using namespace std;

int main() {
  int num1{10};
  int num2{20};

  num1 =
      100; // we assign the value of 100 to the variable num1 that was before 10
  num1 = num2; // we assign the value of num2 to the variable num1 that was
               // before 10
  num1 = num2 = 1000; // we assign the value of 1000 to num2 and then we assign
                      // num2 to num1 (it goes right to left)

  cout << "num1 is: " << num1 << endl;
  cout << "num2 is: " << num2 << endl;

  return 0;
}
