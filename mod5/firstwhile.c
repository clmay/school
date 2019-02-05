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
#include <stdbool.h>

// Constants

// #define MIN_COUNT 1
// #define MAX_COUNT 10
#define MIN_GRADE 0
#define MAX_GRADE 100
#define MIN_COUNT 1
#define MAX_COUNT 10
#define MIN_STUDENTS 1
#define MAX_STUDENTS 10

// Function Prototypes

// Main Function
int main()
{
    int class_count = 0;
    int student_count = 0;
    int grade_count = 0;
    int count = 0;

    float grade = 0;
    float total = 0;
    float avg = 0;
    float class_total = 0;
    float class_avg = 0;

    printf("\nHow many students do you have?\n");
    scanf("%d", &class_count);

    while (student_count < class_count ) {

        printf("\nHow many grades do you want to enter?\n");
        scanf("%d", &grade_count);

        // Validate number of entries is within limits
        if (grade_count < MIN_COUNT) {
            printf("\n%d is less than %d. Setting to %d.\n", grade_count, MIN_COUNT, MIN_COUNT);
            grade_count = MIN_COUNT;
        } else if (grade_count > MAX_COUNT) {
            printf("\n%d is greater than %d. Setting to %d.\n", grade_count, MAX_COUNT, MAX_COUNT);
            grade_count = MAX_COUNT;
        }

        // Loop for students

        // Loop for entries
        while (count < grade_count) {
            printf("\nEnter %d grade (0.0-100.0): ", count + 1);
            scanf("%f", &grade);

            // Validate input
            if (grade < MIN_GRADE || grade > MAX_GRADE) {
                continue;
            } else {
                total += grade;
            }

            // Update test condition
            count++;
        }
        // Calculate student average
        avg = total / grade_count;
        // Output student average
        printf("\nStudent average: %f\n", avg);

        // Add student's average to class total
        class_total += avg;

        // Reset inner loop variables
        grade_count = 0;
        total = 0;
        count = 0;

        // Increment student count
        student_count++;
    }

    class_avg = class_total / student_count;

    printf("\nThe average of the grades is %6.2f%%.\n", class_avg);
    printf("\nBye\n");

    return 0;
}
// Function Definitions


