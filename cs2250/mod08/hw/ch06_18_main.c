#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int GetNumOfCharacters(const char str[]);
void OutputWithoutWhitespace(const char str[]);

int main(void) {
   char str[MAX_SIZE];
   printf("Enter a sentence or phrase:\n");
   fgets(str, MAX_SIZE, stdin);
   printf("\nYou entered: %s\n\n", str);
   int length = GetNumOfCharacters(str);
   printf("Number of characters: %d\n", length);
   OutputWithoutWhitespace(str);
   return 0;
}

// Returns the number of characters in a string
int GetNumOfCharacters(const char str[]) {
   int count = 0;
   while (count < strlen(str)) {
      count++;
   }
   return count;
}

// Strips spaces and tabs from input
void OutputWithoutWhitespace(const char str[]) {
   char result[MAX_SIZE];
   int j = 0;
   for(int i = 0; str[i] != '\0'; i++) {
      if (str[i] != ' ' && str[i] != '\t') {
         result[j] = str[i];
         j++;
      }
   }
   printf("String with no whitespace: %s\n", result);
}