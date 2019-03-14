/*
 * =====================================================================================
 *
 *       Filename:  seats.h
 *
 *    Description:  Seats library
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#ifndef SEATS__INC__
#define SEATS__INC__

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct Seat_struct
{
    char firstName[50];
    char lastName[50];
    int amountPaid;
} Seat;

void SeatMakeEmpty(Seat* seat); // pass by reference
bool SeatIsEmpty(Seat seat); // pass by value
void SeatPrint(Seat seat); // pass by value
void SeatsMakeEmpty(Seat seats[], int numSeats); // pass by reference to array
void SeatsPrint(Seat seats[], int numSeats);// pass by reference to array

#endif