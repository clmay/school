/*
 * =====================================================================================
 *
 *       Filename:  write_bin.c
 *
 *    Description:  Write to a binary file
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc write_bin.c -o write_bin.out [-lm]
 *          Usage:  ./write_bin.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants & Global Vars
typedef struct threeNumbers {
    int n1;
    int n2;
    int n3;
} ThreeN;

// Function Prototypes

// Main Function
int main(int argc, char* argv[]) {
    FILE *fptr;
    int num;
    ThreeN nums;

    if((fptr = fopen("program.bin", "wb")) == NULL) { // "wb" for 'write binary'
        printf("Error! Could not open file.\n");
        exit(1);
    }
    for(int n = 1; n < 5; n++) {
        nums.n1 = n;
        nums.n2 = 5 * n;
        nums.n3 = 5 * n + 1;
        // To write binary data, use `fwrite()`
        // fwrite(address, size, number, pointer to file);
        fwrite(&nums, sizeof(ThreeN), 1, fptr);
    }
    fclose(fptr);
    return 0;
}