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
 *       Compiler:  gcc soccer_main.c soccer.c -o soccer.out [-lm]
 *          Usage:  ./soccer.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef SOCCER__INC__
#define SOCCER__INC__

// Constants
#define NUM_PLAYERS 2

// Function Protoypes
void GetUserNumberAndRating(int nums[], int ratings[]);
void DisplayRoster(int nums[], int ratings[]);
void UpdatePlayerRating(int nums[], int ratings[]);
void DisplayRosterAboveRating(int nums[], int ratings[]);
void ReplacePlayer(int nums[], int ratings[]);
char DisplayMenu();

#endif