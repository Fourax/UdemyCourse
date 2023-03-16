#include <iostream>
#include <iomanip>
#include <vector>
#include <cstring>//for c-style string functions
#include <cctype>//for character-base function
#include <string> //important (c++ strings)
#include <cmath> 
#include <cstdlib> //reguired for rand()
#include <ctime> //reguired for time()
using namespace std;

int main()
{
 /*
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

    char letterg_grade{}; 

    cout <<"Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch(letter_grade)
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
                cout <<"Illegal choce"<<endl;
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



 int numCO{};
    cout << "Enter an integer: ";
    cin >> numCO;

    if(numCO&2 == 0)
    {
        cout << numCO << "is even"<<endl;
    }
    else
    {
        cout << numCO << " is odd"<< endl;
    }

    cout << numCO << "is"<<((numCO %2 == 0)? "even" : "odd");

    int numCO1{}, numCO2{};
    
    cout <<"Enter two integers separated by a space: ";
    cin >> numCO1 >> numCO2;

    if(numCO1 != numCO2)
    {
        cout << "Largest: "<<((numCO1 > numCO2) ? numCO1 : numCO2)<<endl;
        cout << "Smallest: "<<((numCO1 < numCO2) ? numCO1 : numCO2)<<endl;
    }
    else
    {
        cout << "The numbers are the same"<<endl;
    }

cout << "\n==================================Conditional Operator========================================================"<<endl;

    for (int i{1}; i<=10;i++)
    {
        cout << i << endl;
    }

     for (int j{1}; j<=10;j--)
    {
        cout << j << endl;
    }

    for( int a{1},b{5};a<=5;++a,++b)
    {
        cout << a << " + " << b << " = " << (a+b)<<endl;
    }

    for (int i{1}; i<=100; i++)
    {
        cout <<i;
        if(i% 10 ==0)
        {
            cout<<endl;
        }
        else
        {
            cout <<" ";
        }
    }
    
   for (int i{1}; i<=100;i++)
   {
     cout <<  i;
     cout <<((i % 10 == 0) ?"\n":" ");
   }

    vector <int> nums{10,20,30,40,50};

    for (unsigned i{0}; i<nums.size();++i)
    {
        cout << nums[i] << endl;
    }


cout << "\n==================================For Loop========================================================"<<endl;

    int scores[]{10,20,30};

    for (auto score: scores)
    {
        cout << score << endl;
    }

    vector<double>temperatures{87.9,77.9,80.0,72.5};
    double averageTemp{};
    double total {};

    for(auto temp : temperatures)
    {
        total += temp;
    }
    
    if(temperatures.size() != 0)
    {
        averageTemp = total/temperatures.size(); 
    }
    cout << fixed<< setprecision(1); // #include <iomanip>
    cout << "Average temperature is " << averageTemp << endl;


    for (auto val:{1,2,3,4,5})
    {
        cout << val << endl;
    }
   
   for (auto c: "This is a test")
   {
        if(c != ' ')
        {
            cout << c;
        }
   
   }

   for ( auto c: " This is a test")
   {
        if(c == ' ')
        {
            cout <<"\t";
        }
        else
        {

            cout << c;
        }
   }
       
cout << "\n==================================Range-base For Loop========================================================"<<endl;


    int numWI{};
    cout << " Enter a positive integer - start the countdown :";
    cin >>  numWI;

    while(numWI > 0)
    {
        cout << numWI << endl;
        --numWI;
    }
    cout <<"Blastoff"<<endl;

    int numWI{};
    cout << "Enter integer to count up to: ";
    cin >> numWI;

    int i {1};
    while (numWI >=i)
    {
        cout << i << endl;
        i++;
    }


    int number{};

    cout << "Enter an integer less than 100: ";
    cin >> number;

    while(number >= 100)
    {
        cout <<"Enter an integer less than 100: ";
        cin >> number;
    }
cout <<"Thanks"<<endl;


    bool done {false};
    int number {0};

    while(!done)
    {
        cout << "Enter an integer between 1 and 5: ";
        cin >> number;

        if(number <=1 || number >=5)
        {
            cout <<"Out of range, try again"<<endl;
        }
        else
        {
            cout << "Thanks!"<<endl;
            done = true;
        }
    }


cout << "\n==================================While Loop========================================================"<<endl;


    char selection{};
    do
    {

        cout << "\n--------------"<<endl;
        cout << "1.Do this"<<endl;
        cout << "2.Do that"<<endl;
        cout << "3.Do something else"<<endl;
        cout << "Q. Quiet"<<endl;
        cout <<"\nEnter your selection: "<<endl;
        cin >> selection;

        if(selection == '1')
        {
            cout << "You chose 1 - doing this"<<endl;
        }
        else
        {
            if(selection == '2')
            {
                cout << "You chose 2 - doing that"<<endl;
            }
            else
            {
                if(selection == '3')
                {
                    cout << "You chose 3 - doing something else"<<endl;
                }
                else
                {
                    if(selection == 'Q' || selection == 'q')
                    {
                        cout << "Goodbye...";
                    }
                    else
                    {
                        cout <<"Unknown option --- try again"<<endl;
                    }
                }
            }
        }

        
    } 
    while (selection !='q' && selection !='Q');
cout << "\n==================================Do While Loop========================================================"<<endl;

    vector<int> values {1,2,-1,3,-99,7,8,10};

    for(auto val: values)
    {
        if (val == -99)
        {
            break;
        }
        else
        {
            if(val == -1)
            {
                continue;
            }
            else
            {
                cout << val << endl;
            }
        }
        
    }
     !//Infinity Loop               
    //for (;;)
    //{
     //   cout << "This will print forever"<<endl;
    //}

    //while (true)
    //{
      //  cout <<"This will print forever"<<endl;
    //}

    //do
    //{
      //  cout << "This will print forever"<<endl;
    //}while(true);
                    

cout << "\n==================================Continue and Break Statements========================================================"<<endl;

    for (int num1 {1}; num1 <= 10; ++num1)
    {
        for (int num2{1}; num2 <= 10; ++num2)
        {
            cout << num1 << "*"<<num2<<"="<<num1 * num2 << endl;
        }
    }

    int numItem{};

    cout << "How many data items do you have? ";
    cin >> numItem;

    vector<int>data{};
    for(int i {1}; i<=numItem; i++)
    {
        int dataItem{};
        cout <<"Enter data item"<< i << ":";
        cin >> dataItem;
        data.push_back(dataItem);//push_back dodaje nowy item do vectora
    }
    cout << "\nDisplayinh Hisogram"<<endl;
         
         for(auto val:data)
    {
        
        
            for ( int i {1}; i<=val; i++)
                {
                    if(i % 5 == 0)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout <<"-";
                    }
                    
                }
        
       
    }
    
 cout << endl;
cout << "\n==================================Nested Loops========================================================"<<endl;
 cout << endl;
cout << "\n<><><><><><><><><><><><><>^^^^Section 9^^^^<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;

//#include <cctypes>
//function_name(char);
cout << "\n==================================Character Functions========================================================"<<endl;

    char firstName[20] {};
    char lastName [20] {};
    char fullName [50] {};
    char temp [50] {};

    cout << "Please enter you first name: ";
    cin >> firstName;

    cout << "Please enter your last name: ";
    cin >> lastName;
    
    cout << "---------------------------------"<<endl;

    cout <<"Hello, "<< firstName <<"your first name has "<<strlen(firstName)<<" characters"<<endl;
    cout << "and you last name, "<< lastName <<" has "<<strlen(lastName)<< " characters"<<endl;

    strcpy(fullName,firstName);
    strcat(fullName," ");
    strcat(fullName,lastName);

    cout <<"Your full name is"<< fullName << endl;

    cout <<"---------------------------------"<<endl;

    cout <<"Enter your full name: ";
    cin >> fullName;
  
    cout <<"You full name is "<< fullName << endl; 

    cout <<"Enter your full name: ";
    cin.getline(fullName,50);//c string 
    cout <<"Your full name is"<<fullName<<endl;

    cout <<"------------------------------"<<endl;

    strcpy(temp,fullName);

    if(strcpy(temp,fullName)== 0)
    {
        cout << temp <<"and"<<fullName<<" are the same"<<endl;
    }
    else
    {
        cout << temp <<"and"<<fullName<<"are diffrent"<<endl;
    }

    cout << "------------------------------------------------------"<<endl;

    for(size_t i { 0 }; i<strlen(fullName); i++)
    {
        if(isalpha(fullName[i]))
        {
            fullName[i] = toupper(fullName[i]);
        }
        cout <<"your full name is"<<fullName<<endl;
    }
    
    cout <<"-------------------------------"<<endl;

    cout <<"Result of comparing" << temp<<" and"<<fullName<<":"<<strcmp(temp,fullName)<<endl;
    cout<<"Result of comparing"<< fullName<<"and"<<temp<<":"<<strcmp(fullName,temp)<<endl;

   

cout << "\n==================================C-style Strings========================================================"<<endl;

    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};//Apple
    string s6 {s1, 0,3};//App
    string s7 (10,'X');//XXXXXXXXXX

    cout << s0 << endl;//No garbage
    cout << s0.length()<<endl;//empty string
    
    
    cout << "\nInitialization"<<"\n-----------------------------------"<<endl;
    
    cout <<"s1 is initialized to: "<< s1 <<endl;
    cout <<"s2 is initialized to: "<< s2 <<endl;
    cout <<"s3 is initialized to: "<< s3 <<endl;
    cout <<"s4 is initialized to: "<< s4 <<endl;
    cout <<"s5 is initialized to: "<< s5 <<endl;
    cout <<"s6 is initialized to: "<< s6 <<endl;
    cout <<"s7 is initialized to: "<< s7 <<endl;

    cout <<"\nComparison"<<"\n----------------------------------------"<<endl;

    cout << boolalpha;

    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
    cout << s4 << " > " << s5 << ": " << (s4 < s5) << endl;
    cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple")<<endl;

    cout << "\nAssignment"<<"\n---------------------------------------------"<<endl;

    s1 ="Watermelon";
    cout << "s1 is now: " << s1 << endl;

    s2 = s1;
    cout << "s2 is now: " << s2 <<endl;

    s3 = "Frank";
    cout << "s3 is now: " << s3 <<endl;

    s3[0] = 'C'; //Crank
    cout << "s3 change first letter to C" << s3 << endl;
    s3.at(0) = 'P';
    cout <<"s3 change first letter to P: "<< s3 << endl;

    cout << "\n Concatenation"<<"\n-----------------------------------------------------"<<endl;

    s3 ="Watermelon";
    s3 = s5 + " and " + s2 + " juice";// Apple and Watermelon juice

    cout << " s3 is now: "<< s3 << endl; //Apple and Watermelon juice

   // s3 ="nice "+ "cold" + s5 + "juice";// Compiler error

   cout << "For loop"<<"\n---------------------------------"<<endl;

    s1 = "Apple";

    for(size_t i {0}; i<s1.length(); i++)
    {
        cout << s1.at(i); // or s1[i] Apple
    }
    cout <<endl;

    for (char c:s1)
    {
        cout << c;
    }
    cout << endl;

    cout << "Substring"<<"\n------------------------------------"<<endl;

    s1 = "This is a test: ";

    cout <<s1.substr(0,4)<<endl;//stat with 0 and show 4 letter after 0 element
    cout <<s1.substr(5,2)<<endl;// stop with 5 th element and show 2 leters 
    cout << s1.substr(10,4)<<endl;

    cout << "\nErase"<<"\n-------------------------------------------"<<endl;

    s1 = "This is a test";
    s1.erase(0,5);//stop with 0 element and show all after 5 element
    cout <<"s1 is now: "<<s1<<endl;

    cout << "\nGetLine"<<"\n-------------------------------------------"<<endl;

    string fullName{};

    cout <<"Enter your full name: ";
    
    getline(cin,fullName);

    cout <<"Your full name is: "<< fullName << endl;

    cout <<"\nFind"<<"\n------------------------------"<<endl;

    s1 = "The secret word is Boo";
    string word {};

    cout <<"Enter the word to find: ";
    getline(cin,word);
    //cin >> word;

    size_t position = s1.find(word);

    if(position != string::npos)
    {
        cout <<"Found "<< word <<" at position: "<< position <<endl;
    }
    else
    {
        cout <<"Sorry, "<< word << " not found" << endl;
    }
cout << "\n==================================C++ Strings========================================================"<<endl;
  */
 //cppreference.com
 // add liblary cmath
 // add liblary cstdlib
 // add liblary ctime
    double num {};

    cout <<"Enter a number(double)";
    cin >> num;

    cout <<"The sqrt of"<< num <<"is: "<<sqrt(num)<<endl;
    cout <<"The cubed root of"<< num <<"is: "<<cbrt(num)<<endl;

    cout <<"The sine of"<< num <<"is: "<<sin(num)<<endl;
    cout <<"The cosine of"<< num << "is: "<<cos(num)<<endl;

    cout << "The ceil of"<< num <<"is: "<<ceil(num)<<endl;
    cout <<"The floor of"<< num <<"is: "<<floor(num)<<endl;
    cout <<"The round of"<< num <<"is: "<<round(num)<<endl;

    double power{};

    cout <<"\nEnter a power to raise"<< num <<"to: ";
    cin >> power;
    cout << num <<" raised to the"<<"power is: "<<pow(num,power)<<endl;
cout << "\n=======================================Funktions==================================================="<<endl;

    int  randomNumber{};
    size_t count{10};
    int min{1};
    int max{6};

    cout <<"RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));
cout << "\n=======================================^Random Numbers^==================================================="<<endl;
  return 0;
}
