
#include "Savings_Account.h"
#include <iostream>

int main() {
  std::cout << "\n=====Account Class=====" << std::endl;
  Account a1{1000.0};
  std::cout << a1 << std::endl; // Account balance: 1000

  a1.deposit(500.0);
  std::cout << a1 << std::endl; // Account balance: 1500

  a1.withdraw(1000); // Account balance: 500
  std::cout << a1 << std::endl;

  a1.withdraw(5000.0);          // Insufficient funds
  std::cout << a1 << std::endl; // Account balance: 500

  std::cout << "\n=====Savings Account class=====" << std::endl;
  Savings_Account s1{1000, 5.0};
  std::cout << a1 << std::endl; // Savings Account balance: 1000, Interest rate: 5

  s1.deposit(1000);
  std::cout << a1 << std::endl; // Savings Account balance: 2050, Interest rate: 5

  s1.withdraw(2000); // Savings Account balance: 50, Interest rate: 5
  std::cout << a1 << std::endl;

  s1.withdraw(1000);            // Insufficient funds
  std::cout << a1 << std::endl; // Savings Account balance: 50, Interest rate: 5

  return 0;
}
