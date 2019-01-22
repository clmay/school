/*
 * =====================================================================================
 *
 *       Filename:  satellite.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:23:24 AM
 *       Revision:  none
 *       Compiler:  gcc
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
    // Constants
    const double GRAVITY = 6.67e-11;    //Newton's constant (m^3 kg^-1 s^-2)
    const double E_MASS = 5.97e24;      // Earth's Mass (kg)
    const double E_RADIUS = 6371e3;     // Earth's Radius (meters)
    const double PI = 3.1415941;        // PI

    double period = 0;
    long double height = 0;
    // Enter the period (time) in seconds
    printf("Enter the period (T) in seconds: ");
    scanf("%lf", &period);
    // Calculate height = [(G M T**2)/(4 * PI**2)]^1/3 - R
    height = cbrt((GRAVITY * E_MASS * pow(period, 2))/(4 * pow(PI, 2))) - E_RADIUS;
    // Display result, ex. 86400s -> 35855km
    printf("Your satellite after %lf sec is %Lf km from Earth.\n",
            period, height/1000);

    return 0;
}
// Function Definitions


