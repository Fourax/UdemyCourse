//Copy operator którego przełądowaliśmy działa z odwołaniami do l-wartości
#include<iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main ()
{
    Mystring a {"Hello"};//overloaded constructor
    Mystring b;//no-arg constructor
    
    b=a;//copy assignment

    b="This is a test";//b.operator=(a), b.operator=("The test");

    Mystring empty;//no-arg constructor
    Mystring larry{"Larry"};//overloaded constructor
    Mystring stooge{larry};//copy constructor
    Mystring stooges;//no-arg constructor

    empty = stooge;//copy assignment operator

    empty.display();//Larry:5
    larry.display();//Larry:5
    stooge.display();//Larry:5
    empty.display();//Larry:5

    stooges = "Larry, Moe, Curly";
    stooges.display();

    vector<Mystring> stoogesVec;
    stoogesVec.push_back("Larry");
    stoogesVec.push_back("Moe");
    stoogesVec.push_back("Curly");

    cout <<"===== Loop 1 =============================="<<endl;

    for(const Mystring &s: stoogesVec)
    {
        s.display();//Larry,Moe,Curly
    }
    
    cout <<"===== Loop 2 =============================="<<endl;

    for(Mystring &s:stoogesVec)
    {
        s="Changed"; //copy no assignment
    }
    
    cout <<"===== Loop 3 =============================="<<endl;

    for(const Mystring &s:stoogesVec)
    {
        s.display();//Changed,Changed,Changed
    }

    return 0;
}