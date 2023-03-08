#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    vector<int> numbers{};
    char selection{};

    do
    {
        cout <<"\nP - Print numbers"<<endl;
        cout <<"A - Add a number"<<endl;
        cout <<"M - Display mean of the numbers"<<endl;
        cout <<"S - Display the smallest number"<<endl;
        cout <<"L - Display the largest number"<<endl;
        cout <<"Q - Quit"<<endl;
        cout <<"\nEnter your choice: ";
        cin >> selection;

        if(selection == 'P' || selection == 'p')
        {
            if(numbers.size() == 0)
            {
                cout <<"[] - the list is empty"<<endl;
            }
            else
            {
                cout << "[";
                for(auto num:numbers)
                {
                    cout <<num << " ";
                }
                cout << "]";
            }
        }
        else
        {
            if(selection == 'A' || selection == 'a')
            {
                int numToAdd{};
                cout << "Enter an integer to add to the list: ";
                cin >> numToAdd;
                numbers.push_back(numToAdd);
                cout << numToAdd << " added"<<endl;
            }
            else
            {
                if(selection == 'M' || selection == 'm')
                {
                    if(numbers.size() == 0)
                    {
                        cout <<"Unable to calculate mean - no data"<<endl;
                    }
                    else
                    {
                        int total{};
                        for(auto num : numbers)
                        {
                            total += num;
                            cout << "The mean is: "<< static_cast <double> (total)/numbers.size() << endl;
                        }
                    }
                }
                else
                {
                    if(selection == 'S' || selection == 's')//zapytac o pełną tablice xd
                    {
                        if(numbers.size() == 0)
                        {
                            cout << "Unable to determine the smallest - list is empty"<< endl;
                        }
                        else
                        {
                            int smallest = numbers.at(0);
                            for(auto num:numbers)
                            {
                                if(num < smallest)
                                {
                                    smallest = num;
                                    cout <<"The smallest number is: "<< smallest << endl;
                                }
                            }
                        }
                    }
                    else
                    {
                        if(selection == 'L' || selection == 'l')
                        {
                            if(numbers.size() ==0 )
                            {
                                cout << " Unable to determine latgest - list is empty"<<endl;
                            }
                            else
                            {
                                int largest = numbers.at(0);
                                for(auto num:numbers)
                                {
                                    if(num > largest)
                                    {
                                        largest = num;
                                        cout << "The largest number is: "<< largest << endl;
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (selection == 'Q' || selection == 'q')
                            {
                                cout << "Goodbye" << endl;
                            }
                            else
                            {
                               cout << "Unknow selection, please try again"<<endl; 
                            }
                        }
                    }
                }
            }
        }
    
    } while (selection != 'q' && selection != 'Q');
    

    return 0;
}