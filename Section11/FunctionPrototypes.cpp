#include<iostream>

using namespace std;
//Function Prototypes
double calcVolumeCylinder(double radius,double height);
double calAreaCircle(double);
void areaCircle();
void volumeCylinder();
int main ()
{

    areaCircle();
    volumeCylinder();
return 0;
}
const double pi{3.14159};
double calAreaCircle(double radius)
{
    return pi * radius *radius;
}
void areaCircle()
{
    double radius {};
    cout <<"\nEnter the radius of the circle: ";
    cin >> radius;

    cout <<"The area of a circle with radius"<<radius<<"is "<<calAreaCircle(radius)<<endl;
}
double calcVolumeCylinder(double radius,double height)
{
   // return pi* radius * radius * height;
    return calAreaCircle(radius) * height;
}

void volumeCylinder()
{
    double radius {};
    double height {};
    cout <<"\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout <<"\nEnter the height of the cylinder: ";
    cin >> height;
    cout <<"THe volume of a cylinder with radius"<< radius << "and height"<<height<<"is: "<< calcVolumeCylinder(radius,height)<<endl;
}