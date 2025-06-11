#include "Player.h"

int Player::num_players{0}; // this is where we initialize the statis

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
  ++num_players;
}

Player::Player(const Player &source)
    : Player(source.name, source.health, source.xp) {}

Player::~Player() {
  --num_players;
}

int Player::get_num_players() { // we dfine the static method here
  return num_players;           // no need to write 'static' keyword again
}
