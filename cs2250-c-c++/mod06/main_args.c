/*
 * =====================================================================================
 *
 *       Filename:  main_args.c
 *
 *    Description:  Pass arguments to main()
 *
 *        Version:  1.0
 *        Created:  02/14/2019 09:17:33 AM
 *       Revision:  none
 *       Compiler:  gcc main_args.c -o main_args.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    printf("argc: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    return 0;
}
// Function Definitions


