#include<iostream>
#include "MyStringIE.h"
using namespace std;

int main()
{
    MystringIE larry {"larry"};
    MystringIE moe {"moe"};
    MystringIE curly;

    cout << "Enter the third stooge's first name";
    cin >> curly;

    cout <<"THe tree stooges are" << larry <<","<< moe << "and " << curly << endl;

    cout <<"\nEnter the three stooges name separate by a space: ";
    cin >> larry >> moe >> curly;

    cout <<"the three stooges are " << larry <<","<< moe <<"and" << curly << endl;
     
    return 0;
}
//MyStringInsertionExtract.cpp
//MyStringIE.h