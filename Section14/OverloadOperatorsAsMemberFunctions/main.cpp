#include  <iostream>
#include"OverloadingOperator.h"

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
    OverloadingOperator larry2 = -larry;
    larry2.display();

    OverloadingOperator stooges = larry + "Moe";

    OverloadingOperator twoStooges = moe +" " +"Larry";
    twoStooges.display();

    OverloadingOperator threeStooges = moe + " " + larry + " " + "Curly";
    threeStooges.display();
 cout <<"start" << endl;
    OverloadingOperator dupa("dupa");
    dupa = dupa + "jest blada";
    dupa.display();

    cout << dupa.getStr() << endl;
    OverloadingOperator dupa1 = dupa + "brudna";
    cout << "koniec" << endl;
    cout << dupa.getStr() << endl;
    cout << dupa1.getStr() << endl;
    return 0;
}