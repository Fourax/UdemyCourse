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
    return 0;
}