#include <iostream>
#include"Player.h"

using namespace std;

void displayActivePlayers()
{
    cout <<"Active Players: "<< Player::getNumPlayers()<<endl;
}
int main()
{
    displayActivePlayers();
    Player hero{"Hero"};
    displayActivePlayers();


    {
        Player frank {"Frank"};
        displayActivePlayers();
    }
    displayActivePlayers();

    Player *enemy = new Player{"Enemy",100,100};
    displayActivePlayers();
    delete enemy;
    displayActivePlayers();
    return 0;
}