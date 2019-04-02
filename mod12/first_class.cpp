/*
 * =====================================================================================
 *
 *       Filename:  first_class.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  g++ first_class.cpp -o first_class.out [-lm]
 *          Usage:  ./first_class.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =======================================  ==============================================
 */
#include <iostream>
using namespace std;

// Constants & Globals
struct Movie
{
    string title = "";
    int year = 0;
};

// Function Prototypes
bool Equals(const Movie& my_movie, const Movie& to_compare); // Reference operator goes at end of name

// Main Function
int main(int argc, char* argv[])
{
    Movie mov1;
    mov1.title = "Batman";
    mov1.year = 2008;

    cout << "Movie 1" << endl
        << "Title: " << mov1.title << endl
        << "Year: " << mov1.year << endl;
    
    Movie mov2;
    mov2.title = "Batman";
    mov1.year = 2008;

    cout << "Movie 2" << endl
        << "Title: " << mov1.title << endl
        << "Year: " << mov1.year << endl;

    if (Equals(mov1, mov2))
    {
        cout << "Movies are equal." << endl;
    }
    else
    {
        cout << "Movies are different." << endl;
    }
    
    return 0;
}
// Function Definitions
bool Equals(const Movie& my_movie, const Movie& to_compare)
{
    return (my_movie.title == to_compare.title &&
            my_movie.year == to_compare.year);
}