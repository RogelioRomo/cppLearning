#include <iostream>
#include <string>

using namespace std;

class Account {
private:
  // attributes
  string name;
  double balance;

public:
  // methods
  // declared inline
  void set_balance(double bal) { balance = bal; }
  double get_balance() { return balance; }

  // methods will be declard outside the class declaration
  void set_name(string n);
  string get_name();

  bool deposit(double amount); // prototype
  bool withdraw(double amount);
};

void Account::set_name(string n) { name = n; }

string Account::get_name() {
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

int main() {
  Account frank_account;
  frank_account.set_name("Frank's account"); // notice that we use the public
                                             // methods to access the data
  frank_account.set_balance(1000.0); // we can access .name or .balance directly
                                     // since these are private

  if (frank_account.deposit(200.0))
    cout << "Deposit OK" << endl;
  else
    cout << "Deposit not allowed" << endl;

  if (frank_account.withdraw(500.0))
    cout << "Withdrawal OK" << endl;
  else
    cout << "Not sufficient funds" << endl;

  if (frank_account.withdraw(1500.0))
    cout << "Deposit OK" << endl;
  else
    cout << "Not sufficient funds" << endl;

  cout << endl;
  return 0;
}
