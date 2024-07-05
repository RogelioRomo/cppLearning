#include <iostream>

using namespace std;

int main() {
  const int dollar_value{100};
  const int quarter_value{25};
  const int dime_value{10};
  const int nickel_value{5};
  const int penny_value{1};
  int cents{};

  cout << "Enter the number of cents: ";
  cin >> cents;

  int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

  // without modulo operator
  dollars = cents / dollar_value;
  balance = cents - (dollars * dollar_value);

  quarters = balance / quarter_value;
  balance -= quarters * quarter_value;

  dimes = balance / dime_value;
  balance -= dimes * dime_value;

  nickels = balance / nickel_value;
  balance -= nickels * nickel_value;

  pennies = balance / penny_value;
  balance -= pennies * penny_value;

  balance = dollars = quarters = dimes = nickels = pennies =
      0; // reset all to zero after computing

  // with modulo operator
  // this will take the remaining of your division,
  // remember its the value of the substraction in the division
  // after it can't substract the divisor
  dollars = cents / dollar_value;
  balance = cents % dollar_value;

  quarters = balance / quarter_value;
  balance %= quarter_value;

  dimes = balance / dime_value;
  balance %= dime_value;

  nickels = balance / nickel_value;
  balance %= nickel_value;

  pennies = balance / penny_value;
  balance %= penny_value;

  cout << "\nThis is your change: " << endl;
  cout << "==========================" << endl;
  cout << "Dollars: " << dollars << endl;
  cout << "Quarters: " << quarters << endl;
  cout << "Dimes: " << dimes << endl;
  cout << "Nickels: " << nickels << endl;
  cout << "Pennies: " << pennies << endl;

  cout << endl;
  return 0;
}
