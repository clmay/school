/*
 * =====================================================================================
 *
 *       Filename:  charsChoice.c
 *
 *    Description:  Experiments with conditionals.
 *
 *        Version:  1.0
 *        Created:  01/22/2019 10:11:55 AM
 *       Revision:  none
 *       Compiler:  gcc charsChoice.c -o charsChoice.out
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
    char letter;
    printf("Enter the grade you want for this class:\n");
    printf("Your choices are: 'A'\t'B'\t'C'\t'D'\t or 'F'\n");
    scanf(" %c", &letter);

    if (letter=='A') {
        printf("You need to get >= 94%%.\n");
    }


    printf("Done.\n");
    
    return 0;
}
// Function Definitions


