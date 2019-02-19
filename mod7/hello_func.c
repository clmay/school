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
void Print_Double(double num);
int Square(int num);
int Get_Int();
int Sum(int a, int b);
double Get_Double();
double Get_BMI(double kg, double m);

// Main Function
int main() {
  int num = 23;
  int num1, num2, sum;
  double weight, height, bmi;

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

  weight = Get_Double();
  height = Get_Double();
  bmi = Get_BMI(weight, height);
  Print_Double(bmi);

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

void Print_Double(double num) {
  printf("%lf\n", num);
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

double Get_Double() {
  double num;
  printf("Please enter a value: ");
  scanf("%lf", &num);
  return num;
}

double Get_BMI(double weight_kg, double height_m) {
  return weight_kg / Square(height_m);
}
