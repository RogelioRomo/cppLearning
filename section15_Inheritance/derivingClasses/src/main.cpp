#include "Savings_Account.h"
#include <iostream>

int main() {
  // use the Account class
  std::cout << "\n=====Account=====" << std::endl;
  Account acc{};
  acc.deposit(2000.0);
  acc.withdraw(500.0);

  std::cout << std::endl;

  Account *p_acc{nullptr};
  p_acc = new Account();
  p_acc->deposit(1000.0);
  p_acc->withdraw(500.0);
  delete p_acc;

  // use the savings Account class
  std::cout << "\n=====Savings Account=====" << std::endl;
  Savings_Account sav_acc{};
  sav_acc.deposit(2000.0);
  sav_acc.withdraw(500.0);

  std::cout << std::endl;

  Savings_Account *p_sav_acc{nullptr};
  p_sav_acc = new Savings_Account();
  p_sav_acc->deposit(1000.0);
  p_sav_acc->withdraw(500.0);
  delete p_sav_acc;

  return 0;
}
