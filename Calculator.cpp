#include <iostream>
using namespace std;

int main () 
{
 char op;
 int num1, num2;

 cout << "enter operator: +, -, *, /: ";
 cin >> op;

 cout << "Enter two operands: ";
 cin >> num1 >> num2;
 
 switch(op)
 {
    case '+' : 
    cout << num1 << "+" << num2 << '=' << num1 + num2;
    break;
    case '-':
    cout << num1 << "-" << num2 << '=' << num1 - num2;
    break;
    case '*':
    cout << num1 << "*" << num2 << '=' << num1 * num2;
    break;
    case '/':
    cout << num1 << "/" << num2 << '=' << num1 / num2;
    break;

    default:
    cout << "Error!";
    break;
 }
 
 return 0;
}