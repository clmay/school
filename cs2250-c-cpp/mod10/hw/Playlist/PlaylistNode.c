/*
 * =====================================================================================
 *
 *       Filename:  PlaylistNode.c
 *
 *    Description:  Playlist library functions
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *          Usage:  #include "PlaylistNode.h"
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

void CreatePlaylistNode(PlaylistNode* node,
                        char idInit[],
                        char songNameInit[],
                        char artistNameInit[],
                        int songLengthInit,
                        PlaylistNode* next)
{
    // 1) Set all string fields in thisNode to the input parameters (strcpy)
    strcpy(node->uniqueID, idInit);
    strcpy(node->songName, songNameInit);
    strcpy(node->artistName, artistNameInit);
    // 2) Set all integer fields in thisNode to the input parameters
    node->songLength = songLengthInit;
    // 3) Set the nextNodePtr field to the nextNode
    node->nextNodePtr = next;
}

void InsertPlaylistNodeAfter(PlaylistNode* node, PlaylistNode* next)
{
    PlaylistNode* tmp = NULL;
    tmp = node->nextNodePtr;
    node->nextNodePtr = next;
    next->nextNodePtr = tmp;
}

void SetNextPlaylistNodeAfter(PlaylistNode* node, PlaylistNode* next)  // It is unclear to me how this differs from "Insert"
{
    PlaylistNode* tmp = NULL;
    tmp = node->nextNodePtr;
    node->nextNodePtr = next;
    next->nextNodePtr = tmp;
}

PlaylistNode* GetNextPlaylistNode(const PlaylistNode* node)
{
    return node->nextNodePtr;
}

void PrintPlaylistNode(const PlaylistNode* node)
{
    // Print all the nodes in the list after a given node
    printf("Unique ID: %s\n", node->uniqueID);
    printf("Song Name: %s\n", node->songName);
    printf("Artist Name: %s\n", node->artistName);
    printf("Song Length (in seconds): %d\n\n", node->songLength);
}