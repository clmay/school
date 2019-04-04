/*
 * =====================================================================================
 *
 *       Filename:  real_class.cpp
 *
 *    Description:  First *real* class definition
 *
 *        Version:  1.0
 *        Created:  04/04/2019 08:55:48
 *       Revision:  none
 *       Compiler:  g++ real_class.cpp -o real_class.out -lm
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;

class Movie
{
    // Only the instance has access to `private` fields and methods
    private:
    	string title = "";
	int year = 0;
    // All code has access to `public` fields and methods
    public:
	// Setters
	void set_title(string title);
	void set_year(int year);
};

int main(int argc, char* argv[])
{
    Movie movie; // Create an  instace of the class (an object of class `Movie`)
    movie.set_title("Batman");
    return 0;
}

void Movie::set_title(string title)
{
    title = title;
    return;
}

void Movie::set_year(int year)
{
    year = year;
    return;
}
