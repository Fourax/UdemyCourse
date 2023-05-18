#ifndef PLAYER_H
#define PLAYER_H
#include<string>


class Player
{
private:
    static int numPlayers;
    std::string name;
    int health;
    int xp;
public:
    std::string getName(){return name;}
    int getHealth(){return health;}
    int getXp(){return xp;}

    Player(std::string  nameVal = "None", int healtVa = 0, int xpVal =0);
    //Copy constructor
    Player(const Player &source);
    //Destructor
    ~Player();

    static int getNumPlayers();
};

#endif