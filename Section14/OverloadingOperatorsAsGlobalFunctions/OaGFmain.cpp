#include  <iostream>
#include "OaGF.h"

using namespace std;

int main()
{
    OaGF larry{"Larry"};
    larry.display();

    larry = -larry;
    larry.display();
    
    cout << boolalpha << endl;

    OaGF moe{"Moe"};
    OaGF stooge = larry;

    cout <<(larry == moe) << endl;
    cout <<(larry == stooge) << endl;

    OaGF stooges = "Larry" + moe;
    stooges.display();

    OaGF twoStooges = moe + " " + "Larry";
    twoStooges.display();
    OaGF threeStooges = moe + " " + larry + " "+ "Carly";
    threeStooges.display();
    return 0;
}