#ifndef MOVIE_H_
#define MOVIE_H_

#include <string>

class Movie {
private:
    std::string name;
    std::string rating;
    int watched;
public:
    Movie(std::string name, std::string rating, int watched);
    std::string get_name() const;
    std::string get_rating() const;
    int get_watched() const;
    void increment_watched();
    void display() const;
};

#endif
