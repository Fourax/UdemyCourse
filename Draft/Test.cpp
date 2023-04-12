#include <iostream>

using namespace std;
 void test1(int x)
    {

        cout <<"Addres: "<< &x << endl; 
    }
    void test2(int &x)
    {
        x = 102;   
        cout <<"Addres: "<< &x << endl; 
        int *numPtr = &x;
    }

int main () 
{
    
    int num{10};
    cout <<"Value of num is: "<<num << endl;
    cout <<"sizeof of num is: "<<sizeof num <<endl;
    cout <<"Address of num is: "<< &num<<endl;
    test1(num);
    test2(num);
     cout <<"Value of num is: "<<num << endl;
   
    return 0;
}