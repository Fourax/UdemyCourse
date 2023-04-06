#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{   
    int num{10};
    cout <<"Value of num is: "<<num << endl;
    cout <<"sizeof of num is: "<<sizeof num <<endl; // 4 bites
    cout <<"Address of num is: "<< &num<<endl;// &(ampersand) , print 1000, pokazije adress num

    int *p; // tutaj deklarujemy wskaznik [deklarujemy ze p jest wskaznikiem do liczby całkowitej]
    cout <<"\nValue of p is: "<< p << endl; //garbage
    cout <<"Address of p is: "<< &p <<endl;// &(ampersand) , addres p(czyli lokalizacje w jakiej jest przechowywany) , 2000
    cout <<"sizeof of p is: "<< sizeof p <<endl; // rozmiar ma p czyli pokazuje jak duzy jest i ile miejsca potrzebuje do reprezentowania wskaźnika na moim komputerze.

    p = nullptr;
    cout << "\nValue of p is: " << p << endl;

    int *p1 {nullptr};
    double *p2{nullptr};
    unsigned long long *p3 {nullptr};

    vector <string> *p4{nullptr};
    string *p5{nullptr};

    cout <<"\nsizeof p1 is: " << sizeof p1 << endl;
    cout <<"sizeof p2 is: " << sizeof p2 <<endl;
    cout <<"sizeof p3 is: "<< sizeof p3 << endl;
    cout <<"sizeof p4 is: " << sizeof p4 << endl;
    cout <<"size of p5 is: "<<sizeof p5 <<endl;

    int score{10};
    double high_temp{100.7};

    int *score_ptr{nullptr};//wskaźnik wyniku, jest wyzerowany wiec wskazuje nigdzie
    
    score_ptr = &score;//Ta linijka miowi ze wskaźnik wynitku jest równy adresowi partytury, Inicjuję ten wskaźnik gdzie wskazać teraz

    cout << "Value of score is: "<<score << endl;//10
    cout <<"Address of score is: "<<&score<<endl;// score address
    cout << "Value of score_ptr is: "<<score_ptr<<endl;//score address

   // score_ptr = &high_temp; //Compiler error, Nie można przekonwertować skaźnika z inta na double
    cout << endl;
    return 0;
}