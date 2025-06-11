#include <iostream>
#include <string>

using namespace std;

class Player {
private:
  std::string name;
  int health;
  int xp;

public:
  std::string get_name() { return name; }
  int get_health() { return health; }
  int get_xp() { return xp; }
  Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
  // copy constructor
  Player(const Player &source);
  // destructor
  ~Player() { cout << "Destructor called for: " << name << endl; }
};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
  cout << "Three args constructor" + name << endl;
}

Player::Player(const Player &source)
    : name{source.name}, health{source.health}, xp{source.xp} {
  // we could also delegate
  //: Player{source.name, source.health, source.xp}
  cout << "Copy constructor - made copy of: " << source.name << endl;
}

void display_player(Player p) {
  cout << "Name: " << p.get_name() << endl;
  cout << "Health: " << p.get_health() << endl;
  cout << "XP: " << p.get_xp() << endl;
  // after using the copy 'p', we will be out of scope for 'p' since the
  // function will end thats when the destructor will be called and will delete
  // the copy 'p' not the original object
}

int main() {
  Player empty; // we create an object called empty with initial parameters

  display_player(empty); // we create a copy of 'empty' with the copy
                         // constructor
  // that copy in this case is called 'p' in the display_player function
  // since is a copy of an object, it can access the object methods

  Player frank{"Frank"};
  Player hero{"Hero", 100};
  Player villain{"Villain", 100, 55};

  cout << endl;
  return 0;
}
