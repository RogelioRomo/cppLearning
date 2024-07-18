#include "Account.h"
//notice how we dont need to #include <string> again since the header file already includes it

void Account::set_name(std::string n) { name = n; }

std::string Account::get_name() {
  return name; // this returns a COPY of the name
}

bool Account::deposit(double amount) {
  // if verify amount
  balance += amount;
  return true;
}

bool Account::withdraw(double amount) {
  if (balance - amount >= 0) {
    balance -= amount;
    return true;
  } else {
    return false;
  }
}


