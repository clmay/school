#ifndef __CONTACTNODE__INC__
#define __CONTACTNODE__INC__

#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN 50

typedef struct ContactNode
{
    char contactName[ARR_LEN];
    char contactPhoneNum[ARR_LEN];
    struct ContactNode* nextNodePtr;
} ContactNode;

void CreateContactNode(ContactNode* contact, char name[], char phone[], ContactNode* next); // Create a new ContactNode
void InsertContactAfter(ContactNode* node, ContactNode* next); // Insert a new node after node
ContactNode* GetNextContact(const ContactNode* node); // Return location pointed by nextNodePtr
void PrintContactNode(const ContactNode* node); // Print the contents of a ContactNode

#endif