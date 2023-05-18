#include<iostream>
#include <string>
using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;
public:
    std::string getName() const
    {
        return name;
    }
    void setName(std::string nameVal)
    {
        name = nameVal;
    }
    //Overloaded Constructors
    Player();
    Player(std::string nameVal);
    Player(std::string nameVal, int healtVal, int xpVal);
};

Player::Player():Player{"None",0,0}
{

}
Player::Player(std::string nameVal):Player{nameVal,0,0}
{

}

Player::Player(std::string nameVal,int healthVal, int xpVal):name{nameVal},health{healthVal},xp{xpVal}
{

}

void displayPlayerName(const Player &p)
{
cout <<p.getName()<<endl;
}
int main()
{
    const Player villain{"Villain", 100, 55};

    Player hero{"Hero",100,15};
    return 0;
}