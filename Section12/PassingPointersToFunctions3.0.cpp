#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(vector<string> *v)// funkcja oczekje na wskaźnik do tablicy(vektor) a nastepnie wypisze kazdy jej element po kolei ze spacją pomiędzy
{
   // (*v).at(0) = "Funny";// zmienia Larry na Funny
    for(auto str: *v)// v otrzymuje adress stooges(1000) ,
    {
        cout << str <<" ";
    }
    cout << endl;
}

void display(int *array, int sentinel)//przekazuje adres tej pierwszej liczby oraz wartownika (-1) czyli liczby gdzie ma sie zatrzymac(sentinel)
{
    while(*array != sentinel)
    {
        cout << *array++ << " ";// petla wyświetli pierwszy element tablicy czyli 100 a nastepnie przesunie wskaźnik do następnego elementu
    }
    cout << endl;
}
int main()
{
    
    cout <<"----------------------------"<< endl;
    
    vector<string> stooges{"Larry", "Moe" , "Curly"};// przykładowy adres 1000
    display(&stooges);
    
    cout <<"\n---------------------------"<<endl;
    int scores[]{100,98,97,79,85,-1};// przykładowy adres 100[1000], sentinel = -1
    display(scores, -1);
    
   return 0;
}