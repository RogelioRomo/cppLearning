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
  std::string get_name() { return name; }
  // Player() {//no args constructor
  //   name = "None";
  //   health = 100;
  //   xp = 3;
  // }
  Player(
      std::string name_val, int health_val,
      int xp_val) { // constructor with args defined, will cause compiler Error
    // since default constructor doesnt exists
    name = name_val;
    health = health_val;
    xp = xp_val;
  }
};

int main() {
  // Player frank; //cant call default constructor with no args
  Player frank{"Frank", 10,
               13}; // need args to use the defined constructor with 3 args
  frank.set_name("Frank");
  cout << frank.get_name() << endl;
  cout << endl;
  return 0;
}
