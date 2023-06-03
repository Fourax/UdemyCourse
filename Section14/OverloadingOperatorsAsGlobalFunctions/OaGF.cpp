#include "OaGF.h"
#include<iostream>
#include<cstring>
#include<cctype>
#include<cstdio>
using namespace std;
OaGF::OaGF():str{nullptr}
{
    new char[1];
    *str='\0';
}

OaGF::OaGF(const char *s):str{nullptr}
{
    if(s== nullptr)
    {
        str = new char[1];
        *str='\0';
    }
    else
    {
        str = new char[strlen(s)+1];
        strcpy(str,s);
    }
}

OaGF::OaGF(const OaGF &source):str{nullptr}//Copy constructor
{   
     str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
}
OaGF::OaGF(OaGF &&source):str{source.str}//Move constructor
{
     source.str = nullptr;
    cout <<"Move constructor used"<<endl;
}
OaGF::~OaGF()//Destructor
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
OaGF &OaGF::operator=(const OaGF &rhs)//Copy assignment
{
    cout<< "Copy assignment" << std::endl;
    if (this == &rhs)
    {
        return *this;
    }
    delete [] this -> str;
    str = new char[strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
} 

void OaGF::display()const
{
    cout << str << ":" << getLenght() << endl;
}

int OaGF::getLenght() const
{
    return strlen(str);
}

const char *OaGF::getStr()const
{
    return str;
}

bool operator ==(const OaGF &lhs, const OaGF &rhs)
{
    return(strcmp(lhs.str , rhs.str)== 0);
}

OaGF operator-(const OaGF &obj)//Make lowercase
{
        char *buff = new char[strlen(obj.str)+1];
        strcpy(buff,obj.str);
        for(size_t i=0; i<strlen(buff); i++)
        {
            buff[i] = tolower(buff[i]);
        }
        OaGF temp{buff};
        delete [] buff;
        return temp;

}
OaGF operator+(const OaGF &lhs,const OaGF &rhs)//Concatenation
{
    char *buff = new char[strlen(lhs.str)+ strlen(rhs.str)+1];
    strcpy(buff,lhs.str);
    strcat(buff,rhs.str);

    OaGF temp{buff};
    delete[] buff;
    return temp;
}