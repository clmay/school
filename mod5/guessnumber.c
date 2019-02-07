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

#define MAX 6
#define LIMIT 100

// Function Prototypes

// Main Function
int main()
{
    int number, guess;

    srand(time(0));
    number = rand() % LIMIT + 1;

    // before C89 i must be defined outside loop
    for (int i = 0; i < MAX; i++) {
        printf("Please guess a number between 1 and %d.\n", LIMIT);
        printf("You have %d tries left.\n", MAX - i);
        scanf("%d", &guess);
        if (guess < number) {
            printf("Higher!\n");
        } else if (guess > number) {
            printf("Lower!\n");
        } else {
            printf("Winner, winner, chicken dinner!\n");
            return 0;
        }
    }
    printf("Sorry, you did not guess the number.\nThe number was: %d.\nPlay again?\n", number);

    return 0;
}
// Function Definitions


