#include <iostream>
#include <string>

using namespace std;

class Player {
public:
  // attributes
  string name;
  int health;
  int xp;
  // methods
  void talk(string text_to_say) {
    cout << name << " says " << text_to_say << endl;
  }
  bool is_dead();
};

class Account {
public:
  // attributes
  string name;
  double balance;
  // methods
  bool deposit(double bal) {
    balance += bal;
    cout << "In deposit" << endl;
  }
  bool withdraw(double bal) {
    balance -= bal;
    cout << "In withdraw" << endl;
  }
};

int main() {
  //using dot operator to access the data of our new object and change it 
  Player frank;
  frank.name = "Frank";
  frank.name = 100;
  frank.xp = 12;
  frank.talk("Hi there");

  //accessing data from a pointer
  Player *enemy = new Player;
  (*enemy).name = "Enemy";
  (*enemy).health = 100; //accessing with dereference and dot operator
  enemy->xp = 15; //accessing but with arrow operator

  enemy->talk("I will destroy you!");

  //-------------------------------------------------------------

  Account frank_account;
  frank_account.name = "Frank's account";
  frank_account.balance = 5000.0;

  frank_account.deposit(1000.0);
  frank_account.withdraw(500.0);

  cout << endl;
  return 0;
}
