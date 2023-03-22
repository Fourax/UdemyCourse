#include<iostream>
#include<string>
#include<vector>

using namespace std;

void passByValue1(int num);
void passByValue2(string s);
void passByValue3(vector<string> v);
void printVector(vector<string> v);

void passByValue1(int num)
{
    num = 1000;
}

void passByValue2(string s)
{
    s = "Changed";
}

void passByValue3(vector<string> v)
{
    v.clear();//delete all vector elements
}

void printVector(vector<string> v)
{
    for(auto s:v)
    {
        cout << s <<" ";
    }
    cout << endl;
}
int main ()
{
    int num {10};
    int anotherNum{20};

    cout << "num before calling passByValue1: " << num << endl;
    passByValue1(num);
    cout << "num after calling passByValue1: " << num << endl;

    cout << "\nanotherNum before calling passByValue1: " << anotherNum << endl;
    passByValue1(anotherNum);
    cout << "anotherNum after calling passByValue1: " << anotherNum << endl;
    
    string name {"Frank"};
    cout << "\nname before calling passByValue2: " << name << endl;
    passByValue2(name);
    cout << "name after calling passByValue2: " << name << endl;

    vector<string>stooges{"Larry","Moe","Curly"};
    cout <<"\nstooges before calling passByValue3: ";
    printVector(stooges);
    passByValue3(stooges);
    cout <<"stooges after calling passByValue3: ";
    printVector(stooges);
    return 0;
}