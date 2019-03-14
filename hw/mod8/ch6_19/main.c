#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 400

char PrintMenu();
int GetNumOfNonWSCharacters(const char str[]);
int GetNumOfWords(const char str[]);
void FixCapitalization(char str[]);
void ReplaceExclamation(char str[]);
void ShortenSpace(char str[]);

int main(int argc, char const *argv[])
{
    char input[MAX_SIZE];
    char choice = ' ';
    printf("Enter a sample text:\n");
    fgets(input, MAX_SIZE, stdin);
    printf("\nYou entered: %s", input);
    int non_ws_char_count = GetNumOfNonWSCharacters(input);
    int num_words = GetNumOfWords(input);
    do {
        choice = PrintMenu();
        switch (choice) {
            case 'q':
                break;
            case 'c':
                printf("Number of non-whitespace characters: %d\n", non_ws_char_count);
                break;
            case 'w':
                printf("Number of words: %d\n", num_words);
                break;
            case 'f':
                FixCapitalization(input);
                printf("Edited text: %s", input);
                break;
            case 'r':
                ReplaceExclamation(input);
                printf("Edited text: %s", input);
                break;
            case 's':
                ShortenSpace(input);
                printf("Edited text: %s", input);
                break;
            default:
                break;
        }
    } while (choice != 'q');
    return 0;
}

char PrintMenu() {
    char input;
    printf("\nMENU\n");
    printf("c - Number of non-whitespace characters\n");
    printf("w - Number of words\n");
    printf("f - Fix capitalization\n");
    printf("r - Replace all !'s\n");
    printf("s - Shorten spaces\n");
    printf("q - Quit\n\n");
    printf("Choose an option:\n");
    scanf(" %c", &input);
    return input;
}

int GetNumOfNonWSCharacters(const char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (  str[i] != ' '
           && str[i] != '\t'
           && str[i] != '\n'
           ) {
            count++;
        }
    }
    return count;
}

int GetNumOfWords(const char str[]) {
    int count = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && isalpha(str[i + 1])) {
            count++;
        }
    }
    return count;
}

void FixCapitalization(char str[]) {
    if (isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }
    for (int i = 1; str[i] != '\0'; i++) {
        for(int j = 0; str[j] != '\0'; j++) {
            if (str[i] == '.' && isalpha(str[i + j])) {
                str[i + j] = toupper(str[i + j]);
                break;
            }
        }
    }
}

void ReplaceExclamation(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '!') {
            str[i] = '.';
        }
    }
}

void ShortenSpace(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            for (int j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
        }
    }
}