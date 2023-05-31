#ifndef OVERLOADINGOPERATOR_H
#define OVERLOADINGOPERATOR_H

using namespace std;
#pragma once

class OverloadingOperator
{
private:
    char *str;
public:
    OverloadingOperator();
    OverloadingOperator(const char *s);
    OverloadingOperator(const OverloadingOperator &source);
    OverloadingOperator(OverloadingOperator &&source);
    ~OverloadingOperator();

    OverloadingOperator &operator=(const OverloadingOperator &rhs);
    OverloadingOperator &operator=(OverloadingOperator &&rhs);

    OverloadingOperator operator-()const;
    OverloadingOperator operator+(const OverloadingOperator &rhs)const;
    bool operator==(const OverloadingOperator &rhs)const;

    void display() const;

    int getLenght() const;
    const char *getStr() const;
};

#endif