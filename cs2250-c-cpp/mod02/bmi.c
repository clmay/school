/*
 * =====================================================================================
 *
 *       Filename:  bmi.c
 *
 *    Description: Calculate BMI.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 08:59:24 AM
 *       Revision:  none
 *       Compiler:  gcc bmi.c -o bmi && ./bmi
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
    bmi = weight / (height * height);

    // 3) Output BMI
    printf("The subject's BMI: %lf.\n", bmi);

    return 0;
}
// Function Definitions


