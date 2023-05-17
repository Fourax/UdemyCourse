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
    std::string getName(){return name;}//metoda pobierająca
    int getHealth(){return health;}
    int getXp(){return xp;}
    Player(std::string nameVal = "None", int healthVal = 0, int xpVal = 0);
    
    //Copy constructor
    Player(const Player &source);
    
    //Destructor
    ~Player(){cout <<"Destructor called for: " << name << endl;}
};

Player::Player(std::string nameVal, int healthVal, int xpVal):name{nameVal}, health{healthVal}, xp{xpVal}
{
    cout <<"Three-args constructor"<< name <<endl;
}

Player::Player(const Player &source):Player{source.name,source.health,source.xp}
//name(source.name), health(source.health), xp{source.xp}
{
    cout <<"Copy constructor - made copy of: " << source.name << endl;
}

void displayPlayer(Player p)
{
    cout << "Name: "<<p.getName()<<endl;
    cout << "Health" << p.getHealth()<<endl;
    cout << "Xp" << p.getXp() << endl;
}
int main ()
{
    Player empty{"XXXXXX",100,50};

    Player myNewObject{empty};

    displayPlayer(empty);

    Player frank{"Frank"};
    Player hero{"Hero",100};
    Player villain {"Villain",100,55};

    return 0;
}