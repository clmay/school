/*
 * =====================================================================================
 *
 *       Filename:  date_struct.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc date_struct.c -o date_struct.out [-lm]
 *          Usage:  ./date_struct.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

struct Birth {
    int month;
    int day;
    int year;
};

// Main Function
int main(int argc, char* argv[])
{
    struct Birth waldo;
    waldo.month = 12;
    waldo.day = 24;
    waldo.year = 2018;
    printf("Waldo's birth month is %d\n", waldo.month);
    printf("Waldo's birth day is %d\n", waldo.day);
    printf("Waldo's birth year is %d\n", waldo.year);
    struct Birth weber = {11, 5, 2017};
    printf("Weber month %d, day %d, year %d\n", weber.month, weber.day, weber.year % 100);
    return 0;
}
// Function Definitions


