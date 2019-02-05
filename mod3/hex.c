/*
 * =====================================================================================
 *
 *       Filename:  hex.c
 *
 *    Description:  Play with hexadecimal values
 *
 *        Version:  1.0
 *        Created:  01/24/2019 10:01:31 AM
 *       Revision:  none
 *       Compiler:  gcc hex.c -o hex.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

const unsigned char PIN1 = 0x01;
const unsigned char PIN2 = 0x02;
const unsigned char PIN3 = 0x04;
const unsigned char PIN4 = 0x08;

// Function Prototypes

// Main Function
int main()
{

    unsigned char hex = 0xF2;

    printf("Enter a hex value (up to two digits): ");
    scanf("%hhx", &hex);

    if (hex & PIN1) {
        printf("PIN1 is ON\n");
    }

    return 0;
}
// Function Definitions


