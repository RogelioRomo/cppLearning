#include "Account_Util.h"
#include <iostream>

// Displays Account objects in a vector of Account objects
void display(const std::vector<Account> &accounts) {
  std::cout << "\n=====Accounts=====" << std::endl;
  for (const auto &acc : accounts)
    std::cout << acc << std::endl;
}

// Deposits supplied amount to each Account object in the vector
void deposit(std::vector<Account> &accounts, double amount) {
  std::cout << "\n=====Depositing to Accounts=====" << std::endl;
  for (auto &acc : accounts) {
    if (acc.deposit(amount))
      std::cout << "Deposited" << amount << " to " << acc << std::endl;
    else
      std::cout << "Failed Deposit of" << amount << " to " << acc << std::endl;
  }
}

// withdraw amount from each Account object in the vector
void withdraw(std::vector<Account> &accounts, double amount) {
  std::cout << "\n=====Withdrawing from Accounts=====" << std::endl;
  for (auto &acc : accounts) {
    if (acc.withdraw(amount))
      std::cout << "Withdrew" << amount << " from " << acc << std::endl;
    else
      std::cout << "Failed Withdrawal of" << amount << " from " << acc
                << std::endl;
  }
}

//---------------Helpers for Savings Account------------------
// Displays Account objects in a vector of Account objects
void display(const std::vector<Savings_Account> &accounts) {
  std::cout << "\n=====Saving Accounts=====" << std::endl;
  for (const auto &acc : accounts)
    std::cout << acc << std::endl;
}

// Deposits supplied amount to each Account object in the vector
void deposit(std::vector<Savings_Account> &accounts, double amount) {
  std::cout << "\n=====Depositing to Saving Accounts=====" << std::endl;
  for (auto &acc : accounts)
    if (acc.deposit(amount))
      std::cout << "Deposited " << amount << " to " << acc << std::endl;
    else
      std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
}

// withdraw amount fomr each Account object in the vector
void deposit(std::vector<Savings_Account> &accounts, double amount) {
  std::cout << "\n=====Withdrawing from Saving Accounts=====" << std::endl;
  for (auto &acc : accounts)
    if (acc.withdraw(amount))
      std::cout << "Withdrew " << amount << " from " << acc << std::endl;
    else
      std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
}
