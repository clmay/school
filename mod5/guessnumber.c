/*
 * =====================================================================================
 *
 *       Filename:  guessnumber.c
 *
 *    Description:  Guess the random number
 *
 *        Version:  1.0
 *        Created:  02/07/2019 08:53:03 AM
 *       Revision:  none
 *       Compiler:  gcc guessnumber.c -o guessnumber.out -lm
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constants

#define MAX 3

// Function Prototypes

// Main Function
int main()
{
    int number, guess;

    srand(time(0));
    number = rand() % 10 + 1;

    // before C89 i must be defined outside loop
    for (int i = 0; i < MAX; i++) {
        printf("Please guess a number between 1 and 10.\n");
        scanf("%d", &guess);
        if (number == guess) {
            printf("Winner, winner, chicken dinner!\n");
            return 0;
        }
    }
    printf("Sorry, you did not guess the number.\nThe number was: %d.\nPlay again?\n", number);

    return 0;
}
// Function Definitions


