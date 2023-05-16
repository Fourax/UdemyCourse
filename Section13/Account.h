#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string>
using namespace std;
//#pragma once
class Account
{
private:
    //attributes
    string name;
    double balance;

public:
    //methods
    //declared inline
    void setBalance(double bal){balance = bal;}
    double getBalance(){return balance;}

    //methods will be declared outside the class declaration
    void setName(string n);
    string getName();

    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif