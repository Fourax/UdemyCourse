#include <iostream>
#include <cstring>
#include "MyStringIE.h"

MystringIE::MystringIE():str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

MystringIE::MystringIE(const char *s):str{nullptr}
{
    if(s==nullptr)
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

MystringIE::MystringIE(const MystringIE &source):str{nullptr}
{
    str = new char[strlen(source.str)+1];
    strcpy(str, source.str);
    std::cout << "Copy construct used" << std::endl;
}

MystringIE::MystringIE(MystringIE &&source):str(source.str)
{
    source.str = nullptr;
    std::cout <<"Move construct used" << std::endl;
}

MystringIE::~MystringIE()
{
    delete [] str;
}

MystringIE &MystringIE::operator=(const MystringIE &rhs)
{
    std:: cout <<"Using copy assignment" << std::endl;

    if (this == &rhs)
    {
        return *this;
    }

    delete [] str;
    str = new char[strlen(rhs.str)+1];
    strcpy(str, rhs.str);
    return *this;
}

MystringIE &MystringIE::operator=(MystringIE &&rhs)
{
    std::cout<<"Using move assignment" << std::endl;

    if(this == &rhs)
    {
        return *this;
    }

    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

void MystringIE::display()const
{
    std::cout << str <<":" << get_lenght()<<std::endl;
}

int MystringIE::get_lenght() const
{
    return strlen(str);
}

const char *MystringIE::get_str() const
{
    return str;
}

std::ostream &operator << (std::ostream &os, const MystringIE &rhs)
{
    os << rhs.str;
    return os;
}

std::istream &operator >> (std::istream &in, MystringIE &rhs)
{
    char *buff = new char[1000];
    in >> buff;
    rhs = MystringIE(buff);
    delete [] buff;
    return in;
}