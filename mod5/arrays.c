/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  First look at arrays
 *
 *        Version:  1.0
 *        Created:  02/07/2019 10:04:55 AM
 *       Revision:  none
 *       Compiler:  gcc arrays.c -o arrays.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define NUM 3

// Function Prototypes

// Main Function
int main()
{
    // Arrays use index notation to access members
    int grades[NUM]; // array of size NUM

    for (int i = 0; i < NUM; i++) {
        printf("Enter a number: ");
        scanf("%d", &grades[i]);
    }
    
    for (int i = 0; i < NUM; i++) {
        printf("Entry %d is %d\n", i + 1, grades[i]);
    }

    return 0;
}
// Function Definitions


