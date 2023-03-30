#include<iostream>

using namespace std;

void localExample();
void globalExample();
void staticLocalExample();

int num {300};

void globalExample()
{
    cout << "\nGLobal num is: " << num <<" in globalExample - start"<<endl;
    num *=2;
    cout <<"Global num is: "<<num << " in globalExample - end"<<endl;
}

void localExample(int x)
{
    int num{1000};//local to localExample
    cout << "\nLocal num is: " << num << " in localExample - start"<<endl;
    num = x;
    cout <<"Local num is: "<< num <<" in localExample - end"<<endl;
    //num1 in main is not within scope - so it cant be used here.
}

void staticLocalExample()
{
    static int num{5000}; // local to staticLocalExample static - retains it value between calls 
    cout <<"\nLocal static num is: " << num << " in staticLocalExample - start" << endl;
    num += 1000;
    cout <<"Local static num is: " << num << " in staticLocalExample - end" << endl; 
}
int main ()
{
    int num {100};//Local to main
    int num1 {500};//Local to main
    
    cout <<"Local num is: "<<num <<" in main"<<endl;

    {//creates anew level of scope
        int num {200};//local of scope
        cout << "Local num is: "<<num << " in inner block in main"<<endl;
        cout <<"Inner block in main can see out - num1 is: "<< num1 << endl;
    }

    cout <<"Local num is: "<< num <<" in main"<<endl;

    localExample(10);
    localExample(20);
    
    globalExample();
    globalExample();

    staticLocalExample();
    staticLocalExample();
    staticLocalExample();

    cout << endl;
    return 0;
}