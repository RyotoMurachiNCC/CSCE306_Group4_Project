// BotPlayer.cpp - implementation for the BotPlayer class.
/*CSCE 306: OO Software Development
*  Group 4
*  Contributors: Ryoto Murachi
*  Start Date: 10/13/2026
*  CurDate: 10/13/2026
*/
#include "BotPlayer.h"

BotPlayer::BotPlayer(const std::string& name) : Player(name) {}

Action BotPlayer::chooseAction(const StateGame& state) {
    // decide an Action using rules
    (void)state; 
    return Action::Fold;
}
