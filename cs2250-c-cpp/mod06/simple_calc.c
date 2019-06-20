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
#include <stdlib.h>   // atoi()

// Constants

#define EXIT      0
#define ADD       1
#define SUBTRACT  2
#define MULTIPLY  3

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int choice = 0;
    int num1, num2;

    if (argc != 3) {
        printf("\n  Missing input:\n");
        printf("Usage: %s <first number> <second number>\n", argv[0]);
        return 1;
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    do {
      printf("\nOperation?\n");
      printf("  0) Quit\n");
      printf("  1) Addition\n");
      printf("  2) Subtraction\n");
      printf("  3) Multiplication\n");
      scanf("%d", &choice);

      switch (choice) {
        case EXIT:
          printf("\nGoodbye!\n");
          break;
        case ADD:
          printf("\n%d + %d = %d\n", num1, num2, num1 + num2);
          break;
        case SUBTRACT:
          printf("\n%d - %d = %d\n", num1, num2, num1 - num2);
          break;
        case MULTIPLY:
          printf("\n%d * %d = %d\n", num1, num2, num1 * num2);
          break;
        default:
          printf("\nUnsupported function.\n");
      }
    } while (choice != EXIT);

    return 0;
}
// Function Definitions
