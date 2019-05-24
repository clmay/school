/*
 * =====================================================================================
 *
 *       Filename:  scanChars.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:41:53 AM
 *       Revision:  none
 *       Compiler:  gcc
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
    char cIn;
    printf("Enter a character: ");
    scanf("%c", &cIn);
    printf("You entered [%c]\n", cIn);
    
    // Note: when capturing chars, use an extra space
    // in your scanf statement, e.g. " %c". This will
    // help you capture the extra newline.

    printf("Enter a character: ");
    scanf(" %c", &cIn);
    printf("You entered [%c]\n", cIn);

    return 0;
}
// Function Definitions


