// HumanPlayer.h - non-bot player controlled by user input..
/*CSCE 306: OO Software Development
*  Group 4
*  Contributors: Ryoto Murachi
*  Start Date: 10/13/2026
*  CurDate: 10/13/2026
*/
#pragma once
#include "Player.h"

class HumanPlayer : public Player {
public:
    explicit HumanPlayer(const std::string& name);
    Action chooseAction(const StateGame& state) override;
};