#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Movies
{
private:
    std::vector<Movie> movies;
public:
    Movies();
    ~Movies();

    bool addMovie(std:: string name, std::string rating, int watched);

    bool incrementWatched(std::string name);

    void display() const;
};
Movie::Movies()
{

}
Movies::~Movies()
{

}

bool Movies::addMovie(std::string name, std::string rating, int watched)
{
return flase;
}

bool Movies::incrementWatched(std::string name)
{
return false;
}


