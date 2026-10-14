/*CSCE 306: OO Software Development
*  Group 4
*  Contributors: Michael Gergen
*  Start Date: 10/14/2026
*  CurDate: 10/14/2026
*/

#include "settings.h"

#include <iostream>
#include <string>

using namespace std;

// Constructor

settings::settings() {
    this->players = 1;
    this->playerName="defaultName";
    this->aiDifficulty=2;
}

int settings::setPlayers(int players) {
    this -> players;
}   

string settings::setName(string name) {
    this->playerName = name;
}

int settings::setAiDifficulty(int aiDifficulty) {
    this->aiDifficulty = aiDifficulty;
}