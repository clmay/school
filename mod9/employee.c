/*
 * =====================================================================================
 *
 *       Filename:  employee.c
 *
 *    Description:  A structure for employee data
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc employee.c -o employee.out [-lm]
 *          Usage:  ./employee.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "employee.h"

// Main Function
int main(int argc, char* argv[])
{
    Employee waldo;
    Create_Employee(&waldo);
    Calc_Pay(&waldo);
    Display_Employee(&waldo);
    return 0;
}
// Function Definitions

void Create_Employee(Employee* e) {
    e->id = 1;
    e->wage = 7.50;
    e->hours = 20.00;
    e->tax_rate = TAXRATE1;
}

void Calc_Pay(Employee* e) {
    e->gross = Calc_Gross(e);
    e->net = Calc_Net(e);
}

void Display_Employee(const Employee* e) {
    printf("Employee ID: %d \t Wage: %4.2lf \t Hours worked: %4.2lf\n", e->id, e->wage, e->hours);
    printf("Gross pay: %6.2lf\n", e->gross);
    printf("Net pay: %6.2lf\n", e->net);
}

double Calc_Gross(Employee* e) {
    return e->wage * e->hours;
}

double Calc_Net(Employee* e) {
    // To access struct fields when using a pointer, use dereference operator `->`
    return (e->wage * e->hours) * (1 - e->tax_rate);
}
