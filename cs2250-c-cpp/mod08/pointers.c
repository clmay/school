/*
* =====================================================================================
*
*       Filename:  pointers.c
*
*    Description:  Learn about pointers
*
*        Version:  1.0
*        Created:  02/12/2019 08:39:17 AM
*       Revision:  none
*       Compiler:  gcc pointers.c -o pointers.out
*
*         Author:  Chase May (), chasemay@mail.weber.edu
*   Organization:  WSU
*
* =====================================================================================
*/

#include <stdio.h>

// Constants

// Function Prototypes

void print_val(int num, const int* p_num);

// Main Function
int main() {
  int i = 7;
  int* p_i = &i; // can store address of integer variables

  print_val(i, p_i);
  *p_i = 99; // use dereference operator
  print_val(i, p_i);

  return 0;
}
// Function Definitions

// Print the values of an int and int*
void print_val(int num, const int* p_num) {
  printf("Values: int = %d, int* = %d\n", num, *p_num);
  return;
}