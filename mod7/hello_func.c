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
void Print_Int(int num);
int Square(int num);
int Get_Int();
int Sum(int a, int b);

// Main Function
int main() {
  int num = 23;
  int num1, num2, sum;

  Hello_World();
  Print_Int(1);
  num = Square(num);
  Print_Int(num);

  num = Get_Int();
  num = Square(num);
  Print_Int(num);

  num1 = Get_Int();
  num2 = Get_Int();
  sum = Sum(num1, num2);
  Print_Int(sum);

  return 0;
}

// Function Definitions
void Hello_World() {
  printf("Hello, world!\n");
  return;
}

void Print_Int(int num) {
  printf("%d\n", num);
  return;
}

int Square(int num) {
  return num * num;
}

int Get_Int() {
  int num;
  printf("Please enter an integer: ");
  scanf("%d", &num);
  return num;
}

int Sum(int a, int b) {
  return a + b;
}
