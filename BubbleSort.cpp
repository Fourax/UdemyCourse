#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
 
void bubbleSort(int tab[], int n)
{
   {
        for (int j=n-1; j>=1; j--)
        {
            if (tab[j]<tab[j-1])
            {
                int bufor;
                bufor= tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
        }
    }
}
    int main()
{
    ifstream file("numbers.txt");    

    while (!file.eof())
    {
        int numbers;
        file >> numbers;
        bubbleSort(numbers);
        cerr << numbers << endl;
    }

    return 0;
}