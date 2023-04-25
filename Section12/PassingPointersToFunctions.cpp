#include <iostream>

using namespace std;
void doubleData(int *intPtr)
{
    *intPtr *= 2;
}

int main ()
{
    int value {10};
    int *intPtr{nullptr};

    cout <<"Value: " << value << endl;
    doubleData(&value);
    cout << "Value: " << value << endl;

    cout << "-------------------------------------"<<endl;
    intPtr = &value;
    doubleData(intPtr);
    cout <<"Value: " << value << endl;
    return 0;
}