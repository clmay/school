#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contacts.h"

void CreateContactNode(ContactNode* contact, char name[], char phone[], ContactNode* next)
{
    // Create a new ContactNode
    strcpy(contact->contactName, name);
    strcpy(contact->contactPhoneNum, phone);
    contact->nextNodePtr = next;
}

void InsertContactAfter(ContactNode* node, ContactNode* next)
{
    // Insert a new node after node
    ContactNode* tmp = NULL;
    tmp = GetNextContact(node);
    node->nextNodePtr = next;
    next->nextNodePtr = tmp;
}

ContactNode* GetNextContact(const ContactNode* node)
{
    // Return location pointed by nextNodePtr
    return node->nextNodePtr;
}

void PrintContactNode(const ContactNode* node)
{
    // Print the contents of a ContactNode
    printf("Name: %s\n", node->contactName);
    printf("Phone number: %s\n", node->contactPhoneNum);
}