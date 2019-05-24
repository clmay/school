// zyBooks, Chapter 5.17 (https://learn.zybooks.com/zybook/WEBERCS2250ValleSpring2019/chapter/5/section/17)
// Compile with `gcc main.c -Wall -o a.out -lm`

#include <stdio.h>

#define COUNT 5

enum option {     // These options match the options offered in the program loop
  update = 'u',
  filter = 'a',
  replace = 'r',
  roster = 'o',
  quit = 'q'
};

int main(void) {
  // Variables
  char selection;                     // User's menu selection
  int players[COUNT];                 // Array of players' jersey numbers
  int ratings[COUNT];                 // Array of players' ratings
  int jersey, new_jersey, rating;     // Temp vars (used for array member mutation)

  // Input player data
  for (int i = 0; i < COUNT; i++) {
    printf("Enter player %d's jersey number:\n", i + 1);
    scanf(" %d", &players[i]);
    printf("Enter player %d's rating:\n", i + 1);
    scanf(" %d", &ratings[i]);
    printf("\n");
  }

  printf("ROSTER\n");
  for (int i = 0; i < COUNT; i++) {
    printf("Player %d -- Jersey number: %d, Rating: %d\n", i + 1, players[i], ratings[i]);
  }
  printf("\n");

  // Run program loop
  do {
    printf("MENU\n");
    printf("u - Update player rating\n");
    printf("a - Output players above a rating\n");
    printf("r - Replace player\n");
    printf("o - Output roster\n");
    printf("q - Quit\n");
    printf("\n");
    printf("Choose an option:\n");
    scanf(" %c", &selection);
    switch (selection) {              // Based on the user's selection:
      case update:                    // Update player
        printf("Enter a jersey number:\n");
        scanf(" %d", &jersey);        // The jersey number to update
        printf("Enter a new rating for player:\n");
        scanf(" %d", &rating);        // The new rating
        for (int i = 0; i < COUNT; i++) {
          if (players[i] == jersey) { // If player i has the same jersey number
            ratings[i] = rating;      // Update the rating
          }
        }
        break;
      case filter:                    // Show players above given rating
        printf("Enter a rating: ");
        scanf(" %d", &rating);        // The rating to filter against
        printf("ABOVE %d\n", rating);
        for (int i = 0; i < COUNT; i++) {
          if (ratings[i] > rating) {  // If rating i is higher than the specified filter value,
            printf("Player %d -- Jersey number: %d, Rating: %d\n", i + 1, players[i], ratings[i]); // Then output player i's details
          }
        }
        printf("\n");
        break;
      case replace:                   // Replace data for a player
        printf("Enter a jersey number:\n");
        scanf(" %d", &jersey);        // The jersey number to replace
        printf("Enter a new jersey number:\n");
        scanf(" %d", &new_jersey);    // The new jersey number
        printf("Enter a new rating for the new player:\n");
        scanf(" %d", &rating);        // The new rating
        for (int i = 0; i < COUNT; i++) {
          if (players[i] == jersey) { // If player i matches the jersey to replace,
            players[i] = new_jersey;  // Update player i's jersey numnber to the new jersey number
            ratings[i] = rating;      // And update player i's rating to the new rating
          }
        }
        break;
      case roster:                    // Output the roster
        printf("ROSTER\n");
        for (int i = 0; i < COUNT; i++) {
          printf("Player %d -- Jersey number: %d, Rating: %d\n", i + 1, players[i], ratings[i]);
        }
        printf("\n");
        break;
      case quit:
        break;                        // Break out of the switch statement,
    }                                 // ...
  } while (selection != quit);        // And if the user selected quit, exit the loop
   return 0;
}
