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

// Function Prototypes

// Main Function
int main()
{
    // Task 1: Calculate the average of user input values
    int user_count = 0;
    int min_count = 1;
    int max_count = 10;
    int count = 0;
    
    float grade = 0;
    float total = 0;
    float avg = 0;
    
    printf("\nHow many grades do you want to enter?\n");
    scanf("%d", &user_count);

    if (user_count < min_count) {
        printf("\n%d is less than %d. Setting to %d.\n", user_count, min_count, min_count);
        user_count = min_count;
    } else if (user_count > max_count) {
        printf("\n%d is greater than %d. Setting to %d.\n", user_count, max_count, max_count);
        user_count = max_count;
    }

    while (count < user_count) {
        printf("\nEnter %d grade (0.0-100.0): ", count + 1);
        scanf("%f", &grade);

        // Validate input
        if (grade < 0 || grade > 100) {
            continue;
        } else {
            total += grade;
        }

        // Update test condition
        count++;
    }

    avg = total / count;

    printf("\nThe average of the grades is %6.2f%%.\n", avg);
    printf("\nBye\n");

    return 0;
}
// Function Definitions


