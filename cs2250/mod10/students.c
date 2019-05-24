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
    struct Student* next;
} Student;

// Function Prototypes
void CreateStudent(Student* student, char name[], int id);
void LinkStudents(Student* curr_student, Student* next_student);
void DisplayStudent(const Student* student);

// Main Function
int main(int argc, char* argv[]) {
    int id = 1;
    char name[MAX] = "";
    char choice = 'y';
    char tmp;
    Student* head = NULL;
    Student* curr = NULL;
    Student* next = NULL;

    while(choice == 'y'){
        next = (Student*)malloc(sizeof(Student));
        if (curr == NULL) {
            head = next;
        } else {
            LinkStudents(curr, next);
        }
        printf("\nEnter the student's first name: ");
        fgets(name, MAX, stdin);
        name[strlen(name) - 1] = '\0';
        CreateStudent(next, name, id);
        printf("Would you like to enter another student record? y/n ");
        scanf(" %c%c", &choice, &tmp);
        curr = next;
        id++;
    }
    printf("\n");
    curr = head;
    while (curr != NULL) {
        DisplayStudent(curr);
        curr = curr->next;
    }

    return 0;
}
// Function Definitions
void CreateStudent(Student* student, char name[], int id) {
    // Initialize a Student structure
    strcpy(student->name, name);
    student->id = id;
    student->next = NULL;
    return;
}

void LinkStudents(Student* current, Student* next) {
    // Link one student structure to the next
    current->next = next;
}

void DisplayStudent(const Student* student) {
    // Display a student record
    printf("Student ID: %d - %s.\n", student->id, student->name);
}