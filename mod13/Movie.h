#ifndef MURACH_MOVIE_H
#define MURACH_MOVIE_H

#include <string>
using namespace std;

class Movie {
private:
    string title;
    int year;
    int stars;

    string to_upper(string);
public:
    Movie(string title = "", int year = 1888, int stars = 1);

    void set_title(string);
    string get_title() const;

    void set_year(int);
    int get_year() const;

    void set_stars(int);
    int get_stars() const;

    bool iequals(const Movie&);
};

#endif // MURACH_MOVIE_H