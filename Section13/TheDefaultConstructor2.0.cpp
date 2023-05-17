
#include<iostream>
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
    std::string getName()
    {
        return name;
    }
  
  
//TheDefaultConstructor przykład z utworzeniem własnego konstruktora
    Player()// to jest nasz inicjator (też to domyśnly inicjator)
    {
        name = "None";
        health = 100;
        xp = 3;
    }
    
   Player(std::string nameVal, int healthVal, int xpVal)
   {
        name = nameVal;
        health = healthVal;
        xp = xpVal;
   }
};

int main ()
{
    Player hero;
    //Player frank;// ta linia potrzeban jest w przypadkuu gdy nie mamy konstruktora albo jak konstruktor nie ma argumentów
    Player frank{"Frank", 100, 13};// kiedy ta linia zostanie wykonanan, to zoastanie wywołany konstróktor ( ten ktory utworzyłem) 
    frank.setName("Frank");
    cout << frank.getName() << endl;
    return 0;
}