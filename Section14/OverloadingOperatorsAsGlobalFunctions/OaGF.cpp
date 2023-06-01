#include "OaGF.h"
#include<iostream>
#include<cstring>
using namespace std;
OaGF::OaGF()
{

}

OaGF::~OaGF()
{

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

bool operator