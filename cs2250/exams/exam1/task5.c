/*
* =====================================================================================
*
*       Filename:  task5.c
*
*    Description:  Determine if a given year is a leap year.
*
*        Version:  1.0
*        Created:  02/12/2019 08:39:17 AM
*       Revision:  none
*       Compiler:  gcc task5.c -o task5.out
*
*         Author:  Chase May (), chasemay@mail.weber.edu
*   Organization:  WSU
*
* =====================================================================================
*/

#include <stdio.h>

// Constants

// Function Prototypes

int IsLeap(int year);

// Main Function

int main() {
  for (int i = 2000; i < 2020; i++) {
    if (IsLeap(i)) {
      printf("%d is a leap year\n", i);
    }
  }
  return 0;
}

// Function Definitions

int IsLeap(int year) {
  if (year % 400 == 0) {
    return 1;
  } else if (year % 100 == 0) {
    return 0;
  } else if (year % 4 == 0) {
    return 1;
  } else {
    return 0;
  }
}
