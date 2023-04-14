// int arrayName[] {1,2,3,4,5};
//int *pointerName {arrayName};
// Subscript Notation arrayName[index] , pointerName[index]
//Offset Notation *(arrayName + index) , *(pointerName + index)
// TOo jest ważne pownieważ kiedy alokujemy dynamicznie talblice na stercie, musimy umiec je prawodłowo prowadzic uzywac wyswietlac itp
#include <iostream>

using namespace std;

int main ()
{
    int scores[] {100,95,89};// przykładowe adresy częsci tablicy 100(1000) , 95(1004) , 89(1008)

    cout <<"Value of scores: " << scores << endl;//przykładowy adress scores (1000)                                                                

    int *scorePtr{scores}; 
    
    cout <<"Value of scorePtr: " << scorePtr << endl;//przykładowy adress scores (1000)

    cout <<"\nArray subscript notation--------------------------"<< endl;
    cout << scores[0] << endl;// 1000 + 0 = 1000
    cout << scores[1] << endl;// 1000 + 1 = 1004
    cout << scores[2] << endl;// 1000 + 2 = 1008
    
    cout <<"\nPointer subscript notation-------------------------"<<endl;
    cout << scorePtr[0] << endl; // 1000 + 0 = 1000
    cout << scorePtr[1] << endl; // 1000 + 1 = 1004
    cout << scorePtr[2] << endl; // 1000 + 2 = 1008

    cout << "\nPointer offset notation--------------------------------"<<endl;
    cout << *scorePtr << endl; // 1000
    cout<< *(scorePtr +1) << endl; //  (scorePtr + 1) = (1000 + 4) = 1004
    cout << *(scorePtr +2) << endl; // (scorePtr + 2) = (1000 + 8) = 1008

    cout <<"\nArray offset notatio------------------------------------"<<endl;
    cout << *scores << endl; // 1000
    cout << *(scores +1) << endl;  //  (scorePtr + 1) = (1000 + 4) = 1004
    cout << *(scores +2)<< endl;    // (scorePtr + 2) = (1000 + 8) = 1008

    return 0;
}