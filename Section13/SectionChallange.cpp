#include <iostream>
#include <vector>
#include <string>
#include "Movie.h"
using namespace std;

void addMovie(Movie &movies, std:: string name, std:: string rating, int watched)
{
    if(movies.addMovie(name,rating,watched))
    {
        cout << name << "added" << endl;
    }
    else
    {
        cout << name <<"already exist" << endl;
    }
}
void incrementWatched(Movie &movies, std::string name)
{
    if(movies.incrementWatched(name))
    {
        cout << name <<"Watch incremented"<< endl;
    }
    else
    {
        cout << name <<"not found" << endl;
    }
}
 int main ()
 {
    Movie myMovies;

    myMovies.display();
    
    addMovie(myMovies,"Big","PG-13",2);
    addMovie(myMovies,"Star Wars","PG",5);
    addMovie(myMovies,"Cinderella","PG",7);

    myMovies.display();

    addMovie(myMovies,"Cinderella","PG",7);
    addMovie(myMovies,"Ice Age","PG",12);
    
    myMovies.display();

    incrementWatched(myMovies,"Big");
    incrementWatched(myMovies,"Ice Age");

    myMovies.display();

    incrementWatched(myMovies,"XXXXXXXX");

    return 0;
 }
