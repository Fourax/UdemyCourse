#include<iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main ()
{
    Mystring a {"Hello"};//overloaded constructor
    Mystring b;//no-arg constructor
    
    b=a;//copy assignment

    b="This is a test";//b.operator=(a), b.operator=("The test");
}