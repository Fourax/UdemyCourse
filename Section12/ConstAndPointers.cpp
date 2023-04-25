#include <iostream>

using namespace std;

int main ()
{
   /*
     int highScore {100};
     int lowScore {65};
     const int *scorePtr {&highScore};

    // *scorePtr = 86; // Error
     scorePtr = &lowScore;
    */

    /*
    int highScore {100};
    int lowScore {65};
     int *const scorePtr {&highScore};

     *scorePtr = 86; 
     //scorePtr = &lowScore;// Error
    */

    /*
    int highScore {100};
    int lowScore {65};
    const int *const scorePtr {&highScore};

     //*scorePtr = 86; // Error 
     //scorePtr = &lowScore;// Error
     */
    
    return 0;
}