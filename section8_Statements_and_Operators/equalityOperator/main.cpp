#include <ios>
#include <iostream>

using namespace std;

int main() {
  bool equal_result{false};
  bool not_equal_result{false};

  int num1{}, num2{};
  cout << boolalpha; // will display true/false instead of 1/0 for booleans

  // cout << "Enter two integers separated by a space: ";
  // cin >> num1 >> num2;
  // equal_result = (num1 == num2);
  // not_equal_result = (num1 != num2);
  // cout << "Comparison result (equals): " << equal_result << endl;
  // cout << "Comparison result (not equals): " << not_equal_result << endl;

  // char char1{}, char2{};
  // cout << "Enter two characters separated by a space: ";
  // cin >> char1 >> char2;
  // equl_result = (char1 == char2);
  // not_equal_result = (char1 != char2);
  // cout << "Comparison result (equals): " << equal_result << endl;
  // cout << "Comparison result (not equals): " << not_equal_result << endl;

  double double1{}, double2{};
  // cout << "Enter two doubles separated by a space: ";
  // cin >> double1 >> double2;
  // equl_result = (double1 == double2); //note that behind C++ scenes if we
  // not_equal_result = (double1 != double2);
  // cout << "Comparison result (equals): " << equal_result << endl;
  // cout << "Comparison result (not equals): " << not_equal_result << endl;

  cout << "Enter an integer and a double separated bya space: ";
  cin >> num1 >> double1;
  equal_result = (num1 == double1);
  not_equal_result = (num1 != double1);
  cout << "Comparison result (equals): " << equal_result << endl;
  cout << "Comparison result (not equals): " << not_equal_result << endl;
}

/*
 *The == and != operators
 Compares the values of 2 expressions
 Evaluates to a boolean (true or false, 1 or 0)
 Commonly used in control flow statements
  e.g.
    expr1 == expr2;
    expr1 != expr2;

    100 == 100;
    num1 != num2;
 * */
