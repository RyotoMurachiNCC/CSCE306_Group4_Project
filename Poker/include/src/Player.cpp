// Player.cpp - implementation for the base Player class.
/*CSCE 306: OO Software Development
*  Group 4
*  Contributors: Ryoto Murachi
*  Start Date: 10/13/2026
*  CurDate: 10/13/2026
*/
#include "Player.h"

Player::Player(const std::string& name) : playerName_(name), points_(0) {}

void Player::startingBalance(int chips) {
    // set points_ to chips
    (void)chips; 
}

int Player::bet(int amount) {
    // subtract from points_ and return the amount bet
    (void)amount; 
    return 0; 
}