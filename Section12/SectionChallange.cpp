#include <iostream>

using namespace std;
void print(const int *const arr, size_t size)// ta funkcja oczekuje stałego wskaźnika, czyli nie mogę zmienić wskaźnika ani tego na co wskazuje
{
    cout << "[";
    for(size_t i{0}; i<size; i++)
    {
        cout <<arr[i]<<" ";//pointer-subscript notation
    }
    cout <<"]";
    cout << endl;
}

int *apply_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2)// arr1 jest plikiem wskaxnika do liczby całkowitej , size 2 jest jej rozmiarem 
{
    int *new_array{};

    new_array = new int[size1 *size2];
    
    int position{0};
    for(size_t i{0}; i<size2; i++)//przegladam pierwszą tablice(wolniej) [10,20,30]
    {
        for(size_t j{0}; j <size1; j++)// przegladam drugą tablicę (szybcije) [1,2,3,4,5], jestem na 10 i chce przesc cała 2 tablice, na 20 to samo i na 30 też
        {
            new_array[position] = arr1[j] * arr2[i];//ustawiam wartośc nowej pozycji w nowej tablicy po prawej(0*0), następnie mnozymy pierwszą pozcyje z wolniejszej tablicy 10 * całą (szybszą tablice), ustawaimy po kolei na pozycji 0 jest 10(1*10) na pozcyji 1 jest 20(2*10)i tak az do 50, następnie robimy to samo tylko ze z kolejna pozycją czyli 20 razy szybsza tablica
            ++position;
        }
    }
    return new_array;
}
int main ()
{
    const size_t array1_size{5};
    const size_t array2_size{3};

    int array1[]{1,2,3,4,5};
    int array2[]{10,20,30};

    cout <<"Array 1: ";
    print(array1,array1_size);

    cout <<"Array 2: ";
    print(array2,array2_size);

    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size{array1_size * array2_size};// obliczamy stały rozmiar(15)

    cout << "Result: ";
    print(results,results_size);

    delete[] results;
    cout << endl;
    return 0;
}