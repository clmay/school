/*
 * =====================================================================================
 *
 *       Filename:  stringsFunc.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/24/2019 09:11:07 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char first[50];
    char last[50];
    char fullName[100];

    printf("Enter your name: ");
    scanf("%s %s", first, last);

    strcpy(fullName, first);
    strcat(strcat(fullName, " "), last);
    printf("Hello, %s\n", fullName);

    return 0;
}
// Function Definitions


