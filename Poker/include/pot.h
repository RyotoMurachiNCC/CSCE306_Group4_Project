/*CSCE 306: OO Software Development
*  Group 4
*  Contributors: Michael Gergen
*  Start Date: 10/14/2026
*  CurDate: 10/14/2026
*/

#ifndef POT_H
#define POT_H

class pot{
    private:
    int amount;
    int currentChips;
    int endingChips;

    public:
    void payout(Player winner);
    int getAmount();
    void add(int amount);
    int getCurrentChips();
    int getEndingChips();
};

#endif
