/*
 * =====================================================================================
 *
 *       Filename:  angle.c
 *
 *    Description:  Tell what quadrant an angle is in.
 *
 *        Version:  1.0
 *        Created:  01/31/2019 08:46:33 AM
 *       Revision:  none
 *       Compiler:  gcc angle.c -o angle.out -lm
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int angle;
    printf("Please enter an angle: ");
    scanf("%d", &angle);

    // Convert angle to within 360 degress
    angle %= 360;
    
    if (angle < 0) {
        angle = abs(360 + angle);
    }

    if (angle > 0 && angle < 90) {
        printf("\nThe angle is in quadrant I.\n");
    } else if (angle > 90 && angle < 180) {
        printf("\nThe angle is in quadrant II.\n");
    } else if (angle > 180 && angle < 270) {
        printf("\nThe angle is in quadrant III.\n");
    } else if (angle > 270 && angle < 360) {
        printf("\nThe angle is in quadrant IV.\n");
    } else if (angle == 0
            || angle == 90
            || angle == 180
            || angle == 270) {
        switch (angle) {
            case 0:
                printf("\nThe angle is on the positive x-axis.\n");
                break;
            case 90:
                printf("\nThe angle is on the positive y-axis.\n");
                break;
            case 180:
                printf("\nThe angle is on the negative x-axis.\n");
                break;
            case 270:
                printf("\nThe angle is on the negative y-axis.\n");
                break;
        }
    } else {
        printf("\nInvalid angle.\n");
    }

    return 0;
}
// Function Definitions


