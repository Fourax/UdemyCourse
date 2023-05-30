#include <cstring>
#include <string>
#include<iostream>
using namespace std;

class MyString
{
private:
    char *str;
public:
    MyString();
    MyString(const char *s);
    MyString(const MyString &source);
    ~MyString();

    void display()const;
    int getLength()const;
    const char *getStr() const;
};
MyString::MyString():str{nullptr}//no arg constructor
{
    str = new char[1];
    *str = '\0'; 
}

MyString::MyString(const char *s):str{nullptr}//overloaded constructor
{
    if(s==nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[strlen(s) + 1];
        strcpy(str,s);
    }
}
MyString::MyString(const MyString &source):str{nullptr}
{
    str = new char[strlen(source.str)+ 1];
    strcpy(str,source.str);
}

MyString::~MyString()
{
    delete [] str;
}

void MyString::display()const
{
    cout << str <<" ; " << getLength() << endl;
    
}
int MyString::getLength() const 
{
    return strlen(str);
}

const char *MyString::getStr()const
{
    return str;
}



int main()
{   
    MyString empty; //no arg constructor
    MyString larry{"Larry"};//overloaded constructor
    MyString stooge{larry};//copy constructor

    empty.display();
    larry.display();
    stooge.display();


    return 0;
}

