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

typedef struct TeleType_struct {
    char name[MAXNAME];
    char phone[MAXPHONE];
} Tele;
// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    Tele t1 = {"Smith, John", "801-555-1234"};
    Tele t2 = {"Martinez, Tino", "801-555-5678"};
    Tele t3 = {"Weber, Waldo", "801-555-9012"};
    Tele* first; // pointer to structure address
    first = &t1;
 // printf("%s\n%s\n", (*first).name, (*first).phone);
    printf("%s\n%s\n", first->name, first->phone);
    return 0;
}
// Function Definitions


