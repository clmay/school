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

#define EMP_COUNT 5
#define DEFAULT_WAGE 7.50

// Main Function
int main(int argc, char* argv[]) {
    int id_counter = 1;
    Employee employees[EMP_COUNT];
    for(int i = 0; i < EMP_COUNT; i++) {
        Create_Employee(&employees[i], id_counter);
        Calc_Pay(&employees[i]);
        Display_Employee(&employees[i]);
        id_counter++;
    }
    return 0;
}