/*
 * =====================================================================================
 *
 *       Filename:  employee.h
 *
 *    Description:  Employee library
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef EMPLOYEE__INC__
#define EMPLOYEE__INC__

#include <stdio.h>
#include <stdlib.h>

// Constants & Global Vars
#define TAXRATE1 0.10
#define TAXRATE2 0.25
#define TAXRATE3 0.75

typedef struct Employee {
    int id;
    double wage;
    double hours;
    double gross;
    double net;
    double tax_rate;
} Employee;

// Function Prototypes
void Create_Employee(Employee* e, int id_num);
void Calc_Pay(Employee* e);
void Display_Employee(const Employee* e);
double Calc_Gross(Employee* e);
double Calc_Net(Employee* e); // by reference

#endif