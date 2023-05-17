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
    void setName(std::string nameVal)
    {
        name = nameVal;
    }

    Player()// przeciażony konstruktor który nie ma informacji o inicjalizacji
    {
        cout <<"No arg constructor called" << endl;
    }
    Player(std::string name)
    {
        cout <<"String arg constructor called"<<endl;
    }
    Player(std::string name, int heal, int xp)
    {
        cout <<"Three args constructor called"<<endl;
    }
    ~Player()// tylda na koncu mowiąca o tym ze to destructor, destruktory są wywoływane automatycznie przez c++, 
    {
        // destruktor zostanie wywołany automatycznie, gdy lokalny obiekt wyjdzie poza zasięg lub gdy usuniemy wksźnik do obiektu
        //gdy obiekt jest niszczony i jest to swietne miejsce do zwolnienia pamięci, zamkniętych plików i zwolnienia wszelkich innych zasobów, można okleślić tylko jeden destruktor na klase i ten destruktor nie ma typu zwaracanego ani parametrów
        cout <<"Destructor called for" << name << endl;
    }
};
int main()
{
    {
        Player slayer;
        slayer.setName("Slayer");
    }

    {
        Player frank;
        frank.setName("Frank");
        
        Player hero("Hero");
        hero.setName("Hero");
        
        Player villain("Villain", 100, 12);
        villain.setName("Villain");
    }

    Player *enemy = new Player;
    enemy -> setName("Enemy");

    Player *levelBoss = new Player("Level Boss", 1000,300);
    levelBoss -> setName("Level Boss");

    delete enemy;
    delete levelBoss;
    return 0;
}