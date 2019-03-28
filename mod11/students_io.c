/*
 * =====================================================================================
 *
 *       Filename:  students_io.c
 *
 *    Description:  Create and read student records from file
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc students_io.c -o students_io.out [-lm]
 *          Usage:  ./students_io.out
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
void writeStudentData(FILE* fout, int count);
void readStudentData(FILE* fout, int count);

// Main Function
int main(int argc, char* argv[]) {
    int num;
    FILE* fptr;

    printf("Enter the number of students.\n");
    scanf("%d", &num);
    if ((fptr = fopen("students.txt", "w")) == NULL) {
        printf("Error! Could not open file.\n");
        exit(1);
    }
    fclose(fptr);
    writeStudentData(fptr, num);
    if ((fptr = fopen("students.txt", "r")) == NULL) {
        printf("Error! Could not open file.\n");
        exit(1);
    }
    readStudentData(fptr, num);
    fclose(fptr);
    return 0;
}

// Function Definitions
void writeStudentData(FILE* fout, int count) {
    char name[50];
    int grade;
    for (int i = 0; i < count; i++) {
        printf("\nFor student %d\nEnter name: ", i + 1);
        scanf("%s", name);
        printf("Enter grade: ");
        scanf(" %d", &grade);
        fprintf(fout, "%s %d\n", name, grade);
    }
}

void readStudentData(FILE* fout, int count) {
    char name[50];
    int grade;
    for (int i = 0; i < count; i++) {
        fscanf(fout, "%s %d", name, &grade);
        printf("Student %i: %s has grade %d\n", i, name, grade);
    }
}