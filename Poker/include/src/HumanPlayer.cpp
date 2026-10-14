// HumanPlayer.cpp - implementation for the HumanPlayer class.
/*CSCE 306: OO Software Development
*  Group 4
*  Contributors: Ryoto Murachi
*  Start Date: 10/13/2026
*  CurDate: 10/13/2026
*/

#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(const std::string& name) : Player(name) {}

Action HumanPlayer::chooseAction(const StateGame& state) {
    // show the state, read input, return the selected Action
    (void)state; 
    return Action::Fold;
} 