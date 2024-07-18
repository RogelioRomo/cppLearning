#include "Player.h"
#include <iostream>

using namespace std;

void display_active_players() {
  // we use the statis method here to get the integers
  // that represents this static data member
  cout << "Active players: " << Player::get_num_players() << endl;
}

int main() {
  display_active_players(); // 0 active players
  Player hero{"Hero"};      // we create a player object
  display_active_players(); // 1 active player

  {
    Player frank{"Frank"};    // we create another player object
    display_active_players(); // 2 active players
  }
  display_active_players(); // 1 active player (frank went out of scope so
                            // Destructor was called)

  Player *enemy = new Player{"Enemy", 100, 100};
  display_active_players();
  delete enemy;
  display_active_players();

  cout << endl;
  return 0;
}
