/*
 * =====================================================================================
 *
 *       Filename:  grades.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc grades.c -o grades.out [-lm]
 *          Usage:  ./grades.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> // malloc(), exit(), free()

// Constants & Global Vars

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int num_grades;
    int* grades;
    printf("Enter the number of grades to process: ");
    scanf("%d", &num_grades);
    // Request memory
    grades = (int*)malloc(num_grades * sizeof(int));
    int* grades2 = (int*)malloc(num_grades * sizeof(int));
    printf("\nThe address of `grades`  is at %p.\n", grades);
    printf("`grades`  is a total of %ld bytes.\n\n", num_grades * sizeof(int));
    printf("The address of `grades2` is at %p.\n", grades2);
    printf("`grades2` is a total of %ld bytes.\n\n", num_grades * sizeof(int));
    // Check that valid address was returned
    if (grades == NULL) {
        printf("\nError: did not allocate memory.\n");
        exit(0);
    }
    // Populate the array
    for(int i = 0; i < num_grades; i++) {
        printf("Enter a grade: ");
        scanf("%d", &grades[i]);
    }
    // Display the array
    printf("\nThe grades you entered:\n");
    for(int i = 0; i < num_grades; i++) {
        if (i == num_grades - 1) {
            printf("%d", grades[i]);
        } else {
            printf("%d, ", grades[i]);
        }
    }
    printf("\n");
    free(grades);
    return 0;
}

// Function Definitions
