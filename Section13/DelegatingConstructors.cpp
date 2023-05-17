#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    //Overloaded Constructors
    Player();
    Player(std::string nameVal);
    Player(std::string nameVal, int healthVal, int xpVal);
};

Player::Player():Player{"None",0,0}
//:name{"None"}, health{0}, xp(0)
{
    cout << "No-args constructor" << endl;
}
Player::Player(std::string nameVal):Player{nameVal,0,0}
// name{nameVal}, health{0}, xp{0}
{
    cout <<"One-arg constructor" << endl;
}
Player::Player(std::string nameVal, int healthVal, int xpVal): name{nameVal}, health{healthVal}, xp{xpVal}//zapytac dlaczego wszytko przegodzi przez to 

{
    cout <<"Tree-args constructor" << endl;
} 

int main ()
{
    Player empty;
    Player frank{"Frank"};
    Player villain{"Villain", 100, 55};
    return 0;
}