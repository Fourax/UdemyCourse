#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player // nazwy klass powinny byc zapisywane duzymi literami, srednik na koncu
{
    //attributes
    string name{"Player"};
    int health{100};
    int xp{3};
//////////////////////////////////////
    //methods
    void talk (string);
    bool is_dead();
    
};
class Account
{
    //attributes;
    string name{"Account"};// dzieki c++11 można zainicjować własnie tutaj,
    double balance{0.0};

    //methods
    bool deposit(double);
    bool withdraw(double);
};
int main ()
{
    Account frank_account;
    Account jim_account;
    Player frank;
    Player hero;

    Player players[]{frank, hero};

    vector<Player> player_vec{frank};
    player_vec.push_back(hero);
    Player *enemy {nullptr};//enemy jest wskaxnikiem do Player(pamietamy ze czytamy od prawej do lewej)
    enemy = new Player;

    delete enemy;
    return 0;
}