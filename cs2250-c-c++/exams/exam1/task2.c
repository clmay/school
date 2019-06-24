/*
* =====================================================================================
*
*       Filename:  task2.c
*
*    Description:  Compute average grade and number of failures from user input.
*
*        Version:  0.1.0
*        Created:  02/12/2019 08:39:17 AM
*       Revision:  none
*       Compiler:  gcc task2.c -o task2.out
*
*         Author:  Chase May (), chasemay@mail.weber.edu
*   Organization:  WSU
*
* =====================================================================================
*/

#include <stdio.h>

// Constants

// Function Prototypes

int Calculate();                      // takes no args, returns an int

// Main Function

int main() {
  int num_failures = Calculate();
  printf("Number of failures = %d\n", num_failures);
  return 0;
}

// Function Definitions

int Calculate() {
  int count = 0;                      // how many grades will be entered
  int fails = 0;                      // the number of failing grades
  double grade = 0.0;                 // the current grade
  double total = 0.0;                 // total of all scores entered
  do {
    printf("How many grades will you be entering? ");
    scanf(" %d", &count);
  } while (count == 0);
  for (int i = 0; i < count; i++) {
    printf("Enter grade #%d: ", i + 1);
    scanf(" %lf", &grade);
    total += grade;
    if (grade < 65.0) {
      fails++;
    }
  }
  printf("\nGrade average = %4.2lf\n\n", total / count);
  return fails;
}
