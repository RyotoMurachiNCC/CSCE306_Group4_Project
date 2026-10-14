/*CSCE 306: OO Software Development
*  Group 4
*  Contributors: Michael Gergen
*  Start Date: 10/14/2026
*  CurDate: 10/14/2026
*/

#include "pot.h"
#include "player.h"

//constructor
pot::pot(){
    this->amount = 0;
    this->currentChips = 0;
    this->endingChips = 0;
}

int pot::getAmount(){
    return amount;
}
int pot::getCurrentChips(){
    return currentChips;
}
int pot::getEndingChips(){
    return endingChips;
}

void pot::add(int amount){
    this->amount += amount;
}
void pot::payout(Player winner){
    //something is wrong here. need to fix
}