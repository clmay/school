/*
 * =====================================================================================
 *
 *       Filename:  simple_calc.c
 *       Usage:     ./simple_calc.out <PARAM1> <PARAM2>
 *
 *    Description:  Calculate sums, differences, products
 *
 *        Version:  1.0
 *        Created:  02/14/2019 09:28:26 AM
 *       Revision:  none
 *       Compiler:  gcc simple_calc.c -o simple_calc.out
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
int main(int argc, char* argv[])
{
    int choice;
    double sum;
    double diff;
    double prod;

    if (argc != 3) {
        printf("Missing input:\n");
        printf("Usage: %s <first number> <second number>\n", argv[0]);
        return 1;
    }

    printf("Operation?\n");
    printf("\t1) Addition\n");
    printf("\t1) Subtraction\n");
    printf("\t1) Multiplication\n");
    scanf("%d", &choice);



    return 0;
}
// Function Definitions


