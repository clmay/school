/*
 * =====================================================================================
 *
 *       Filename:  month_day.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/31/2019 09:16:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int month, day;
    printf("Please enter the month (in digits, e.g. '12' for December): ");
    scanf("%d", &month);
    printf("Please enter the day (in digits, e.g. '27'): ");
    scanf("%d", &day);

    printf("The month is %d and the day is %d", month, day);
    return 0;
}
// Function Definitions


