#include<iostream>

using namespace std;

int main()
{
    
    cout << "Welcome back im My Cleaning Service"<<endl;

    int smallRoom;
    cout<<"How many small rooms would you like cleaned: ";
    cin>>smallRoom;

    int largeRooms;
    cout<<"How many large rooms would you like cleaned: ";
    cin>>largeRooms;

    const double pricePerSmallRoom{25.00};
    const double pricePerLargeRoom{35.0};
    const double salesTax{0.06};
    const int estimateExpiry{30};

    cout<<"Estimate for carpet cleaning service"<<endl;
    cout<<"Number of small rooms: "<<smallRoom<<endl;
    cout<<"Number of large rooms: "<<largeRooms<<endl;

    cout<<"Cost:$"<<(pricePerSmallRoom*smallRoom)+(pricePerLargeRoom*largeRooms)*salesTax<<endl;
    
    cout<<"=========================================================="<<endl;
    cout <<"Toal estimate: $"<<((pricePerSmallRoom*smallRoom)+(pricePerLargeRoom*largeRooms))+(((pricePerSmallRoom*smallRoom)+(pricePerLargeRoom*largeRooms))*salesTax)<<endl;
    cout<<"This estimate is valid for "<<estimateExpiry<<" day"<<endl;
    
    return 0;

}