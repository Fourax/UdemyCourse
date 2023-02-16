#include<iostream>
#include<fstream>
#include<string>
#include <cmath>
using namespace std; 
 
const int sz = 10; // set sz to max size of the array 
int arr[sz]; 
 
int main() 
{ 
    freopen("numbers.txt","r", stdin);  
    int index = 0, num; 
     
    /// scan till end of File 
     
    while(scanf("%d",&num) == 1) { 
        arr[index++] = num; 
    } 
 
    for(int i = 0; i<index; i++) 
        printf("%d ",arr[i]); 
    printf("\n"); 
     
     
    return 0; 
} 