#ifndef StartMenu_H
#define StartMenu_H

class StartMenu {
    private:
    //variables
    int players;
    int startingChips;
    
    public:

    //methods
    void StartingBalance(int balance);
    void play();
    void quit();
    void getPlayers(int players);
    int setPlayers();
};

#endif