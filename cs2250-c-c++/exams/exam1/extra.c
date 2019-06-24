/*
* =====================================================================================
*
*       Filename:  extra.c
*
*    Description:  Extra credit task.
*
*        Version:  1.0
*        Created:  02/12/2019 08:39:17 AM
*       Revision:  none
*       Compiler:  gcc extra.c -o extra.out
*
*         Author:  Chase May (), chasemay@mail.weber.edu
*   Organization:  WSU
*
* =====================================================================================
*/

#include <stdio.h>

void Jamon(int num);

// Main Program
int main(int argc, char* argv[]) {
  int p;
  printf("Please enter an integer\n");
  scanf("%d", &p);
  Jamon(p);
  return 0;
}

void Jamon(int num) {
  for (int count = 0; count < num; count++) {
    printf("O jamon mio!\n");
  }
}
