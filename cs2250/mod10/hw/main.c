/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc main.c PlaylistNode. c -o main.out [-lm]
 *          Usage:  ./main.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PlaylistNode.h"

// Constants & Global Vars

#define MAX 50

// Function Prototypes
void PrintMenu(char playlistTitle[]);

// Main Function
int main(int argc, char* argv[]) {
    char playlistTitle[MAX];
    // 1) Prompt user for playlist title (use fgets() and remove EOL char)
    printf("Enter playlist name:\n");
    fgets(playlistTitle, MAX, stdin);
    playlistTitle[strlen(playlistTitle) - 1] = '\0';
    // 2) Output playlist menu options, i.e. PrintMenu()
    PrintMenu(playlistTitle);
    // 3)
    return 0;
}
// Function Definitions
void PrintMenu(char playlistTitle[]) {
    printf("Welcome to my %s playlist.\n", playlistTitle); // TODO: comment this out before uploading to ZyBooks
    // Create a number of temp variables to support data input and reference
    // passing (use malloc() to allocate space for structures)

    // Loop
    // Print menu options
}