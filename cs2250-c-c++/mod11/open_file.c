/*
 * =====================================================================================
 *
 *       Filename:  open_file.c
 *
 *    Description:  Read from a file
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc open_file.c -o open_file.out [-lm]
 *          Usage:  ./open_file.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants & Global Vars

// Function Prototypes

// Main Function
int main(int argc, char* argv[]) {
    FILE* fptr;
    int num;

    if ((fptr = fopen("program.txt", "r")) == NULL) {
        printf("Error! Could not open file.\n");
        exit(1);
    }
    fclose(fptr);
    return 0;
}

// Function Definitions
