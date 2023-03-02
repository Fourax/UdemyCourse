#include <iostream>
using namespace std;

void can_you_drive(int age, bool has_car) 
{
    
      const int drivingAge {16};
    if (age >= drivingAge) 
    {
        if (has_car) 
        {
            cout << "Yes - you can drive!";
        } 
        else 
        {
            cout << "Sorry, you need to buy a car before you can drive!";
        }
        
    } 
    else 
    {
        cout << "Sorry, come back in " << drivingAge - age << " years and be sure you own a car when you come back.";
    }
    
    
}