#include <iostream>
#include <string>

using namespace std;

class Player {
private:
  std::string name;
  int health;
  int xp;
public:
  Player();
  Player(std::string name_val);
  Player(std::string name_val, int health_val, int xp_val);
};

Player::Player()
  : Player{"None", 0, 0} {
  cout << "No args constructor" << endl; //see in debugger for behavior
}

Player::Player(std::string name_val)
  : Player{name_val, 0, 0} {
  cout << "one arg constructor" << endl; //see in debugger for behavior
}

Player::Player(std::string name_val, int health_val, int xp_val)
  : name{name_val}, health{health_val}, xp{xp_val} {
  cout << "Three args constructor" << endl; //see in debugger for behavior
}

int main() {
  Player empty;
  Player frank{"Frank"};
  Player villain{"Villain", 100, 55};

  cout << endl;
  return 0;
}
