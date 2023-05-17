#include <iostream>
#include<string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
//Overloaded Constructors
    Player(std::string nameVal = "None", int healthVal = 0, int xpVal = 0);
};

Player::Player(std::string nameVal, int healthVal, int xpVal):name{nameVal}, health{healthVal}, xp{xpVal}
{
    cout <<"Three-args constructor"<<endl;
}

int main ()
{
    Player empty;
    Player frank{"Frank"};
    Player hero{"Hero",100};
    Player villain {"Villain",100,55};

    return 0;
}