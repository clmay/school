/*
 * =====================================================================================
 *
 *       Filename:  tele_type.c
 *
 *    Description:  First look at linked lists
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc tele_type.c -o tele_type.out [-lm]
 *          Usage:  ./tele_type.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants & Global Vars
#define MAXNAME 30
#define MAXPHONE 15

struct TeleType {
    char name[MAXNAME];
    char phone[MAXPHONE];
    struct TeleType* next; // always make the last field on the structure
};

typedef struct TeleType Tele;

// Function Prototypes
void DisplayTele(Tele* content);

// Main Function
int main(int argc, char* argv[])
{
    Tele t1 = {"Smith, John", "801-555-1234"};
    Tele t2 = {"Martinez, Tino", "801-555-5678"};
    Tele t3 = {"Weber, Waldo", "801-555-9012"};

    t1.next = &t2;
    t2.next = &t3;
    t3.next = NULL;

    DisplayTele(&t1);
    return 0;
}
// Function Definitions
void DisplayTele(Tele* content) {
    while(content != NULL) {
        printf("%-30s %-20s\n", content->name, content->phone);
        content = content->next;
    }
}

