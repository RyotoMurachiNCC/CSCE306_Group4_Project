// Player.h -interface class for all players.
/*CSCE 306: OO Software Development
*  Group 4
*  Contributors: Ryoto Murachi
*  Start Date: 10/13/2026
*  CurDate: 10/13/2026
*/
#pragma once
#include <string>
#include <vector>
#include "Types.h"

class Player{
public:
    explicit Player(const std::string& name);
    virtual ~Player() = default;
    virtual Action chooseAction(const StateGame& state) = 0;
    void startingBalance(int chips);
    int bet(int amount);
private:
    int points_;
    std::vector<Card> hand;
    std::string playerName_;
};
