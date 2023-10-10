#include<iostream>
#include"SectionChallange.h"

using namespace std;

int main ()
{
    cout << boolalpha << endl;
    ChallangeString a {"bartek"};
    ChallangeString b {"bartek"};
    cout << (a==b) << endl;
    cout << (a!=b) << endl;

    b = "george";
    cout << (a==b) << endl;
    cout << (a!=b) << endl;
    cout << (a<b) << endl;
    cout << (a>b) << endl;

   ChallangeString k1{"BARTEK"};
   k1 = -k1;
   cout << k1 << endl;
   
   k1 = k1 + "****";
   cout << k1 << endl;
   
   k1 += "----";
    cout << k1 << endl;

    ChallangeString k2{"12345"};
    k1 = k2 *3;
    cout << k1 << endl;

    ChallangeString k3("abcde");
    k3* = 5;
    cout << k3 << endl;

    ChallangeString repeatString;

    int repeatTimes;
    cout <<"Enter a string to repeat: " << endl;
    cin >> repeatString;

    cout << "How many times would you like it repeated?: "<<endl;
    cin >> repeatTimes;

    repeatStrings *= repeatTimes;
    cout << "The resulting string is:" << repeatingString << endl;

    cout <,(reoeatString *12) << endl;

    repeatString = "RepeatMe";
    cout <<(repeatString + repeatString + repeatString) << endl;

    repeatString += (repeatingString *3);
    cout << repeatString << endl;

    repeatString = "RepeatMe";
    repeatString += (repeatString + repeatString + repeatString);

    ChallangeString k = "Bartek";
    ++k;
    cout << k << endl;

    k=-k;
    cout << k << endl;

    ChallangeString result;
    result = ++k;
    cout << k << endl;
    cout << result << endl;

    k = "Bartek"
    k++;
    cout << k << endl;
}