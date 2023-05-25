#ifndef MOVIE_H
#define MOVIE_H
#include <vector>
#include <string>

using namespace std;
class Movie
{
private:
    vector<Movie> *movies;
    string name;
    string rating;
    int watched;
public:
    Movie ();
    
    //Constructor
    Movie(string name, string rating, int watched);
    //Copy constructor
    Movie(const Movie &source);
    //Deconstructor
    ~Movie();
    
    void setName(string name){this -> name = name;}
    string getName()const{return name;}

    void setRating(string rating){this -> rating = rating;}
    string getRating()const{return rating;}

    void setWatched(int watched){this -> watched = watched;}
    int getWatched() const{return watched;}

    void incrementWatched(){++watched;}

    bool addMovie(std:: string name, std::string rating, int watched);

    bool incrementWatched(std::string name);

    void display() const;
    
    
};

#endif