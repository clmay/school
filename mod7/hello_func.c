/*
* =====================================================================================
*
*       Filename:  hello_func.c
*
*    Description:  Practice functions.
*
*        Version:  1.0
*        Created:  02/12/2019 08:39:17 AM
*       Revision:  none
*       Compiler:  gcc hello_func.c -o hello_func.out
*
*         Author:  Chase May (), chasemay@mail.weber.edu
*   Organization:  WSU
*
* =====================================================================================
*/

#include <stdio.h>

// Constants

// Function Prototypes
void Hello_World();
void Hello_Number(int num);
int Get_Square(int num);
int Get_Number();

// Main Function
int main() {
  int num = 23;

  Hello_World();
  Hello_Number(1);
  num = Get_Square(num);
  Hello_Number(num);

  num = Get_Number();
  num = Get_Square(num);
  Hello_Number(num);

  return 0;
}

// Function Definitions
void Hello_World() {
  printf("Hello World\n");
  return;
}

void Hello_Number(int num) {
  printf("Hello %d number\n", num);
  return;
}

int Get_Square(int num) {
  int square;
  square = num * num;
  return square;
}

int Get_Number() {
  int num;
  printf("Please enter an integer: ");
  scanf("%d", &num);
  return num;
}
