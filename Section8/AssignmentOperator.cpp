#include <iostream>

using namespace std;

int main ()
{
    const double usdPerEur{1.19};

    cout << "The Euro to  Usd converter"<< endl;
    cout << "Enter how much Euro do you have: ";
    
    double euros {0.0};
    double dollars {0.0};
    
    cin >> euros;
    dollars = euros*usdPerEur;

    cout << euros << " euros is equivalent to: " << dollars << " dolars";
    cout << endl;
    cout << "========================================================================="<<endl;

    int counter {10};
    int result {0};

    result = ++counter;
    cout << counter ;
    return 0;
}