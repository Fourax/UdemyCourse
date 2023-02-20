#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main () {
  string line;
  ifstream myFile ("numbers.txt");
  ofstream newFile("sorted.txt");
  int myArray [10];
  if (myFile.is_open())
  {
    int index = 0;
    while (! myFile.eof() )
    {
      getline (myFile,line);
    myArray[index++] << line;
    //  cout << line << endl;
    
    }
    myFile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
