#include <iostream>
#include <string>

using namespace std;

class Player {
private:
  std::string name;
  int health;
  int xp;

public:
  void set_name(std::string name_val) { name = name_val; }
  // overloaded constructors
  Player() { cout << "Nor args constructor called" << endl; }
  Player(std::string name) { cout << "String arg constructor called" << endl; }
  Player(std::string name, int health, int xp) {
    cout << "Three args constructor called" << endl;
  }
  ~Player() { cout << "Destructor called for " << name << endl; }
};

int main() {
  // this shows how scope influence how a destructure works it will delete the
  // object once is no longer used, Turn on debugger to see it in action
  {
    Player slayer;
    slayer.set_name("Slayer");
  }

  // in the next the destructor will delete the object in the reverse order that
  // they were created
  {
    Player frank;
    frank.set_name("Frank");
    Player hero("Hero");
    hero.set_name("Hero");
    Player villain("Villain", 100, 12);
    villain.set_name("Villain");
  }

  Player *enemy = new Player;
  enemy->set_name("Enemy");

  Player *level_boss = new Player("Level boss", 1000, 300);
  level_boss->set_name("Level boss");

  delete enemy;
  delete level_boss;

  cout << endl;
  return 0;
}
