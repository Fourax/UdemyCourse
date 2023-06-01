#include "OverloadingOperator.h"
#include<iostream>
#include<cstring>
using namespace std;
OverloadingOperator::OverloadingOperator():str{nullptr}//no arg consturctor
{
    new char[1];
    *str='\0';
}
OverloadingOperator::OverloadingOperator(const char *s):str{nullptr}//Constructor
{
     if(s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[strlen(s)+1];
        strcpy(str,s);
    }
}
OverloadingOperator::OverloadingOperator(const OverloadingOperator &source):str{nullptr}// Copy constructro
{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
}
OverloadingOperator::OverloadingOperator(OverloadingOperator &&source):str(source.str)//Move constructor
{
    source.str = nullptr;
    cout <<"Move constructor used"<<endl;
}
OverloadingOperator::~OverloadingOperator()//Destructor
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


OverloadingOperator &OverloadingOperator::operator=(OverloadingOperator &&rhs)//Move assignment operator
{
    cout <<"Operator = : in"<<endl;

    if(this==&rhs)
    {
        return *this;
    }
    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    cout <<"Operator = : out"<<endl;
    return *this;
}

bool OverloadingOperator::operator==(const OverloadingOperator &rhs)const//Equality
{
    return (strcmp(str,rhs.str)== 0);
}

OverloadingOperator OverloadingOperator::operator-()const//Make lowercase
{
    char *buff = new char[std::strlen(str)+1];
    strcpy(buff, str);
    for(size_t i=0;i<strlen(buff);i++)
    {
        buff[i] = tolower(buff[i]);
    }
    OverloadingOperator temp{buff};
    delete [] buff;
    return temp;
}
OverloadingOperator OverloadingOperator::operator+(const OverloadingOperator &rhs)const//Concatentate
{
    char *buff = new char[strlen(str)+ strlen(rhs.str) +1];
    strcpy(buff,str);
    strcat(buff, rhs.str);
    OverloadingOperator temp{buff};
    delete [] buff;
    return temp;
}

void OverloadingOperator::display()const//Display method
{
    cout << str <<" : "<<getLenght()<<endl;
}

int OverloadingOperator::getLenght()const//length getter
{
    return strlen(str);//zwraca wartość długości znaków
}

const char *OverloadingOperator::getStr()const
{
    return str;
}