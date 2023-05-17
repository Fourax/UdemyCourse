//TheDefaultConstructor przykład bez utworzonego konstruktora
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
};

int main ()
{
    Player frank;// tworzę instancję obiektu franka, nie ma konstruktora więc za kulisami generowany jest domyślny konstruktor bez argumnetów , który nic nie robi ale pozwala c++ na utworzenie tego obiektu
    frank.setName("Frank");
    cout << frank.getName() << endl;
    return 0;
}