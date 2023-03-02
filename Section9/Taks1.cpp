#include <iostream>
using namespace std;

void can_you_drive(int age) 
{
    
    const int drivingAge{16};
    
    if (age >= drivingAge)
    {
        cout << "Yes - you can drive!";
    }
        
}