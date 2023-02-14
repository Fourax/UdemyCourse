#include <cstdlib>
#include <iostream>
#include <iostream>
#include<fstream>
#include<string>
#include <vector>
using namespace std;

int main()
{
   string array[10]; 
    short loop=0; 
    string line; 
    ifstream myfile ("numbers.txt"); 
    if (myfile.is_open()) 
    {
        while (! myfile.eof() ) 
        {
            getline (myfile,line); 
            array[loop] = line;
            cout << array[loop] << endl; 
            loop++;
        }
        myfile.close(); 
    }
    else cout << "can't open the file"; 
    
   

    for (int i=0; i<9; i++)
    {
        for (int j=0; j<9; j++)
        {
            if (array[j]>array[j+1])
            {
                swap(array[j], array[j+1]);
            }
        }
    }

    for (int i = 0; i<10; i++)
    {
        cout << array[i] << " ";
    }

    system("PAUSE >nul");
    return 0;
    
}