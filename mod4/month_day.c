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
 *       Compiler:  gcc month_day.c -o month_day.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

#define JANUARY   1
#define FEBRUARY  2
#define MARCH     3
#define APRIL     4
#define MAY       5
#define JUNE      6
#define JULY      7
#define AUGUST    8
#define SEPTEMBER 9
#define OCTOBER   10
#define NOVEMBER  11
#define DECEMBER  12

// Function Prototypes

// Main Function
int main()
{
    int month, day;
    char answer;

    while (1) {
        printf("\n\nPlease enter the month (in digits, e.g. '12' for December): ");
        scanf("%d", &month);

        if (month < 1 || month > 12) {
            printf("Invalid month.\n");
            return 1;
        }

        printf("Please enter the day (in digits, e.g. '27'): ");
        scanf("%d", &day);

        switch (month) {
            // Months with 31 days
            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                if (day > 31 || day < 1) {
                    printf("Invalid day.\n");
                    return 1;
                }
                break;
                // Months with 30 days
            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                if (day > 30 || day < 1) {
                    printf("Invalid day.\n");
                    return 1;
                }
                break;
            case FEBRUARY:
                if (day > 28 || day < 1) {
                    printf("Invalid day.\n");
                    return 1;
                }
                break;
        }

        printf("\n\nWould you like to continue? (y/n)\n");
        scanf(" %c", &answer);
        if (answer != 'y' && answer != 'Y') {
            printf("%c", answer);
            break; // exit loop
        }
    } // end while
    return 0;
}
// Function Definitions


