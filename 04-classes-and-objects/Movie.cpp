#include <iostream>
#include <utility>
#include "Movie.h"

Movie::Movie(std::string name, std::string rating, int watched)
    : name{std::move(name)}, rating{std::move(rating)}, watched{watched} {
}

std::string Movie::get_name() const {
    return name;
}

std::string Movie::get_rating() const {
    return rating;
}

int Movie::get_watched() const {
    return watched;
}

void Movie::increment_watched() {
    ++watched;
}

void Movie::display() const {
    std::cout << name << ", " << rating << ", " << watched << std::endl;
}
