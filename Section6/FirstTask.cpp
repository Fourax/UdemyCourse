#include <iostream>
#include <string>

using namespace std;

void employee_profile() 
{
    
    string name;
    int age ;
    double hourly_wage {23.50};
    
    cin >> name;
    cin >> age;
    
    cout << name << " " << age << " " << hourly_wage;
}