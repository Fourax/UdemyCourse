#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main ()
{
    vector<string> stooges {"Larry","Moe","Curly"};\

    for(auto str:stooges)
    {
        str = "Funny"; //str skopuje kazdy element wektora
    }
    
    for(auto str:stooges)
    {
        cout << str << endl;
    }
    
    cout <<"\n-----------------------------"<<endl;

    for(auto &str:stooges) // str jest referencjom do kazdego elementu wektora
    {
        str = "Funny";
    }
    
    for(auto const &str:stooges)
    {
        cout << str << endl;
    }
    return 0;
}