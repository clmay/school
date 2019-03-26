/*
 * =====================================================================================
 *
 *       Filename:  PlaylistNode.c
 *
 *    Description:  Playlist library
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

#ifndef PLAYLISTNODE__INC__
#define PLAYLISTNODE__INC__

#include <stdio.h>
#include <stdlib.h>

#define MAX 50

typedef struct PlaylistNode_struct {
    char uniqueID[MAX];
    char songName[MAX];
    char artistName[MAX];
    int songLength;
    struct PlaylistNode_struct* next_node_ptr; // address of next node, NULL for last member
} PlaylistNode;

void CreatePlaylistNode(PlaylistNode* this_node,
                        char idInit[],
                        char songNameInit[],
                        char artistNameInit[],
                        int songLengthInit,
                        PlaylistNode* nextNode);

void InsertPlaylistNode(PlaylistNode* thisNode, PlaylistNode* nextNode);

#endif