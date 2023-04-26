#include <iostream>

using namespace std;

int *createArray(size_t size, int intValue = 0)
{
    int *newStorage{nullptr};
    newStorage = new int[size];//dynamiczna alokacja na stercie
    for(size_t i{0}; i < size; ++i)
    {
        *(newStorage + i) = intValue;
    }
    return newStorage;
}

void display (const int *const array, size_t size)
{
    for(size_t i{0}; i<size; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main ()
{
    int *myArray{nullptr};
    size_t size;
    int initValue{};

    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout <<"What value would you like them initialized to? ";
    cin >> initValue;

    myArray = createArray(size, initValue);
    cout <<"\n-----------------------------------------------"<<endl;

    display(myArray,size);
    delete[] myArray;
    return 0;
}