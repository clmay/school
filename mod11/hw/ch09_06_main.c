#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Constants & Globals

#define MAX_LEN 100   // The maximum length of the input

// Function Prototypes

bool has_comma(const char* string);
void trim(const char* source, char* destination);
int find_comma(const char* string);
void cpysubstr(const char* source, char* destination, int start, int end_excl);

// Main Function

int main(int argc, char* argv[])
{
    char option = ' ';              // User option: continue with input?
    char input[MAX_LEN];          // String to hold raw input
    char cleaned[MAX_LEN];        // String to hold cleaned input
    char first_word[MAX_LEN];     // String to hold characters before comma
    char second_word[MAX_LEN];    // String to hold characters after comma

    do
    {
        printf("Enter input string:\n");    // Prompts user for input
        fgets(input, MAX_LEN, stdin);       // Copies buffer into `input` string
        input[strlen(input) - 1] = '\0';    // Overwrites newline char with NULL char
        if (has_comma(input) == false) {
            // If there is no comma in the input, print error message
            printf("Error: No comma in string.\n\n");
        }
    } while (has_comma(input) == false);    // Continue until user enters a string containing a comma

    printf("\ninput = %s\n", input);
    trim(input, cleaned);
    printf("cleaned = %s\n", cleaned);

    // =========================================================================
    // PROBLEM CODE
    // =========================================================================

    // If this works and gives the correct result
    cpysubstr(cleaned, first_word, 0, find_comma(cleaned));
    printf("\nfirst_word = %s\n\n", first_word);
    
    // And this works and gives the correct result
    for (int i = find_comma(cleaned) + 1; i < strlen(cleaned); i++)
    {
        printf("cleaned[%d] = %c\n", i, cleaned[i]);
    }
    
    // Then why doesn't this work?
    cpysubstr(cleaned, second_word, find_comma(cleaned) + 1, strlen(cleaned));
    printf("\nsecond_word = %s\n", second_word);

    // =========================================================================
    // END PROBLEM CODE
    // =========================================================================

    return 0;
}

// Function Definitions

bool has_comma(const char* string)
// Checks string for commas, returns true if string contains at least one comma,
// returns false if string contains none
{
    bool has_comma = false;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == ',') {
            has_comma = true;
            break;
        }
    }
    return has_comma;
}

void trim(const char* source, char* destination)
// Copies the source string to the destination,
// character by character, skipping spaces
{
    int i = 0;
    int j = 0;
    while (source[i] != '\0')
    {
        if (source[i] != ' ')
        {
            destination[j] = source[i];
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    destination[j] = '\0';
}

int find_comma(const char* string)
// Returns the index of the first comma within a string,
// else returns -1 if string contains no commas
{
    int i = 0;
    while (string[i] != '\0')
    {
        if (string[i] == ',') {
            return i;
        }
        i++;
    }
    return -1;
}

void cpysubstr(const char* source, char* destination, int start, int end_excl)
// Copies a portion of the source string into the destination string,
// given a start index and an end index (which is not included)
{
    for (int i = start; i < end_excl; i++)
    {
        destination[i] = source[i];
    }
}