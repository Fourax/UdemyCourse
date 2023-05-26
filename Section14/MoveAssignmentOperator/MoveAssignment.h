#ifndef MOVEASSIGNMENT_H
#define MOVEASSIGNMENT_H

#pragma once

class MoveAssignment
{
private:
    char *str;
public:
    MoveAssignment();//No-arg constructor
    MoveAssignment (const char *s);//Overloaded constructor
    MoveAssignment(const MoveAssignment &source);//Copy constructor
    MoveAssignment(MoveAssignment &&source);//Move constructor
    ~MoveAssignment();//Destructor

    MoveAssignment &operator=(const MoveAssignment &rhs);//Copy assignment
    MoveAssignment &operator=(MoveAssignment &&rhs);//Move assignment
    void display()const;

    int getLength()const;//getter
    const char *getStr() const;

};

#endif