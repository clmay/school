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
void Print_Int(int i);
void Print_Double(double d);
int Square(int i);
int Get_Int();
int Sum(int a, int b);
double Get_Double();
double Get_BMI(double weight_kg, double height_m);

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

void Print_Int(int i) {
  printf("%d\n", i);
  return;
}

void Print_Double(double d) {
  printf("%lf\n", d);
  return;
}

int Square(int i) {
  return i * i;
}

int Get_Int() {
  int i;
  printf("Please enter an integer: ");
  scanf("%d", &i);
  return i;
}

int Sum(int a, int b) {
  return a + b;
}

double Get_Double() {
  double d;
  printf("Please enter a value: ");
  scanf("%lf", &d);
  return d;
}

double Get_BMI(double weight_kg, double height_m) {
  return weight_kg / Square(height_m);
}
