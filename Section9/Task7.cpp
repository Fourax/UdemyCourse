#include <iostream>
#include <vector>
using namespace std;

int count_numbers( const vector<int> &vec) {
    
    
    int count {0};
    size_t index {0};  // See the Q/A forum for more about size_t
                       // size_t is an unsigned int
                       // you can replace size_t with int or unsigned int and it will work fine
    
    while (index < vec.size() && vec.at(index) != -99  ) {
        ++count;
        ++index;
    }
        
    
 
    return count;
}