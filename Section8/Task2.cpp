#include <iostream>
using namespace std;

int arithmetic_operators(int number) {
    int originalNumber {number};
    
    number = number * 2;
    
    
    number = number + 9;
    
   
    number = number - 3;
    
    
    number = number / 2;
    
   
    number = number - originalNumber;
    
   
    number = number % 3;
    
   number = ((number * 2 + 9 - 3) / 2 - number) % 3;
    
    return number;
}