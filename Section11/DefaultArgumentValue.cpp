#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double calcCost(double baseCost = 100.0,double taxRate = 0.06, double shipping = 3.50);
void greeting(string name, string prefix = "Mr.",string suffix = "");
double calcCost(double baseCost, double taxRate,double shipping)
{
    return baseCost +=(baseCost * taxRate) + shipping;
}
void greeting(string name, string prefix ,string suffix )
{
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}
int main()
{
    double cost{0};
    cost = calcCost(100.0,0.08,4.25);

    cout << fixed << setprecision(2);
    cout <<"Cost is: " << cost << endl;

    cost = calcCost(100.0,0.08);
    cout <<"Cost is: "<<cost<<endl;

    cost = calcCost(200.0);
    cout << "Cost is: "<< cost << endl;

    cost = calcCost();
    cout << "Cost is: " << cost << endl;
    cout << endl;

    greeting("Glenn Jones","Dr.","M.D." );
    return 0;
}