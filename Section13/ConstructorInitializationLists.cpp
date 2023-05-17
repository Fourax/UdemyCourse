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

Player::Player(): name{"None"}, health{0}, xp{0} // to jest ostateczna refaktoryzacja
{
    //name = "None";
  //  health = 0; // nie potrzebujemy 
  //  xp = 0;
}

Player::Player(std::string nameVal): name{nameVal}, health{0}, xp{0}
{
    
}

Player::Player(std::string nameVal, int healthVal, int xpVal): name{nameVal}, health{healthVal}, xp{xpVal}
{
   
}

int main ()
{
    Player empty;
    Player frank{"Frank"};
    Player villain{"Villain",100,55};

    return 0;
}