#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,pass=0,k;
   int a[10] {3,6,7,4,5,9,10,2,8,1};
   for(i = 0; i<10; i++) {
      cout <<a[i]<< "\t";
   }
cout<<endl;
for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }

for(k = 0; k<10; k++) 
{
   cout <<a[k] << "\t";
}
cout<<endl;
pass++;
}

return 0;
}
