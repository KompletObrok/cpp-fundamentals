#include <iostream>
#include "Movies.h"

Movies::Movies() = default;

bool Movies::add_movie(const std::string &name, const std::string &rating, int watched) {
    for (const auto &movie : movies) {
        if (movie.get_name() == name)
            return false;
    }
    movies.push_back(Movie{name, rating, watched});
    return true;
}

bool Movies::increment_watched(const std::string &name) {
    for (auto &movie : movies) {
        if (movie.get_name() == name) {
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

void Movies::display() const {
    if (movies.empty()) {
        std::cout << std::endl;
        std::cout << "Sorry, no movies to display" << std::endl;
        std::cout << std::endl;
        return;
    }
    std::cout << std::endl;
    std::cout << "===================================" << std::endl;
    for (const auto &movie : movies) {
        movie.display();
    }
    std::cout << "===================================" << std::endl;
    std::cout << std::endl;
}
