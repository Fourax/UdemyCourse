#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main () {
  ifstream myFile ("numbers.txt");
  ofstream newFile("sorted.txt");
  int myArray [10];
  if (myFile.is_open())
  {
    int index{0};
    int index2{0};
    int temp;
    int pass {0};
    char semicolon; 
    for (int i = 0; i<10;i++)
    {
      myFile >> index >> semicolon ;
      myArray[i] = index;
    }
   for(index = 0; index<10; index++) 
   {
        for(index2 = index+1; index2<10; index2++)
            {
                if(myArray[index2] < myArray[index]) 
                {
                temp = myArray[index];
                myArray[index] = myArray[index2];
                myArray[index2] = temp;
                }
            }
        pass++;
   }
   
for(index = 0; index<10; index++) 
{
   newFile << myArray[index]<<semicolon;
   cout <<myArray[index]<<semicolon;
}
   
   
    myFile.close();
    newFile.close();
  }

  else cout << "Error !"; 

  return 0;
}