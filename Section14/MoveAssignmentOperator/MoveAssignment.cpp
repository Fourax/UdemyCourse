#include "MoveAssignment.h"
#include<iostream>
#include<cstring>
using namespace std;

MoveAssignment::MoveAssignment():str{nullptr}//no-arg constructor
{
   str = new char[1];
   *str='\0';
}

MoveAssignment::MoveAssignment(const char*s):str{nullptr}//Overloaded constructor
{
    if(s==nullptr)
    {
        str = new char[1];
        *str ='\0';
    }
    else
    {
        str = new char[strlen(s)+1];
        strcpy(str,s);
    }
}

MoveAssignment::MoveAssignment(const MoveAssignment &source):str{nullptr}//Copy constructor
{
    str = new char[strlen(source.str)+1];
    strcpy(str,source.str);
    cout << "Copy constructor used" << endl;
}

MoveAssignment::MoveAssignment(MoveAssignment &&source):str(source.str)//Move constructor
{
    source.str = nullptr;
    cout <<"Move constructor used"<<endl;
}

MoveAssignment::~MoveAssignment()//Destructor
{
    if(str==nullptr)
    {
        cout <<"Calling destructor for MoveAssignment : nullptr"<<endl;;
    }
    else
    {
        cout <<"Calling destructor for MoveAssignment: "<< str << endl;
    }
    delete [] str;
}

MoveAssignment &MoveAssignment::operator=(const MoveAssignment &rhs)//Copy assignment
{
    cout << "Using copy assignment" << endl;
    if(this == &rhs)
    {
        return *this;
    }
    delete [] str;
    str = new char[strlen(rhs.str)+1];
    strcpy(str,rhs.str);
    return *this;
}

MoveAssignment &MoveAssignment::operator =(MoveAssignment &&rhs)
{
    cout <<"Using move assignment" << endl;
    if(this == &rhs)
    {
        return *this;
    }
    delete [] str;
    str = rhs.str;
    return *this;
}


void MoveAssignment::display()const
{
    cout << str <<";" << getLength() << endl;
}

int MoveAssignment::getLength()const
{
    return strlen(str);
}

const char *MoveAssignment::getStr() const
{
    return str;
}
