#include <iostream>
#include <string>

using namespace std;

class Player {
private:
  std::string name;
  int health;
  int xp;

public:
  // overloaded constructors
  Player();
  Player(std::string name_val);
  Player(std::string name_val, int health_val, int xp_val);
};

// not initialized, just assignments
// Player::Player() {
//   name = "None"; //name was already initialized to "", and then we change it
//   to "None"
//                  //therefore it is not a real initialization
//   health = 0;
//   xp = 0;
// }
//
// Player::Player(std::string name_val) {
//   name = name_val;
//   health = 0;
//   xp = 0;
// }
//
// Player::Player(std::String name_val, int health_val, int xp_val) {
//   name = name_val;
//   health = health_val;
//   xp = xp_val;
// }
//
// initialization lists, a better way
Player::Player()
    : name{"None"}, health{0},
      xp{0} { // this order doesnt matter in order to initialize, the one that
              // matters is the one declare in the class private attributes
}

Player::Player(std::string name_val) : name{name_val}, health{0}, xp{0} {}

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {}

int main() {
  Player empty;
  Player frank{"Frank"};
  Player villain{"Villain", 100, 55};

  cout << endl;
  return 0;
}
