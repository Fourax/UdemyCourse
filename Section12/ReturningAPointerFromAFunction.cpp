// sterta jest inna częścią pamięci niż stos
// jak w przyładzie chcemy przydzielić 10 liczb na stercie, pierwsza liczba całkowita [at(0)] ma przykładowy adres 5000, który jest zwracany i przypisywany do newStorage i to jest nasz wskaźnik
// Mamy wskaźnik na stosie, który wkazuje przechowyne informacje na stercie
// musimy uważać żeby nie stracic tego wskźnika bo jesli się tak zdązy bedziemy mieli wyciek pamięci
#include <iostream>

using namespace std;

int *createArray(size_t size, int intValue = 0)// 3 lokalne zmienne [size, initValue, *newStorage]
{
    int *newStorage{nullptr};
    newStorage = new int[size];//dynamiczna alokacja na stercie, w przykładzie alkokujemy dynakmicznie 10 liczb na stercie
    for(size_t i{0}; i < size; ++i)// uzywając pętli for inicjalizujemy każdy ellement w tej tablicy do wszysktkiego co zostało podane w initValue, w przykładzie to liczba 2 wszędzie
    {
        *(newStorage + i) = intValue;// tutaj uzywamy notacji przesunięcia wskaźnika, w tym przykładzie wskawaimy 2 we wszystkich 10 miejscach, pointer offset notation
    }
    return newStorage;// zwracamy wartość 5000 i przypusjemy go do myArray
}

void display (const int *const array, size_t size)// array = 5000, size = 10
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

    myArray = createArray(size, initValue);// przykład {10,2}
    cout <<"\n-----------------------------------------------"<<endl;

    display(myArray,size);// myArray 5000 , size 10
    delete[] myArray;//usuwamy zawartość sterty i przygotowujemy ją do ponownego użycia
    return 0;
}