/*
 * =====================================================================================
 *
 *       Filename:  seek_data.c
 *
 *    Description:  Access records at a specific location
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc seek_data.c -o seek_data.out [-lm]
 *          Usage:  ./seek_data.out
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

    if((fptr = fopen("program.bin", "rb")) == NULL) { // "rb" for 'read binary'
        printf("Error! Could not open file.\n");
        exit(1);
    }
    // Move the cursor to the end of the file
    // fseek(FILE* stream, long int offset, int whence);
    // whences:
    // SEEK_SET: start the offset from beginning of file
    // SEEK_END: start the offset from the end of the file
    // SEEK_CUR: starts the offset from the current location 

    // To read data backwards (at the record level):
    fseek(fptr, -sizeof(ThreeN), SEEK_END);
    for(int n = 1; n < 5; n++) {
        fread(&nums, sizeof(ThreeN), 1, fptr);
        printf("n1: %d \t  n2: %d \t n3: %d\n", nums.n1, nums.n2, nums.n3);
        fseek(fptr, -2 * sizeof(ThreeN), SEEK_CUR);
    }
    fclose(fptr);
    return 0;
}
// Function Definitions
