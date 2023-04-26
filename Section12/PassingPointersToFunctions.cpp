// * - to jest operator odniesienia
#include <iostream>

using namespace std;
void doubleData(int *intPtr)// funkcja oczekuje wskaźnika do liczby całkowitej i podwaja cokolwiek wskazuje
{
    *intPtr *= 2;
}

int main ()
{
    int value {10};// przykładowy adress 1000
    int *intPtr{nullptr};//przykładowy adress 2000

    cout <<"Value: " << value << endl;// 10
    doubleData(&value);//uzywamy adresu value, doubleData(1000), &value = adres value ,  *intPtr = *intPtr *2 = 10 *2= 20
    cout << "Value: " << value << endl;// 20

    cout << "-------------------------------------"<<endl;
    intPtr = &value;// ustawiamy intPtr na adres value, 1000
    doubleData(intPtr);// rzeczywisty wskaźnik, doubleData(1000),  *intPtr = *intPtr *2 = 20 *2= 40
    cout <<"Value: " << value << endl;//40
    return 0;
}