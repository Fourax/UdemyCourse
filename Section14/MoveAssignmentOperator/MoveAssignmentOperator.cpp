//Operator ruchu działa z odwołaniami do wartosci r
#include<iostream>
#include<vector>
#include"MoveAssignment.h"

using namespace std;

int main()
{
    MoveAssignment a{"Hello"};
    a= MoveAssignment{"Hola"};
    a="Bonjour";

    MoveAssignment empty;
    MoveAssignment larry{"Larry"};
    MoveAssignment stooge{larry};
    MoveAssignment stooges;

    empty = stooge;

    empty ="Funny";

    empty.display();
    larry.display();
    stooge.display();
    empty.display();

    vector<MoveAssignment> stoogesVec;
    stoogesVec.push_back("Larry");
    stoogesVec.push_back("Moe");
    stoogesVec.push_back("Curly");

    cout <<"===== Loop 1 =============================="<<endl;

    for(const MoveAssignment &s: stoogesVec)
    {
        s.display();//Larry,Moe,Curly
    }
    
    cout <<"===== Loop 2 =============================="<<endl;

    for(MoveAssignment &s:stoogesVec)
    {
        s="Changed"; //copy no assignment
    }
    
    cout <<"===== Loop 3 =============================="<<endl;

    for(const MoveAssignment &s:stoogesVec)
    {
        s.display();//Changed,Changed,Changed
    }
    
    return 0; 
}
