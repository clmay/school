/*
 * =====================================================================================
 *
 *       Filename:  temps.c
 *
 *    Description:  Temperature analysis
 *
 *        Version:  1.0
 *        Created:  02/12/2019 08:39:17 AM
 *       Revision:  none
 *       Compiler:  gcc temps.c -o temps.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Constants
#define MIN 20
#define MAX 45
// Function Prototypes

// Main Function
int main() {

  srand(time(0)); // set random seed

  // Generate a random forecast
  int forecast_length = 10;
  printf("\nSimulating high and low temps for the next %d days.\n\n", forecast_length);

  double highs[forecast_length];
  double lows[forecast_length];
  for (int i = 0; i < forecast_length; ++i) {
    lows[i] = (rand() % MIN) + (rand() % MAX) / 2;
    highs[i] = lows[i] + (rand() % (MAX - MIN));
  }

  // Display information that was generated
  for (int i = 0; i < forecast_length; ++i) {
    printf("Forecast day %2d: high [%6.2lf], low [%6.2lf]\n", i + 1, highs[i], lows[i]);
  }

  // Calculate and display averages, min low and max high
  double avg_high = 0.0, avg_low = 0.0;
  double max_high = highs[0], min_low = lows[0];
  int day_of_max = 1, day_of_min = 1;

  for (int i = 0; i < forecast_length; ++i) {
    avg_high += highs[i];
    avg_low += lows[i];

    if (highs[i] > max_high) {
      max_high = highs[i];
      day_of_max = i + 1;
    }
    if (lows[i] < min_low) {
      min_low = lows[i];
      day_of_min = i + 1;
    }
  }
  avg_high = avg_high / forecast_length;
  avg_low = avg_low / forecast_length;
  printf("\nAverage high and low in the next %d days: high [%6.2lf], low [%6.2lf]\n", forecast_length, avg_high, avg_low);
  printf("Max high and min low in the next %d days: max [%6.2lf], min [%6.2lf]\n\n", forecast_length, max_high, min_low);
  printf("The max high is on day %d\n", day_of_max);
  printf("The min low is on day %d\n", day_of_min);

  return 0;
}
// Function Definitions
