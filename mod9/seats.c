#include <stdio.h>
#include "seats.h"

char PrintMenu() {
    char input;
    printf("Enter command:\n");
    printf("   'p' to print\n");
    printf("   'r' to reserve seat\n");
    printf("   'c' to cancel reservation\n");
    printf("   'q' to quit\n");
    scanf(" %c", &input);
    return input;
}

/*** Functions for Seat ***/
void SeatMakeEmpty(Seat* seat)
{
    //    strcpy((*seat).firstName, "empty");
    strcpy(seat->firstName, "empty");
    strcpy(seat->lastName, "empty");
    seat->amountPaid = 0;
}

bool SeatIsEmpty(Seat seat)
{
    return (strcmp(seat.firstName, "empty") == 0);
}

void SeatPrint(Seat seat)
{
    printf("%s ", seat.firstName);
    printf("%s, ", seat.lastName);
    printf("Paid: %d\n", seat.amountPaid);
}
/*** End functions for Seat ***/

/*** Functions for array of Seat ***/
void SeatsMakeEmpty(Seat seats[], int numSeats)
{
    int i;
    for (i = 0; i < numSeats; ++i)
    {
        SeatMakeEmpty(&seats[i]);
    }
}

void SeatsPrint(Seat seats[], int numSeats)
{
    int i;

    for (i = 0; i < numSeats; ++i)
    {
        printf("%d: ", i);
        SeatPrint(seats[i]);
    }
}
/*** End functions for array of Seat ***/