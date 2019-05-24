/*
 * =====================================================================================
 *
 *       Filename:  calc_main.c
 *
 *    Description:  Use the calculator library
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:56:14 AM
 *       Revision:  none
 *       Compiler:  gcc calc_main.c calculator.c -o calc_main.out -lm
 *          Usage:  ./calc_main.out 
 *
 *         Author:  Chase May, chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int num1 = 8, num2 = 4;
    printf("The sum of %d + %d = %d\n", num1, num2, add_numbers(num1, num2)); 
    printf("The difference of %d - %d = %d\n", num1, num2, sub_numbers(num1, num2)); 

    return 0;
}