/*
 * =====================================================================================
 *
 *       Filename: people.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  02/12/2019 08:39:17 AM
 *       Revision:  none
 *       Compiler:  gcc people.c -o people.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h>   // time()

// Constants

#define PERSONS 5
#define ATTRIBS 3
#define AGE     0
#define WEIGHT  1
#define HEIGHT  2

// Function Prototypes

// Main Function
int main() {
  
  double people[PERSONS][ATTRIBS];        // Two-dimensional array, [rows][columns]
  srand(time(0));                         // Random seed

  for (int person = 0; person < PERSONS; person++) {     // Loop over first dimension of array
    for (int attrib = 0; attrib < ATTRIBS; attrib++) {   // Loop over second dimension
      if (attrib == AGE) {
        people[person][attrib] = rand() % 50;       // Set the person's age: 0-50
      } else if (attrib == WEIGHT) {
        people[person][attrib] = rand() % 200;      // Set the person's weight: 0-50
      } else if (attrib == HEIGHT) {
        people[person][attrib] = rand() % 200;      // Set the person's height: 0-50
      }
    }
  }

  for (int person = 0; person < PERSONS; person++) {
    printf("Person %d:\n", person + 1);
    for (int attrib = 0; attrib < ATTRIBS; attrib++) {
      switch (attrib) {
        case AGE:
          printf("\tAge is: %3.0lf years\n", people[person][attrib]);
          break;
        case HEIGHT:
          printf("\tAge is: %6.2lf cm\n", people[person][attrib]);
          break;
        case WEIGHT:
          printf("\tAge is: %6.2lf kg\n", people[person][attrib]);
          break;
      }
    }
  }

  return 0;
}
// Function Definitions
