#ifndef MOVIES_H_
#define MOVIES_H_

#include <vector>
#include <string>
#include "Movie.h"

class Movies {
private:
    std::vector<Movie> movies;
public:
    Movies();
    bool add_movie(const std::string &name, const std::string &rating, int watched);
    bool increment_watched(const std::string &name);
    void display() const;
};

#endif
