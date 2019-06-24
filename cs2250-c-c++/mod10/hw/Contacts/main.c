#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contacts.h"

#define ARR_LEN 50
#define COUNT 3

void OutputContactList(ContactNode* contact);

int main(int argc, char const *argv[])
{
    char name[ARR_LEN];
    char phone[ARR_LEN];
    ContactNode* head = NULL;
    ContactNode* prev = NULL;
    ContactNode* curr = NULL;

    for (int i = 0; i < COUNT; i++)
    {
        curr = (ContactNode*)malloc(sizeof(ContactNode));
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
            InsertContactAfter(prev, curr); // On following iterations, link the previous item to the current item
        }
        
        printf("Person %d\n", i + 1);

        printf("Enter name:\n");
        fgets(name, ARR_LEN, stdin);
        name[strlen(name) - 1] = '\0';

        printf("Enter phone number:\n");
        fgets(phone, ARR_LEN, stdin);
        phone[strlen(phone) - 1] = '\0';

        CreateContactNode(curr, name, phone, NULL);
        printf("You entered: %s, %s\n\n", curr->contactName, curr->contactPhoneNum);

        prev = curr; // Update 'previous' to store the address of the current list item
    }
    OutputContactList(head);
    free(curr);
    return 0;
}

void OutputContactList(ContactNode* contact)
{
    printf("CONTACT LIST\n");
    while(contact != NULL)
    {
        printf("Name: %s\n", contact->contactName);
        printf("Phone number: %s\n\n", contact->contactPhoneNum);
        contact = contact->nextNodePtr;
    }
}