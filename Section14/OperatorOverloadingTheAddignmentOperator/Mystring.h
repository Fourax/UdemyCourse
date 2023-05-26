#ifndef MYSTRING_H
#define MYSTRING_H



class Mystring
{
private:
    char *str;
public:
    Mystring();//no-args constructor
    Mystring(const char *s);//Overloaded constructor
    Mystring(const Mystring &source);//Copy constructor
    ~Mystring();//Destructor

    Mystring &operator=(const Mystring &rhs); //Copy assignment
    void display()const;

    int getLength()const;//getters
    
    const char *getStr() const;

};

#endif