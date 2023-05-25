#include "Movie.h"
#include <string>
#include <iostream>
using namespace std;
Movie::Movie()
{
    movies = new vector<Movie> {};
}
Movie::Movie(string name, string rating, int watched): name(name), rating(rating), watched(watched)
{

}

Movie::Movie(const Movie &source):Movie{source.name, source.rating, source.watched}
{

}

Movie::~Movie()
{

}

void Movie::display() const
{
    if(movies -> size() == 0)
    {
        cout << "Sorry, no movies to display \n" << endl;
    }
    else
    {
        cout << "rozmiar " << movies -> size() << endl;
        cout <<"\n============================================"<<endl;
        for( const Movie movie : (vector<Movie>) *movies)
        {
           cout << "nazwa filmu" << movie.getName() << endl;
        }
        cout <<"\n============================================" << endl;
    }
}

bool Movie::addMovie(std::string name, std::string rating, int watched)
{
    for(const Movie &movie : *movies)
    {
        if(movie.getName() == name)
        {
            return false;
        }
    }
    Movie temp {name, rating, watched};
    movies -> push_back(temp);
    return true;
}

bool Movie::incrementWatched(std::string name)
{
   for(Movie &movie : *movies)
   {
        if(movie.getName() == name)
        {
            movie.incrementWatched();
            return true;
        }
   }
   return false;
} 

void incrementWatched(Movie &movies, std::string name);

void addMovie(Movie &movies, std:: string name, std:: string rating, int watched);


