#include <iostream>
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
    int x {10};
    int y {5};
    int resultx{0},resultx2{0},resulty{0},resulty2{0};
    
    resultx = x++;
    resultx2 = ++x;
    resulty = y--;
    resulty2 = --y;
    cout <<"resutl++: "<< resultx << endl;
    cout <<"++resutl: "<< resultx2 << endl;
    cout <<"result--: "<< resulty << endl;
    cout <<"--result: "<< resulty2 ;
cout << "\n=========Increment and Decrement============"<<endl;
   
    y += x;
    cout << y << endl;
    y-=x;
    cout << y << endl;
    x /= y;
    cout << x << endl;\
    x*=y;
    cout << x << endl;
    x%=2;//powrtórzyć
    cout << x << endl;
    x >>= 1;
    cout << x << endl;
    x<<= 1;
    cout << x << endl;
    x &= 2;
    cout << x << endl;
    x ^= 2;
    cout << x << endl;
    x |= 2;
    cout << x ;
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
cout << "\n=============================Relation and Comparison======================="<<endl;
    bool op1,op2,op3;

    op1 = x!=y;
    cout << op1 << endl;
    op2 = x && y > 2;
    cout << op2 << endl;
    op3 = x || y > 2;
    cout << op3 ;
cout <<  "\n======================================Logical===================================="<<endl;


  return 0;
}
