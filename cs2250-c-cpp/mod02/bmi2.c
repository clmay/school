/*
 * =====================================================================================
 *
 *       Filename:  bmi2.c
 *
 *    Description: Calculate BMI using floating point numbers.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:24 AM
 *       Revision:  none
 *       Compiler:  gcc bmi2.c -o bmi2 && ./bmi -lm
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    // BMI = weight / height**2;
    double weight = 0;
    double height = 0;
    double bmi = 0;

    // 1) Capture user input
    printf("Please enter the subject's weight (kg):\n");
    scanf("%lf", &weight);
    printf("Please enter the subject's height (m):\n");
    scanf("%lf", &height);

    // 2) Calculate BMI
    bmi = weight / (pow(height, 2));

    // 3) Output BMI
    printf("The subject's BMI: %lf.\n", bmi);

    return 0;
}
// Function Definitions


