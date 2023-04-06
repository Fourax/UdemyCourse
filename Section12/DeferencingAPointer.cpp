#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main ()
{   
    int score {100};
    int *score_ptr{&score};// wskaźnik do liczby całkowitej (int) co oznacza ze moze przechowywac adres liczby całkowitej, inicjuję to na adres score

    cout << *score_ptr << endl;//100

    *score_ptr = 200;// lewa strona to instrucja przypisania(adres lub lokalizacja) w której przechowujemy rzeczy, 
    //w tym przypadku zmienamy wartość score na 200 za pomocą adresu miejsca przechowywania

    cout << *score_ptr << endl; //200
    cout << score << endl;//200

    cout <<"\n-----------------------------------"<<endl;

    double highTemp{100.7};
    double lowTemp{37.4};
    double *tempPtr(&highTemp); // inicjalizujemy wskaznik tempPtr pod adresem highTemp

    cout <<*tempPtr<<endl;// 100.7
    tempPtr = &lowTemp; // zmieniamy przyisaną lokalizacje wskaznika z hightTemp na lowTemp
    cout <<*tempPtr<<endl; //37.4

    cout <<"\n-------------------------------" << endl;

    string name {"Frank"};
    string *stringPtr(&name);

    cout <<*stringPtr<<endl;
    name ="James"; // zmieniamy zawartos stringa przechowywanego pod tym samym adresem
    cout <<*stringPtr <<endl;

    cout <<"\n----------------------------------"<<endl;

    vector<string>stooges{"Larry","Moe","Curly"};
    vector<string> *vectorPtr{nullptr};

    vectorPtr = &stooges;

    cout << "First stooge: "<<(*vectorPtr).at(0) << endl; // Larry

    cout <<"Stooges: ";
    for(auto stooge: *vectorPtr)
    {
        cout << stooge << " ";
    }
    cout << endl;
    return 0;
}