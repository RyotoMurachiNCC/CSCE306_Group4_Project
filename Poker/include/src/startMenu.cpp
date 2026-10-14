/*CSCE 306: OO Software Development
*  Group 4
*  Contributors: Michael Gergen
*  Start Date: 10/14/2026
*  CurDate: 10/14/2026
*/
#include "startMenu.h"

#include <iostream>
#include <string>

using namespace std;

//constructor
startMenu::startMenu() {
    this->players=4;
    this->startingChips=1000;
}

void startMenu::setStartingBalance(int balance) {
    this->startingChips = balance;
}
void startMenu::play(){

}
void startMenu::quit(){

}
void startMenu::getPlayers(){

}
int startMenu::setPlayers(int players){
    this->players = players;
}