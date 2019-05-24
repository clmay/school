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
#include "Movie.h"
using namespace std;

// Function Definitions
void Movie::set_title(string title)
{
    this->title = title;
}

void Movie::set_year(int year)
{
    if (year < 1888)
    {
        throw invalid_argument("Year must be 1888 or later.");
    }
    this->year = year;
}

// Define Getters
string Movie::get_title()
{
    return title;
}
        
int Movie::get_year()
{
    return year;
}