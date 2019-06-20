/*
 * =====================================================================================
 *
 *       Filename:  soccer.c
 *
 *    Description:  soccer library implementation
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc soccer.c -o soccer.out [-lm]
 *          Usage:  ./soccer.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#include <stdio.h>
#include "soccer.h"

// Constants

// Function Prototypes
void GetUserNumberAndRating(int nums[], int ratings[]);
void DisplayRoster(int nums[], int ratings[]);
void UpdatePlayerRating(int nums[], int ratings[]);
void DisplayRosterAboveRating(int nums[], int ratings[]);
void ReplacePlayer(int nums[], int ratings[]);
char DisplayMenu();

// Main Function
int main()
{
    int jerseyNums[NUM_PLAYERS];
    int ratingNums[NUM_PLAYERS];
    char menuOp = '-';

    // Get user defined jersey numbers and ratings
    GetUserNumberAndRating(jerseyNums, ratingNums);
    // Print roster
    DisplayRoster(jerseyNums, ratingNums);

    // Menu
    do {
        menuOp = DisplayMenu();

        //Update
        if (menuOp == 'u') 
        {
            UpdatePlayerRating(jerseyNums, ratingNums);
        }

        // Output players above a user defined rating
        else if (menuOp == 'a') 
        {
            DisplayRosterAboveRating(jerseyNums, ratingNums);
        }

        // Replace
        else if (menuOp == 'r') 
        {
            ReplacePlayer(jerseyNums, ratingNums);
        }

        // Output roster
        else if (menuOp == 'o') 
        {
            DisplayRoster(jerseyNums, ratingNums);
        }
    } while(menuOp != 'q');

    return 0;
}