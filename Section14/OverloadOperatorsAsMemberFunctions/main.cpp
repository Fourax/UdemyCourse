#include  <iostream>
#include"Account.h"

using namespace std;

int main()
{
    OverloadingOperator larry{"Larry"};
    OverloadingOperator moe{"Moe"};

    OverloadingOperator stooge = larry;
    larry.display();
    moe.display();

    cout << (larry == moe) << endl;
    cout << (larry == stooge) << endl;

    larry.display();
    OveloadingOperator larry2 = -larry;
    larry2.display();

    OverloadingOperator stooges = larry + "Moe";

    OverloadingOperator twoStooges = moe +" " +"Larry";
    twoStooges.display();

    OverloadingOperator threeStooges = moe + " " + larry + " " + "Curly";
    threeStooges.display();

    return 0;
}