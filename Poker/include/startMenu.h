/*CSCE 306: OO Software Development
*  Group 4
*  Contributors: Michael Gergen
*  Start Date: 10/14/2026
*  CurDate: 10/14/2026
*/

#ifndef STARTMENU_H
#define STARTMENU_H

class startMenu {
    private:
    //variables
    int players;
    int startingChips;
    
    public:

    //methods
    void setStartingBalance(int balance);
    void play();
    void quit();
    void getPlayers();
    int setPlayers(int players);
};

#endif