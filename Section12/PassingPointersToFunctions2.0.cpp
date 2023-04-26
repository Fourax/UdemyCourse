#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;// przypisjemy wartosz 100 do temp
    *a = *b;//  przypisujemy wartość *b do *a czyli *a = 200
    *b = temp;// przypisujemy wartość temp = 100 do *b czyli *b = 100
}

int main ()
{
    int x {100}, y{200};// przykładowe adersy (x[1000], y[2000])

    cout << "\nx: " << x << endl;// 100
    cout << "y: " << y << endl; // 200

    swap(&x,&y);// przypisujemy adresy zmiennych , swap(1000,2000)

    cout << "\nx: " << x << endl; // 200
    cout << "y: " << y << endl;// 100
    return 0;
}