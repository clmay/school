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
#include <stdlib.h>
#include <time.h>

// Constants

#define PERSONS 5
#define ATTRIBS 3
#define AGE     0
#define WEIGHT  1
#define HEIGHT  2

// Function Prototypes

// Main Function
int main() {
  srand(time(0));
  double people[PERSONS][ATTRIBS];

  for (int i = 0; i < PERSONS; i++) {
    for (int j = 0; j < ATTRIBS; j++) {
      if (j == AGE) {
        people[i][j] = rand() % 50; // Set the person's age: 0-50
      } else if (j == WEIGHT) {
        people[i][j] = rand() % 200; // Set the person's weight: 0-50
      } else if (j == HEIGHT) {
        people[i][j] = rand() % 200; // Set the person's height: 0-50
      }
    }
  }

  printf("Person 2 height: %lf", people[3][HEIGHT]);

  return 0;
}
// Function Definitions
