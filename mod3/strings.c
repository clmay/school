/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  String exercises
 *
 *        Version:  1.0
 *        Created:  01/22/2019 09:51:27 AM
 *       Revision:  none
 *       Compiler:  gcc strings.c -o strings.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

const int SIZE = 50;

// Function Prototypes

// Main Function
int main()
{
    // A string is a list/collection/array of characters
    // Strings use %s as the placeholder

    char fName[SIZE];
    char lName[SIZE];
    unsigned long int age;

    printf("Please enter your name (<%d chars): ", SIZE);
    // When using arrays, do NOT include the '&' operator in scanf
    scanf("%s", fName);
    
    printf("Please enter your name (<%d chars): ", SIZE);
    // When using arrays, do NOT include the '&' operator in scanf
    scanf("%s", lName);
    
    printf("Enter your age: ");
    scanf("%lu", &age);

    printf("Hi, [%s][%s], you are %lu years old.\n", fName, lName, age);

    return 0;
}
// Function Definitions


