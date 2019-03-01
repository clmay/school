/*
 * =====================================================================================
 *
 *       Filename:  template.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:03:59 AM
 *       Revision:  none
 *       Compiler:  gcc template.c -o template.out [-lm]
 *          Usage:  ./template.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Constants
const int INPUT_SIZE = 50;

// Function Prototypes
void str_space_to_hyphen(char input_str[]);
void str_to_lowercase(char input_str[]);
void str_to_uppercase(char input_str[]);

// Main Function
int main(int argc, char* argv[])
{
    char user_input[INPUT_SIZE];
    printf("Enter a string with spaces: ");
    fgets(user_input, INPUT_SIZE, stdin);
    user_input[strlen(user_input) - 1] = '\0'; // set last char to NULL char
    str_space_to_hyphen(user_input);
    printf("With hyphens: %s\n", user_input);
    
    // for (int i = 0; i < strlen(user_input); i++) {
    //     printf("%d char is %c\n", i + 1, user_input[i]);
    // }
    
    return 0;
}
// Function Definitions
void str_space_to_hyphen(char input_str[]) {
    for (int i = 0; i < strlen(input_str); i++) {
        if (input_str[i] == ' ') {
            input_str[i] = '-';
        }
    }
    return;
}

void str_to_lowercase(char input_str[]) {
    for (int i = 0; i < strlen(input_str); i++) {
        if (islower(input_str[i])) {
            input_str[i] = '-';
        }
    }
}

void str_to_uppercase(char input_str[]) {
    for (int i = 0; i < strlen(input_str); i++) {
        if (isupper(input_str[i])) {
            input_str[i] = '-';
        }
    }
}