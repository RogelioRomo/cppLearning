#include <iostream>

using namespace std;

int main() {
  cout << "Estimate for carpet cleaning service" << endl;
  cout << "=====================================" << endl;
  cout << "Enter the number of rooms: ";
  int number_of_rooms{0};
  cin >> number_of_rooms;

  cout << "Number of rooms: " << number_of_rooms << endl;
  const double price_per_room{30};
  cout << "Price per room: " << price_per_room << endl;

  double cost{number_of_rooms * price_per_room};
  cout << "Cost: " << cost << endl;

  const double tax_rate{0.06};
  double tax{cost * tax_rate};
  cout << "Tax: " << tax << endl;
  cout << "=====================================" << endl;
  cout << "Total extimate: " << cost + tax << endl;
  const int estimate_expiration{30}; // days
  cout << "This estimate is valid for " << estimate_expiration << " days"
       << endl;

  return 0;
}

/*
 * Constants have names, occupy storage, and are usually types
 * However, their values cannot change once declared
 *
 * Types of constants:
 *  Literal constants
 *    e.g.: x = 12;
 *  Declared constants:
 *    e.g.: const keyword;
 *  Constant expressions:
 *    e.g.: constExpr keyword;
 *  Enumerated constants:
 *    e.g.:enum keyword;
 *  Defined constants (this ones are not longer used in modern c++):
 *    e.g.: #define keyword
 *
 *escape codes are also constants:
 *  \n - newline
 *  \r - return
 *  \t - tab
 *  \b - backspace
 *  \' - single quote
 *  \" - double cuote
 *  \\ - backslash
 * */
