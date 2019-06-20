/*
 * =====================================================================================
 *
 *       Filename:  date_struct++.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc date_struct++.c -o date_struct++.out [-lm]
 *          Usage:  ./date_struct++.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants
typedef struct Date {
    int month;
    int day;
    int year;
} Date;

// Function Prototypes
void Hello_Date(Date date);

// Main Function
int main(int argc, char* argv[])
{
    Date d1;
    d1.month = 12;
    d1.day = 23;
    d1.year = 2018;
    printf("%d/%d/%d", d1.month, d1.day, d1.year % 100);
    Hello_Date(d1);
    return 0;
}
// Function Definitions
void Hello_Date(Date date) {
    println("Hello, 'Date' = %d/%d/%d", date.month, date.day, date.year % 100);
    return;
}