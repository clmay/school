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

#ifndef MOVIE__INC__
#define MOVIE__INC__

#include <iostream>
using namespace std;

class Movie
{
    // Only the member has access to
    // data members are private
    private:
        string title = "";
        int year = 0;
   // Anyone has access to it
   // Member functions are public
    public:
        // "Setters"
        void set_title(string title);
        void set_year(int year);
        // "Getters"
        string get_title();
        int get_year();

}; // end of Movie class
#endif