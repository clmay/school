/*
 * =====================================================================================
 *
 *       Filename:  chars2.c
 *
 *    Description:  More character experiments
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:05:12 AM
 *       Revision:  none
 *       Compiler:  gcc chars2.c -o chars2.out
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
    char c= '0';

    printf("Enter the first letter of your first name.\n");
    scanf("%c", &c);
    printf("Your first initial is [%c]\n", c);
    
    printf("C is %c\n", c);
    printf("C is %d\n", c);
    printf("C is %x\n", c); // %x for hex output
    printf("C is %#x\n", c); // %#x for hex output with "0x"

    return 0;
}
// Function Definitions


