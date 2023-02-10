#include<iostream>

using namespace std;

int main()
{
    cout <<"Welcome to my cleaning service"<< endl;
    cout <<"How many rooms would you like cleaned? ";

    int numberOfRooms;
    cin >> numberOfRooms;

    const double pricePerRoom{30.0};
    const double salesTax{0.06};
    const int estimateExpiry{30};

    cout << "Estimate of carpet cleaning service"<<endl;
    cout << "Number of rooms: "<< numberOfRooms << endl;
    cout <<"Price per room:$"<<pricePerRoom<<endl;
    cout<<"Cost:$"<<pricePerRoom *numberOfRooms << endl;
    cout <<"Tax:$"<<pricePerRoom*numberOfRooms*salesTax<<endl;
    cout << "============================================"<<endl;
    cout<< "Total estimate:$"<<(pricePerRoom*numberOfRooms)+(pricePerRoom*numberOfRooms*salesTax)<<endl;
    cout<<"This estimate is valid for "<<estimateExpiry<<"days"<<endl;

    return 0;
}