/*
 * =====================================================================================
 *
 *       Filename:  firstwhile.c
 *
 *    Description:  Learn `while` loops
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:36:45 AM
 *       Revision:  none
 *       Compiler:  gcc firstwhile.c -o firstwhile.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

#define MAX_COUNT 4

// Function Prototypes

// Main Function
int main()
{
    // Task 1: Calculate the average of user input values
    int count = 0;
    float grade = 0;
    float total = 0;
    float avg = 0;

    while (count < MAX_COUNT) {
        printf("\nEnter %d grade (0.0-100.0): ", count + 1);
        scanf("%f", &grade);

        total += grade;

        // Update test condition
        count++;
    }

    avg = total / count;

    printf("The average of the grades is %6.2f.\n", avg);
    printf("\nBye\n");

    return 0;
}
// Function Definitions


