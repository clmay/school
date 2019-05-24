/*
 * =====================================================================================
 *
 *       Filename:  read_bin.c
 *
 *    Description:  Read from a binary file
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc read_bin.c -o read_bin.out [-lm]
 *          Usage:  ./read_bin.out
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
    FILE* fptr;
    int num;
    ThreeN nums;

    if ((fptr = fopen("program.bin", "rb")) == NULL) { // "rb" for 'read binary'
        printf("Error! Could not open file.\n");
        exit(1);
    }
    for (int n = 1; n < 5; n++) {
        // To read binary data, use `fread()`
        // fread(address, size, number, pointer to file);
        fread(&nums, sizeof(ThreeN), 1, fptr);
        printf("n1: %d \t  n2: %d \t n3: %d\n", nums.n1, nums.n2, nums.n3);
    }
    fclose(fptr);
    return 0;
}