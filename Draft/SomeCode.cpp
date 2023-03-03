#include <iostream>
#include <iomanip>
using namespace std;
 
int partition(int arr[], int start, int end)
{
 
    int pivot = arr[start];
 
    int count = 0;
    for (int i = start + 1; i <= end; i++) 
    {
        if (arr[i] <= pivot)
        count++;
    }
 
   
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
 
    
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) 
    {
 
        while (arr[i] <= pivot) 
        {
            i++;
        }
 
        while (arr[j] > pivot) 
        {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) 
        {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}
 
void quickSort(int arr[], int start, int end)
{
 
   
    if (start >= end)
        return;
 
   
    int p = partition(arr, start, end);
 
   
    quickSort(arr, start, p - 1);
 
   
    quickSort(arr, p + 1, end);
}
 
int main()
{
 
    int arr[] = { 9, 3, 4, 2, 1, 8 };
    int n = 6;
 
    quickSort(arr, 0, n - 1);
 
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
 







cout << "\n==========================================================^ QuickSort ^====================================================="<< endl;
   
    int resultx{0},resultx2{0},resulty{0},resulty2{0};
    
    resultx = resultx++;
    resultx2 = ++resultx2;
    resulty = resulty--;
    resulty2 = --resulty2;
    cout <<"resutl++: "<< resultx << endl;
    cout <<"++resutl: "<< resultx2 << endl;
    cout <<"result--: "<< resulty << endl;
    cout <<"--result: "<< resulty2 ;
cout << "\n=========Increment and Decrement============"<<endl;
   
    int x {10};
    int y {5};
    int a {2};
    int b {8};
   
    y += x;
    cout << y << endl;
    y-=x;
    cout << y << endl;
    x /= y;
    cout << x << endl;\
    x*=y;
    cout << x << endl;
    b%=a;
    cout << b << endl;
    x >>= 1;
    cout << x << endl;
    x<<= 1;
    cout << x << endl;
    x &= 2;
    cout << x << endl;
    x ^= 2;//powrtórzyć
    cout << x << endl;
    x |= 2;
    cout << x << hex ;
cout << "\n ========================Assignment================================"<<endl;

    cout << boolalpha;
    bool equalTo, notEqualTo,lessThan,greaterThan,lessThanOrEgualTo,greaterThenOrEqualTO,threeWay;
    
    equalTo = x == y;
    cout << equalTo <<endl ;
    notEqualTo = x != y;
    cout << notEqualTo <<endl;
    lessThan = x < y;
    cout << lessThan <<endl;
    greaterThan = x > y;
    cout << greaterThan << endl;
    lessThanOrEgualTo = x <= y;
    cout << lessThanOrEgualTo << endl;
    greaterThenOrEqualTO = x >= y;
    cout << greaterThenOrEqualTO;
    //threeWay = x<=>y;
cout << "\n=============================^Relation and Comparison^======================="<<endl;
    bool op1,op2,op3;

    op1 = x!=y;
    cout << op1 << endl;
    op2 = x && y > 2;
    cout << op2 << endl;
    op3 = x || y > 2;
    cout << op3 ;
cout <<  "\n======================================^Logical^===================================="<<endl;
    int num {};
    const int min{10};
    const int max {100};

    cout << "Enter  a number between " << min << " and"<< max << endl;
    cin >> num;
    
    if ( num >= min)
    {
        cout << "\n If statement 1"<<endl;
       
        cout << num << " is greater than or equal to"<< min <<endl;

        int diff ( num - min);
        cout << num << "is" << diff << "greater than "<< min << endl;
    }


    if (num <= max)
    {
        cout << "\n If statement 2"<<endl;
        
        cout << num << "is less than or equel to"<< max << endl;

        int diff  {max -num};
        
        cout << num <<"is "<< diff << "less than" << max << endl; 
    }

    if (num >= min && num <=max)
    {
        cout << "\n If statement 3"<<endl;

        cout << num << "is in range"<<endl;
        cout << " This means statements 1 and 2  must also display !"<< endl;

    }

    if(num == min || num == max)
    {
        cout << "\n If statement 4"<<endl;

        cout << num << "is right on a boundry"<< endl;
        cout << " This mean all 4 statements display"<< endl;
    }
cout << "\n================================If Statements=========================================================="<<endl;

     int numIES {};
     const int target {10};

     cout << "Enter a number and i will compare it to "<<endl;
     cout << numIES << "is greater than or equal to"<< target ;
     cin >> numIES;

     if (numIES >= target)
     {
        cout << "\n============"<<endl;
        cout << numIES << "is less than"<<target<<endl;

        int diff{numIES- target};

        cout << numIES<< "is" << diff << "less than" << target << endl;
         
     }
cout << "\n================================If - Else Statements=========================================================="<<endl;

    int score {};
    cout << "Enter your score on the exam (0-100): ";
    cin >> score;

    char letterGrade{};

    if(score >= 0 && score <= 100)
    {
        if(score > 90)
        {
            letterGrade = 'A';
        }
        else
        {
            if(score > 80)
            {
                letterGrade = 'B';
            }
            else
            {
                if(score > 70)
                {
                    letterGrade = 'C';
                }
                else
                {
                    if(score > 60)
                    {
                        letterGrade = 'D';
                    }
                    else
                    {
                        letterGrade = 'F';
                        
                        cout << "Your grade is: "<< letterGrade << endl;
                        if(letterGrade == 'F')
                        {
                            cout << "Sorry, you must repeat the class"<<endl;
                        }
                        else
                        {
                            cout <<"Congrats!"<<endl;
                        }
                    }
                }
            }
        }
    }
    else
    {
        cout << "Sorry " << num <<" is not in range"<<endl;
    }

cout << "\n -------------------Shopping example------------------------------------"<<endl;

    int lenght{},width{},height{};
    double baseCost{2.50};
    const int tier1Threshold{100};
    const int tier2Threshold{500};
    int maxDimensionLenght{10};
    double tier1Surcharge{0.10};
    double tier2Surchcharge{0.25};
    int packageVolume{};

    cout << "Welcome to the package cost calculator"<<endl;
    cout << "Enter lenght,width and height of the package separated by space: ";
    cin >> lenght >> width >> height;

    if(lenght > maxDimensionLenght || width > maxDimensionLenght || height > maxDimensionLenght)
    {
        cout << "Sorry, package rejected - dimension exceeded"<< endl;
    }
    else
    {
        double packageCost{};
        packageVolume = lenght * width * height;
        packageCost = baseCost;
        if(packageVolume > tier2Threshold)
        {
            packageCost += packageCost * tier2Surchcharge;
            cout << " adding tier 2 surcharge"<< endl;
        }
        else
        {
            if(packageVolume > tier1Threshold)
            {
                packageCost += packageCost * tier1Surcharge;
                cout << "adding tier 1 surcharge"<<endl;
            }
        }
        cout << fixed << setprecision(2);//print dollars nicely
        cout << "The volume of your package is: " << packageVolume << endl;
        cout <<"Your package will cost $" << packageCost << "to ship" << endl;
    }


cout << "\n==================================Nested If Satements========================================================"<<endl;

    char letter_grade{}; // trzeba uzyc srednika zapytac czemu 

    cout <<"Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch(letterGrade)
    {
        case 'a':
        case 'A':
        
        cout << "You need a 90 or above, study hard !";
        
        break;

        case 'b':
        case 'B':
        
        cout << "You need 80 -89 for a B, go study!"<<endl;
        
        break;
        
        case 'c':
        case 'C':

        cout << "You need 70-79 for an average grade";
        
        break;

        case 'd':
        case 'D':
        cout << " Hmm,you should strive for a better grade.All you need is 60-69"<<endl;

        break;
        
        case 'f':
        case 'F':
       {
        char confirm{};
        cout << " Are you sure (Y/N)";
        cin >> confirm;
        if(confirm == 'y' || confirm == 'Y')
        {
             cout << "Ok, I guess you didnt study..."<<endl;
        }
        else
        {
            if (confirm == 'n' || confirm == 'N')
            {
                cout << "Good - go study!"<<endl;
            }
            else
            {
                cout <<"Illegal chice"<<endl;
            }

        }
            break;
       }

        

        default:
        cout << "Sorry, not a valid grade"<< endl;
    }

    cout << "\n Switch with enumeration"<<endl;

    enum Direction
    {
        left,right,up,down
    };
    
    Direction heading {left};

    switch(heading)
    {
        case left:
        
        cout << "Going left"<<endl;
        
        break;

        case right:

        cout << "Going  right"<<endl;

        break;

        default:
        cout <<"OK"<< endl;

    }


cout << "\n==================================Switch Satements========================================================"<<endl;
  return 0;
}
