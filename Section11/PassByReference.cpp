#include <iostream>
#include<vector>
#include<string>
using namespace std;

void passByRef1(int&num);
void passBYRef2(string&s);
void passByRef3(vector<string>&v);
void printVector(const vector<string>&v);

void passByRef1(int&num)
{
    num = 1000;
}

void passByRef2(string&s)
{
    s= "Changed";
}

void passByRef3(vector<string>&v)
{
   v.clear();//delete all vector elements
}

void printVector(const vector<string>&v)
{
     for(auto s:v)
    {
        cout << s << " ";
    }
    cout << endl;
}
int main ()
{
    int num{10};
    int anotherNum{20};

    cout <<"num before calling pass by ref 1: "<< num << endl;
    passByRef1(num);
    cout << "num after calling pass by ref 1: "<< num << endl;

    cout <<"num before calling pass by ref 1: "<< anotherNum << endl;
    passByRef1(anotherNum);
    cout << "num after calling pass by ref 1: "<< anotherNum << endl;

    string name("Frank");
    cout <<"num before calling pass by ref 2: "<< name << endl;
    passByRef2(name);
    cout << "num after calling pass by ref 2: "<< name << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass by ref 3: ";
    printVector(stooges);
    passByRef3(stooges);
    cout << "stooges after calling pass by ref 3: ";
    printVector(stooges);
    return 0;
}