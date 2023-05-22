#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Movie
{
private:
    vector<Movie> movies;
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
    cout << name << "," << rating << watched << endl;
}

bool Movie::addMovie(std::string name, std::string rating, int watched)
{
    return false;
}

bool Movie::incrementWatched(std::string name)
{
    return false;
} 

void incrementWatched(Movie &movies, std::string name);

void addMovie(Movie &movies, std:: string name, std:: string rating, int watched);

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
