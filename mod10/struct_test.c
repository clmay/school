/*
 * =====================================================================================
 *
 *       Filename:  struct_test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc struct_test.c -o struct_test.out [-lm]
 *          Usage:  ./struct_test.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants & Global Vars
typedef struct Test_struct {
    int id;
    double* pay; // store an address of a double
} Test;

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    Test emp;
    double amt = 567.89;
    emp.id = 12345;
    emp.pay = &amt;
    printf("Employee #%d was paid $%6.2lf.\n", emp.id, *emp.pay);
    return 0;
}
// Function Definitions


