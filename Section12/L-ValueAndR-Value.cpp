// wartość l jest to obiekt ktroy zajmuje miejsce w pamięci i jest adresowany
// Mozemy zdefiniować wartość r przez wykluczenie, więc wszystko co nie jest wartością l jest wartością r
//Można przypisać warosci R jawnie wartosci L
// L wartosci mogą pojawaic się oba po lewej i prawej stronie instrukcji przypisania
// Referencjde, które uzywalismy do tej pory wszystkie były odniesieniami do wartości L
#include <iostream>

using namespace std;

int main ()
{
    int x{100};//x is an l-value
    x = 1000;
    x = 1000 + 20;
 //  100 = x; // 100 is Not an l-value, ponieważ nie jest adresowalna tylko jest literałem
 // (1000 + 20) = x; // NOT an l-value, tworzymy smienna 1020 ale ta zmienna nie jest adresowalna więc nie mozemu tego użyć jako wartosci l
   string name; // name is an l-value
   name = "Frank";
   //"Frank" = name // "Frank" is NOT an l-value, nie adresowalna

   cout << "\n----------------------------------------------------"<<endl;
    int x{100};//100 is and r-value
    int y = x+200;// (x+200) is an r-value

    string name;
    name ="Frank"; // "Frank" is an r-value

    int max_num = max(20,30); // max(20,30) is an r-value, jest wartością r ponieważ zwraca wynik ktory jest tymczasowy i nieadresowalny
  
   cout << "\n----------------------------------------------------"<<endl;

   int x {100};
   int y {0};

   y = 100;// r-value 100 assigned to l - value y, W tym przykładzie widzimy pierwszy plik instrukcji przypisania, uzywa wartosci r 100 po prawej stronie instrukcji przypisania, i to zostanie przypisane do wartosci L y
   x = x+y;// r-value (x+y) assigned to l-value x, w tym przykładzie wartosc r z z sumy x plus y zostanie przypisany do wartosci L x
  
  cout << "\n----------------------------------------------------"<<endl;

    int x {100};// x jest wartością L

    int  &ref1 = x;// ref1 is reference to l-value, delklarujemy ref1 jakos odniesienie do x, x jest wartościa L, trzeba zwrocic uwagę że x jest wartościa l , ponieważ jest alias dla x i możemy uzyć ref1 po lewej stronie instrukcji przypisania, ponieważ odnosi się do wartości L
    ref1 = 1000;

   // int &ref2 = 100; //Error 100 is an r-value, 100 jest wartościią r więc jest to niedozwolone i kompilator wygeneruje błąd

    cout << "\n----------------------------------------------------"<<endl;
    
    int num {10};//Mamy liczbę całkowitą zainicjowaną na 10
    
    square(num); // OK, wywołujemy kwadrat  i pokazujemy num, n jest odniesieniem do wartosci L, a num to wartość L
   // square(5);//Error - cant reference r-value 5,Otrzymujemy bład kompilatora ponieważ  5 nie jest wartością L tylko wartością R a musimy odwołać się do wartości L
    return 0;
}
int square (int &n)
    {
        return n*n;
    }