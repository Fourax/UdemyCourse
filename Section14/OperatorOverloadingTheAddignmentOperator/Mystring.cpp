#include "Mystring.h"
#include<iostream>
#include <cstring>
using namespace std;
Mystring::Mystring():str{nullptr}
{
    str = new char[1];
    *str ='\0';
}
Mystring::Mystring(const char *s):str{nullptr}
{
    if(s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[std::strlen(s)+1];
        strcpy(str,s);
    }
}
Mystring::Mystring(const Mystring &source):str{nullptr}//Copy constructor
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

Mystring::~Mystring()//Deconstructor
{
    delete[] str;
}

void Mystring::display()const//Display method
{
    std::cout << str << " : " << getLength() << std::endl;
}

Mystring &Mystring::operator=(const Mystring &rhs)//Copy assignment
{
    std::cout<< "Copy assignment" << std::endl;
    if (this == &rhs)//this to wskaźnik do bieżacego obiektu, a wskaźnik zawiera adres. Więc jeśli jest to adres po prawej strony to wszystko co chcę zrobic to zwrocic to
    {
        return *this;
    }
    delete [] this -> str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
} 

int Mystring::getLength()const //getters
{
    return strlen(str);
}

const char *Mystring::getStr()const
{
    return str;
}
