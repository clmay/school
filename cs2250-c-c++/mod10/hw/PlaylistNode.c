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
#include "PlaylistNode.h"

void CreatePlaylistNode(PlaylistNode* this_node,
                        char idInit[],
                        char songNameInit[],
                        char artistNameInit[],
                        int songLengthInit,
                        PlaylistNode* nextNode) {
    // 1) Set all string fields in thisNode to the input parameters (strcpy)
    // 2) Set all integer fields in thisNode to the input parameterss
    // 3) Set the nextNodePtr field to the nextNode

}

void InsertPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* nextNode) {
    // Set the nextNodePtr field of thisNode to nextNode
    PlaylistNode* tmp = NULL;
    tmp = thisNode->nextNodePtr;
    thisNode->nextNodePtr = nextNode;
    nextNode->nextNodePtr = tmp;
}

void SetNextPlaylistNodeAfter(PlaylistNode* thisNode, PlaylistNode* nextNode) {
    // Set thisNode->nextNodePtr to nextNode
}

PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode) {
    // Return thisNode->nextNodePtr (the next node in the list)
    return thisNode;
}

void PrintListNode(PlaylistNode* thisNode) {
    // Print all the nodes in the list after a given node
}