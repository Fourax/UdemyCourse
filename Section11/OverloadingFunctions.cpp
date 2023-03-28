#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(int);
void print(double);
void print(string);
void print(string,string);
void print(vector<string>);

void print(int num)
    {
        cout << "Printing int: "<< num << endl;
    }

void print(double num)
    {
        cout << "Print double: "<< num << endl;
    }    

void print (string s)
    {
        cout << "Printing string: " << s << endl;
    }

void print(string s,string t)
    {
        cout << "Printing 2 strings: " << s << "and" << t << endl;
    }

void print (vector<string> v)
    {
        cout << "Printing vector of strings: ";
        for(auto s:v)
        {
            cout << s + " ";
        }
        cout << endl;
    }
int main ()
{
    print(100);
    print('A');//character is always promoted to int should print 65 ASCII ('A')

    print(123.5);
    print(123.3F); //Float is promoted to double

    print("C-style strings"); // C-style string is converted to a C++ string

    string s ("C++ string");
    print(s);

    print("C-style string", s); //First argument is converted to a c++ string

    vector<string> three_stooges{"Larry", "Moe" , "Curly"};
    print(three_stooges);
    return 0;
}