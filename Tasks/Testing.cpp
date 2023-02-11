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
                    out << c1  <<c2<<endl;
                }
            }
            else 
            {
                out <<c1<<endl;
            }
        }
        else
        {
            out << c1 <<endl;
        }
       
    }

    in.close();
    out.close();
  }




   
    /* int count {0};
    int sum {0};
    int num;*/
   

   /* ifstream filein("numbers.txt");


if (!filein) {
        std::cerr << "Could not open the file - '"<< std::endl;
        return -1;
    }

    
    int N;
    filein >> N;
    std::cout << "reading " << N << " integers: " << std::endl;

    int* data = new int[N];
    for(int i = 0; i < N; i++){
        filein >> data[i];
        std::cout << data[i] << std::endl;
    }
    delete[] data;



   // if(filein.is_open())
   // {
   //     filein.ignore(";",' ');

        
        
        
        /*
         do
        {
         X filein >> num;
            if(!filein.fail())
            {
                count ++;
                sum += num;
            }
        }while(filein.fail());
        filein.close();

        cout << "Count " << count << endl;
        cout << "Sum "<< sum << endl;
        cout << "Num "<<num<<endl;
        
    }
    else
    {
        cout << "Could not open file!"<<endl;
    }
*/

    return 0;
}