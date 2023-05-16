#include<iostream>
#include<string>

using namespace std;

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

void Account::setName(string n)
{
    name = n;
}

string Account::getName()
{
    return name;
}

bool Account::deposit(double amount)
{
    //if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if(balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Account frank_account;
    frank_account.setName("Frank's account");
    frank_account.setBalance(1000.0);

    if(frank_account.deposit(200.0))
    {
        cout << "Deposit OK" << endl;
    }
    else
    {
        cout << "Deposit Not allowed" << endl;
    }
   
    if(frank_account.withdraw(500.0))
    {
        cout << "Withdrawal OK" << endl;
    }
    else
    {
        cout << "Not sufficient funds" << endl;
    }
    
    if(frank_account.withdraw(1500.0))
    {
        cout << "Withdraw OK" << endl;
    }
    else
    {
        cout <<"Not sufficient funds" << endl;
    }

    return 0;
}