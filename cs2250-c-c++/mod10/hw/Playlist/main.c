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
void OutputFullPlaylist(char name[], PlaylistNode* node);
void OutputPlaylistDuration(PlaylistNode* node);

// Main Function
int main(int argc, char* argv[])
{
    char choice = ' ';
    char playlistTitle[MAX];

    char tmpc;
    char tmps[MAX];
    int cur_pos;
    int new_pos;

    // Node variables
    char uniqueID[MAX];
    char songName[MAX];
    char artistName[MAX];
    int songLength;

    // Playlist nodes
    PlaylistNode* head = NULL;
    PlaylistNode* prev = NULL;
    PlaylistNode* curr = NULL;

    // 1) Prompt user for playlist title (use fgets() and remove EOL char)
    printf("Enter playlist's title:\n");
    fgets(playlistTitle, MAX, stdin);
    printf("\n");
    playlistTitle[strlen(playlistTitle) - 1] = '\0';

    // 2) Output playlist menu options, i.e. PrintMenu()
    do
    {
        curr = (PlaylistNode*)malloc(sizeof(PlaylistNode));
        if (curr == NULL) // Fail if allocation was not successful
        {
            printf("\nError: did not allocate memory.\n");
            exit(0);
        }
        if (prev == NULL)
        {
            head = curr; // On first iteration, save the address for the current list item
        } else
        {
            InsertPlaylistNodeAfter(prev, curr); // On following iterations, link the previous item to the current item
        }
        PrintMenu(playlistTitle);
        printf("Choose an option:\n");
        fgets(tmps, MAX, stdin);
        choice = tmps[0];
        switch (choice)
        {
            case 'a':
                printf("ADD SONG\n");

                printf("Enter song's unique ID:\n");
                fgets(uniqueID, MAX, stdin);
                uniqueID[strlen(uniqueID) - 1] = '\0';

                printf("Enter song's name:\n");
                fgets(songName, MAX, stdin);
                songName[strlen(songName) - 1] = '\0';

                printf("Enter artist's name:\n");
                fgets(artistName, MAX, stdin);
                artistName[strlen(artistName) - 1] = '\0';

                printf("Enter song's length (in seconds):\n");
                scanf("%d%c", &songLength, &tmpc);
                printf("\n");

                CreatePlaylistNode(curr, uniqueID, songName, artistName, songLength, NULL);
                
                break;
            case 'r':
                printf("REMOVE SONG\n");

                printf("Enter song's unique ID:\n");
                fgets(uniqueID, MAX, stdin);
                uniqueID[strlen(uniqueID) - 1] = '\0';

                while(node->nextNodePtr != NULL)
                {
                    if (node->uniqueID == uniqueID)
                    {
                        // TODO
                    }
                }

                printf("\"%s\" removed.", curr->songName);

                break;
            case 'c':
                printf("CHANGE POSITION OF SONG\n");

                printf("Enter song's current position: ");
                scanf("%d%c", &cur_pos, &tmpc);
                printf("Enter new position for song: ");
                scanf("%d%c", &new_pos, &tmpc);

                // TODO

                printf("\"%s\" moved to position.", curr->songName);

                break;
            case 's':
                break;
            case 't':
                OutputPlaylistDuration(head);
                break;
            case 'o':
                OutputFullPlaylist(playlistTitle, head);
                break;
            default:
                break;
        }
        prev = curr; // Update 'previous' to store the address of the current list item
    } while (choice != 'q');

    // 3)

    return 0;
}
// Function Definitions
void PrintMenu(char playlistTitle[])
{
    // Print menu options
    printf("%s PLAYLIST MENU\n", playlistTitle);
    printf("a - Add song\n");
    printf("r - Remove song\n");
    printf("c - Change position of song\n");
    printf("s - Output songs by specific artist\n");
    printf("t - Output total time of playlist (in seconds)\n");
    printf("o - Output full playlist\n");
    printf("q - Quit\n\n");
}

void OutputFullPlaylist(char name[], PlaylistNode* node)
{
    int i = 0;
    printf("%s - OUTPUT FULL PLAYLIST\n", name);
    if (node->nextNodePtr == NULL)
    {
        printf("Playlist is empty\n\n");
    }
    while(node->nextNodePtr != NULL)
    {
        printf("%d.\n", i + 1);
        PrintPlaylistNode(node);
        node = node->nextNodePtr;
        i++;
    }
}

void OutputPlaylistDuration(PlaylistNode* node)
{
    printf("OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)\n");
    int dur = 0;
    while(node->nextNodePtr != NULL)
    {
        dur += node->songLength;
        node = node->nextNodePtr;
    }
    printf("Total time: %d seconds\n", dur);
}