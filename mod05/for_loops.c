/*
 * =====================================================================================
 *
 *       Filename:  forloops.c
 *
 *    Description:  Play with for loops
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:39:24 AM
 *       Revision:  none
 *       Compiler:  gcc forloops.c -o forloops.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

#define MAX_NUMBER 5

// Function Prototypes

// Main Function
int main()
{
    for (int i = 0; i < MAX_NUMBER; i++) {
        printf("i is [%d]\n", i);
    }

    printf("Bye!\n");

    return 0;
}
// Function Definitions


