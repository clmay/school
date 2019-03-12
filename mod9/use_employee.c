/*
 * =====================================================================================
 *
 *       Filename:  use_employee.c
 *
 *    Description:  Use the employee library
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc use_employee.c employee.c -o use_employee.out [-lm]
 *          Usage:  ./use_employee.out
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