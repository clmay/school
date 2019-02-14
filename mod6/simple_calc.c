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
    if (argc < 3) {
        printf("Please provide correct input:\n");
        printf("./simple_calc.out <PARAM1> <PARAM2>\n");
        return 1;
    }

    return 0;
}
// Function Definitions


