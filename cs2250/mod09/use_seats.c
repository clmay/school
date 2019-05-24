/*
 * =====================================================================================
 *
 *       Filename:  use_seats.c
 *
 *    Description:  Use the 'seats' library
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc use_seats.c seats.c -o use_seats.out [-lm]
 *          Usage:  ./use_seats.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "seats.h"

// Constats & globals
const int NUM_SEATS = 5;

int main(void)
{
    char userKey = '-';
    int seatNum = 0;
    Seat allSeats[NUM_SEATS];
    Seat currSeat;
    // Initialize empty array
    SeatsMakeEmpty(allSeats, NUM_SEATS);

    while (userKey != 'q') {
        userKey = PrintMenu();

        if (userKey == 'p') { // Print seats
            SeatsPrint(allSeats, NUM_SEATS);
            printf("\n");
        }
        else if (userKey == 'r') { // Reserve seat
            printf("Enter seat num: \n");
            scanf("%d", &seatNum);

            // Ensure seat is available
            if (!SeatIsEmpty(allSeats[seatNum]))
            {
                // If seat is taken
                printf("Seat not empty.\n\n");
            }
            else
            {
                // If seat is vacant
                printf("Enter first name: \n");
                scanf("%s", currSeat.firstName);
                printf("Enter last name: \n");
                scanf("%s", currSeat.lastName);
                printf("Enter amount paid (whole $): \n");
                scanf("%d", &currSeat.amountPaid);

                // Set the value of a single array member to the values of the
                // current seat
                allSeats[seatNum] = currSeat;

                printf("Completed.\n\n");
            }
        }
        else if (userKey == 'c') { // Cancel a reservation
            printf("Enter seat num: \n");
            scanf("%d", &seatNum);
            if (!SeatIsEmpty(allSeats[seatNum])) {
                SeatMakeEmpty(&allSeats[seatNum]);
            } else {
                printf("Seat is empty.\n\n");
            }
        }
        else if (userKey == 'q')
        { // Quit
            printf("Quitting.\n");
        }
        else
        {
            printf("Invalid command.\n\n");
        }
    } // end while

    return 0;
}