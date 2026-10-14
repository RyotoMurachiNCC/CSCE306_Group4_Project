/*CSCE 306: OO Software Development
*  Group 4
*  Contributors: Michael Gergen
*  Start Date: 10/14/2026
*  CurDate: 10/14/2026
*/

#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>
using namespace std;

class settings {
    private:
    int players;
    string playerName;
    int aiDifficulty;

    public:
    int setPlayers(int players);
    string setName(string name);
    int setAiDifficulty(int aiDifficulty);
};

#endif