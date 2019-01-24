/*
 * =====================================================================================
 *
 *       Filename:  cartesian.c
 *
 *    Description:  Calculate Cartesian coordinates for a point on a circle 
 *                  based on radius and angle (theta) in degrees.
 *
 *        Version:  1.0
 *        Created:  01/24/2019 08:36:42 AM
 *       Revision:  none
 *       Compiler:  gcc cartesian.c -o cartesian.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

const double PI = 3.14159;

// Function Prototypes

// Main Function
int main()
{
    double radius, theta, x_pos, y_pos;

    // 1) Capture user input for radius and angle

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    printf("Enter the angle: ");
    scanf("%lf", &theta);

    // 2) Convert the angle from degrees to radians

    theta = (theta * PI / 180.0);

    // 3) Calculate the coordinates

    x_pos = radius * cos(theta);
    y_pos = radius * sin(theta);

    // 4) Output the result

    printf("Coordinates (x, y): (%.2lf, %.2lf)\n", x_pos, y_pos);

    return 0;
}
// Function Definitions


