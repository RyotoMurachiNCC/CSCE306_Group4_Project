// BotPlayer.h -bot player controlled player.
/*CSCE 306: OO Software Development
*  Group 4
*  Contributors: Ryoto Murachi
*  Start Date: 10/13/2026
*  CurDate: 10/13/2026
*/
#pragma once
#include "Player.h"

class BotPlayer : public Player {
public:
    explicit BotPlayer(const std::string& name);
    Action chooseAction(const StateGame& state) override;
};