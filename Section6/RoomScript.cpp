#include <iostream>
#include <string>

using namespace std;

int main()
{
int width;
cout << "Enter the width of the room: ";
cin >> width ; 

int length;
cout << "Enter the length of the room: ";
cin >> length;

cout <<"The area of the room is "<< width * length <<" square feet"<< endl;

return 0;
}