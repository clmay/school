/*
 * =====================================================================================
 *
 *       Filename:  first_real_class.cpp
 *
 *    Description:  Let's change the structure to a class
 *
 *        Version:  1.0
 *        Created:  04/04/2019 08:55:04 AM
 *       Revision:  none
 *       Compiler (C++):  g++ first_real_class.cpp -o first_real_class.out -lm
 *          Usage:  ./first_real_class.out 
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <iostream>
#include <iomanip>  // more `cout` options
#include <string>   // for strings
#include <vector>   // for vectors
#include "Movie.h"
using namespace std;

// Main Function
int main(int argc, char* argv[])
{
    cout << "The Movie List Program" << endl << endl
	<< "Enter a movie..." << endl << endl;

    // Get movies from user
    vector<Movie> movies;
    char another = 'y';
    Movie movie;

    // Loop for entries
    while (tolower(another) == 'y')
    {
	string title;
	int year;

	cout << "Title: ";
	getline(cin, title);
	movie.set_title(title);

	cout << "Year: ";
	cin >> year;
	movie.set_year(year);

	// Add it to the vector
	movies.push_back(movie);


	cout << endl << "Enter another movie? [y|n]";
	cin >> another;
	cin.ignore(); // ignore anything else in the buffer
    }

    const int w = 10;
    
    cout << left
	<< setw(w*3) << "TITLE"
	<< setw(w) << "YEAR" << endl;
    for (Movie movie : movies)
    {
	cout << setw(w*3) << movie.get_title()
	    << setw(w) << movie.get_year();
    	cout << endl;
    }

    return 0;
}
