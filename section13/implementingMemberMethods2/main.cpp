#include <iostream>
#include "Account.h"

using namespace std;

int main() {
  Account frank_account;
  frank_account.set_name("Frank's account"); // notice that we use the public
                                             // methods to access the data
  frank_account.set_balance(1000.0); // we cant access .name or .balance directly
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
