#include <iostream>
using namespace std;

int main ()
{
    const int dolarValue {100};
    const int querterValue {25};
    const int dimeValue {10};
    const int nickelValue {5};

    int changeAmount {};

    cout << "Enter an amount in cents: ";
    cin >> changeAmount;

    int balance{};
    int dollars{};
    int quarters{};
    int dimes{};
    int nickels{};
    int pennies{};

    dollars = changeAmount / dolarValue;
    balance = changeAmount - (dollars*dolarValue);
    quarters = balance / querterValue;
    balance -= quarters * querterValue;
    dimes = balance / dimeValue;
    nickels = balance / nickelValue;
    balance -= nickels * nickelValue;
    pennies = balance;
    
    cout <<"You can provide this change as follows: "<<endl;
    cout <<"dollars: "<<dollars<<endl;
    cout <<"quarters: "<<quarters<<endl;
    cout <<"dimes: "<<dimes<<endl;
    cout <<"nickels: "<<nickels<<endl;
    cout <<"pennies: "<<pennies<<endl;
    
    cout<<"=============================================================="<<endl;
    
    balance = dollars = quarters = dimes = nickels = pennies = 0;
    dollars = changeAmount / dolarValue;
    balance = changeAmount % dolarValue;
    quarters = balance / querterValue;
    balance %= querterValue;
    dimes = balance / dimeValue;
    balance %= dimeValue;
    nickels = balance / nickelValue;
    balance %= nickelValue;
    pennies = balance;

    cout <<"You can provide this change as follows: "<<endl;
    cout <<"dollars: "<<dollars<<endl;
    cout <<"quarters: "<<quarters<<endl;
    cout <<"dimes: "<<dimes<<endl;
    cout <<"nickels: "<<nickels<<endl;
    cout <<"pennies: "<<pennies<<endl;
cout << "========================================================================"<<endl;
    //cout << balance << endl;
    balance -=++ nickels * nickelValue;
    
    unsigned short x {10};
    unsigned short y {8};
    cout << (x^y) << endl;
   // cout << y << endl;
   // cout << balance << endl;
    cout << endl;
    return 0;
}
