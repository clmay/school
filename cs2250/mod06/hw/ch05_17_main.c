// zyBooks, Chapter 5.16 (https://learn.zybooks.com/zybook/WEBERCS2250ValleSpring2019/chapter/5/section/16)
// Compile with `gcc main.c -Wall -o a.out -lm`

#include <stdio.h>

// Constants
#define COUNT 5

int main(void) {
  // Declare variables
  double weights[COUNT];
  double sum = 0.0;
  double avg = 0.0;
  double max = 0.0;

  // Take inputs
  for (int i = 0; i < COUNT; i++) {
    printf("Enter weight %d:\n", i + 1);
    scanf("%lf", &weights[i]);
  }

  // Output weights
  printf("You entered: ");
  for (int i = 0; i < COUNT; i++) {
    printf("%lf ", weights[i]); // Outputs the current item
    sum += weights[i];          // Add the current item to the sum of items so far
    if (max < weights[i]) {     // If current max is less than the current item,
      max = weights[i];         // Update max to reflect new value
    }
  }

  // Output calculated values
  printf("\n\nTotal weight: %lf\n", sum);
  avg = sum / COUNT;
  printf("Average weight: %lf\n", avg);
  printf("Max weight: %lf\n", max);
  return 0;
}
