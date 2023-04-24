// adresy składników tablicy [100 - 1000] , [95 - 1004] , [89 - 1008] , [68 - 1012] , [-1 - 1016]
// asocjatywność jest od prawej do lewej. To znaczy ze zwiększa się wskaźnik 
#include <iostream>

using namespace std;

int main()
{
    int score[] {100, 95, 89, 68, -1};
    int *scorePtr{score};

    while (*scorePtr != -1)
    {
        cout << *scorePtr << endl;
        scorePtr ++ ;// wziększamy wskaźnik przez cokolwiek wskazuje, czyli w tym przypadku przesuwamy na koleny obekt z tablicy co oznacza ze przesuwamy o 4 bajty
    }

    cout << "\n-----------------------"<<endl;
    
    scorePtr = score;

    while (*scorePtr != -1)
    {
        cout << *scorePtr++ << endl; // (*scorePtr)++,w tym przypadku mamy dwoch operatorów, więc pierwszą rzeczą którą robimy to sprawdzamy , który ma pierwszeństwo(oba mają ten sam prorytet). W tym przypadku patrzymy na asocjatywność
    }

    cout << "\n----------------------------"<<endl;

    string s1 {"Frank"};// przykładowy adres (1000)
    string s2 {"Frank"}; // przykładowy adres (2000)
    string s3 {"James"}; // przykładowy adres (3000)

    string *p1 {&s1}; // oba obiekty to stringi więc przypisujemy adres s1 do wektora p1
    string *p2 {&s2}; // tak samo jak powyzej przypisujemy adres s2 do wektora p2
    string *p3 {&s1}; // przypisujemy adres s1 do wectora p3

    cout << boolalpha;
    cout << p1 << "==" << p2 << ";" << (p1 == p2) << endl; //false
    cout << p1 << "==" << p3 << ";" << (p1 == p3) << endl; // true

    cout << p1 << "==" << p2 << ";" << (*p1 == *p2) << endl; // true
    cout << p1 << "==" << p3 << ";" << (*p1 == *p3) << endl; // true

    p3 = &s3; // point to James
    cout << *p1 << "==" << "p3" << ": " << (*p1 == *p3) << endl;//false

    cout << "\n---------------------------------------------" << endl;

    char name[] {"Frank"};

    char *charPtr1{nullptr};
    char *charPtr2{nullptr};

    charPtr1 = &name[0];//F
    charPtr2 = &name[3];//n

    cout << "In the string " << name << ", " << *charPtr2 << "is" << (charPtr2 - charPtr1) << "character away from" << *charPtr1 << endl;
    return 0;
}