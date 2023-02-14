#include <iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
  ifstream in("numbers.txt");
  ofstream out("testing.txt");
  if(in.fail()||out.fail())
  {
    cout <<"Error!";
  }
  else
  {
    char c1;
    char c2;
    while(in.get(c1))
    {
        if(c1==';')
        {
            if(in.get(c2))
            {
                if(c2==';')
                {
                    in.ignore(9999,';');
                }
                else
                {
                    out << c1  <<c2;
                }
            }
            else 
            {
                out <<c1;
            }
        }
        else
        {
            out << c1 ;
        }
       
    }


    in.close();
    out.close();
  }




   
   

    return 0;
}