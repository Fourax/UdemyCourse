#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> numbers;
    char selection{};

    do
    {
        displayMenu();
        selection = getSelection();
        switch(selection)
        {

        }
    } while (selection !='Q');
    cout << endl;
    return 0;
}
void displayMenu()
{
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout <<"M - Display mean of the numbers" << endl;
    cout <<"S - Display the smallest number" << endl;
    cout <<"L - Display the largest number" << endl;
    cout <<"Q - Quit" << endl;
    cout <<"\nEnter your choice: ";

}