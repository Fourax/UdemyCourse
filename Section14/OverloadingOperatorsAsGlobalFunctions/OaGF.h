#ifndef OAGF_H
#define OAGF_H

#pragma once
using namespace std;
class OaGF
{
    friend bool operator==(const OaGF &lhs, const OaGF &rhs);
    friend OaGF operator-(const OaGF &obj);
    friend OaGF operator+(const OaGF &lhs, const OaGF &rhs);
private:
    char *str;//pointer to a char[] that hold a C-style string
public:
    OaGF();
    OaGF(const char *s);
    OaGF(const OaGF &source);
    OaGF(OaGF &&source);
    ~OaGF();

    OaGF &operator=(const OaGF &rhs);
   // OaGF &operator=(OaGF &&rhs);

    void display() const;

    int getLenght() const;
    const char *getStr() const;
};

#endif