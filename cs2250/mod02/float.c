/*
 * =====================================================================================
 *
 *       Filename:  float.c
 *
 *    Description:  Play with floating points.
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:26:55 AM
 *       Revision:  none
 *       Compiler:  gcc float.c -o float
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
    double f_temp = 0.0; // Celsius

    // For floats, use the `%f` placeholder.
    // For doubles, use the `%lf` placeholder.
    printf("What is the temperature in Ogden right now (in Fahrenheit)?\n");
    scanf("%lf", &f_temp);

    double c_temp = 5.0 * (f_temp - 32.0) / 9.0;

    printf("The temperature is %lf Celsius.\n", c_temp);

    return 0;
}
// Function Definitions


