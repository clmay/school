/*
 * =====================================================================================
 *
 *       Filename:  students.c
 *
 *    Description:  Create a dynamically allocated structure
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc students.c -o students.out [-lm]
 *          Usage:  ./students.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants & Global Vars
#define MAX 50
typedef struct Student {
    int id;
    char name[50];
} Student;

// Function Prototypes
void AddStudent(Student* student, char name[], int id);
void DisplayStudent(const Student* student);

// Main Function
int main(int argc, char* argv[]) {
    int id = 0;
    char name[MAX] = "";
    Student student;

    printf("Enter the student's first name: ");
    fgets(name, MAX, stdin);
    name[strlen(name) - 1] = '\0';
    AddStudent(&student, name, id + 1);
    DisplayStudent(&student);
    return 0;
}
// Function Definitions
void AddStudent(Student* student, char name[], int id) {
    // Initialize a Student structure
    strcpy(student->name, name);
    student->id = id;
    return;
}

void DisplayStudent(const Student* student) {
    // Display a student record
    printf("Student ID: %d - %s.\n", student->id, student->name);
}