#include<iostream>
#include<vector>
using namespace std;

void displayMenu();
char getSelection();

void handleDisplay(const vector<int> &v);
void handleAdd(vector<int> &v);
void handleMean(const vector<int> &v);
void handleSmallest(const vector<int> &v);
void handleLargest(const vector<int> &v);
void handleFind(const vector<int> &v);
void handleQuit();
void handleUnknown();

void displayList(const vector<int> &v);
double calculateMean(const vector<int> &v);
int getSmallest(const vector<int> &v);
int getLargest(const vector<int> &v);
bool find(const vector<int> &v, int target);

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
            case 'P':
                handleDisplay(numbers);
            break;
            
            case 'A':
                handleAdd(numbers);
            break;
            
            case 'M':
                handleMean(numbers);
            break;
            
            case 'S':
                handleSmallest(numbers);
            break;
            
            case 'L':
                handleLargest(numbers);
            break;

             case 'F':
                handleFind(numbers);
            break;
            
            case 'Q':
                handleQuit();
            break;
            default:
                handleUnknown();
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
    cout << "F - Find a number" << endl;
    cout <<"Q - Quit" << endl;
    cout <<"\nEnter your choice: ";

}

char getSelection()
{
    char selection;
    cin >> selection;
    return toupper (selection);
}

void handleDisplay(const vector <int> &v)
{
    if(v.size()==0)
    {
        cout <<"[] - the list is empty"<<endl;
    }
    displayList(v);
}

void displayList(const vector<int> &v)
{
    cout <<"[";
    for(auto num:v)
    {
        cout << num <<" ";
    }
    cout << "]" << endl;
}
void handleAdd(vector<int>&v)
{
    int numToAdd{};
    cout << "Enter an integer to add to the list: ";
    cin >> numToAdd;
    v.push_back(numToAdd);
    cout << numToAdd << "added"<<endl;
} 
void handleMean(const vector<int> &v)
{
    if(v.size()==0)
    {
        cout << "Unable to calculate mean - list is empty"<<endl;
    }
    else
    {
        cout <<"The mean is " << calculateMean(v) << endl;
    }
}
double calculateMean(const vector<int> &v)
{
    int total{};
    for(auto num:v)
    {
        total += num;
    }
    return static_cast<double>(total)/v.size();
}

void handleFind(const vector<int> &v)
{
    int target{};
    cout << "Enter the number to find: ";
    cin >> target;
    if(find(v,target))
    {
        cout << target << "was found"<<endl;
    }
    else
    {
        cout << target <<"was not found"<<endl;
    }
}
void handleSmallest(const vector<int> &v)
{

    cout <<"The smallest number in array is: " << getSmallest(v) << endl;

}
void handleLargest(const vector<int> &v)
{

    cout <<"The largest number in array is: " << getLargest(v) << endl;

}
int getLargest(const vector <int> &v)
{
    int largest = v.at(0);
    for(auto num:v)
    {
        if(num > largest)
        {
            largest = num;
        }
    }
    return largest;
}
int getSmallest(const vector <int> &v)
{
    int smallest = v.at(0);
    for(auto num:v)
    {
        if(num < smallest)
        {
            smallest = num;
        }
    }
    return smallest;
}
bool find(const vector<int> &v, int target)
{
    for (auto num:v)
    {
        if(num == target)
        {
            return true;
        }
    }
    return false;
}
void handleQuit()
{
    cout << "Good bay" << endl;
}
void handleUnknown()
{
    cout <<"Unknown selection - try again"<< endl;
}

