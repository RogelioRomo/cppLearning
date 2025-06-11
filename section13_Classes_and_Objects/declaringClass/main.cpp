#include <iostream>
#include <vector>
#include <string>

using namespace std; //remember this is considered bad practice when using a lot of libraries
//consider just using the scope operator :: or typedef

class Player { //remember class_name start with uppercase
  //atributes
  string name{"Player"};
  int health{0};
  int xp{0};

  //methods without defining the functions
  void talk(string);
  bool is_dead();
};//important to write the semicolon

class Account {
  //atributes
  string name{"Account"};
  double balance{0.0};

  //methos without defining the functions
  bool deposit(double);
  bool withdraw(double);
};

int main() {
  Account frank_account;
  Account jim_account;

  Player frank;
  Player hero;

  Player players[]{frank, hero};

  vector<Player> player_vec{frank};
  player_vec.push_back(hero);

  Player *enemy{nullptr};
  enemy = new Player;

  delete[] enemy;
  return 0;
}
