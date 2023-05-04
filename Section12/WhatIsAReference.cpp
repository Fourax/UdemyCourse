#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ()
{
    int num {100};
    int &ref{num};// inicjuje referencje na num więc ref jest aliasem num

    cout << num << endl;//100
    cout << ref << endl;//100

    num = 200;
    cout <<"\n--------------------------------------"<<endl;
    cout << num << endl;//200
    cout << ref << endl;//200

    ref = 300;
    cout <<"\n-----------------------------------------"<<endl;
    cout << num << endl;//300
    cout << ref << endl;//300

    cout <<"\n--------------------------------"<<endl;

    vector <string> stooges {"Larry","Moe","Curly"};

    for(auto str:stooges)
    {
        str = "Funny";  // str zostanioe skopiowane do każdego elementu vectora
    }
    
    for(auto str:stooges)
    {
        cout << str << endl; // wypisze nam elementy vectora
    }
    return 0;
}