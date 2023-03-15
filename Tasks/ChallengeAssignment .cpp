#include <iostream>
#include <string>
#include<algorithm>
 using namespace std;

 int main()
{
  string signs {};
  int position {0};
  cout << "Enter sings to build pyramid from them: ";
  getline (cin, signs);
  reverse(signs.begin(), signs.end());
  size_t numOfSings = signs.length() ;
  char lastElement = signs.back();
  for (auto x:signs)
  {
   
      size_t singSpace = numOfSings - position;
    
     while(singSpace > 0)
     {
      cout << " ";
      --singSpace;
     }

    for(size_t j {0}; j < position; j++)
    {
      cout << signs.at(j);
    }

    cout << x;
    
    for(auto j{position - 1}; j >= 0; j--)
    {
      auto y = static_cast<size_t>(j);
      cout<< signs.at(y);
    }
    cout << endl;
    ++position;
  }


return 0;
}