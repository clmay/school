#include <iomanip>
#include <iostream>
using namespace std;

int min(int m, int n);         // Returns the smaller of m and n
int max(int m, int n);         // Returns the larger of m and n
double avg(double sum, int n); // Arithmetic mean

int main(int argc, char const* argv[]) {
  int input = 0;
  int count = 0;
  int total = 0;
  double average = 0.0;
  int lowest;  // Uninitialized because it is assigned a value later
  int highest; // Uninitialized because it is assigned a value later

  // This will loop until the user enters -1
  while (true) {
    cout << "Enter an integer between 1 and 100 (-1 to terminate):" << endl;
    cin >> input;
    if (input == -1) // -1 is the value that user enters to break the loop
    {
      break;
    }
    if (input < 1 || input > 100) {
      // We asked the user to only enter integers between 1 and 100
      // Otherwise, we remind them of the restriction
      cout << "Invalid integer; must be between 1 and 100." << endl;
    } else {
      if (count == 0)
      // If this is the first run of the loop, then we don't have values to
      // compare the input against, yes. So we set `lowest` and `highest` to
      // the user's first input for future comparison.
      {
        lowest = highest = input;
      } else
      // Otherwise, since both variables are ready if `count > 0`, we go ahead
      // and use the comparison logic to get an update value on successive
      // inputs.
      {
        lowest = min(input, lowest);
        highest = max(input, highest);
      }
      // We want to keep track of the sum of inputs for the
      // average calculation later.
      total += input;
      // And we also want to increment the count every time
      // the loop completes, for the same reason.
      count++;
    }
  }
  // Oh, hello. I see you made it out of the loop. Afterwards, we just compute
  // some data about the user's inputs, display the results, and exit.
  average = avg(total, count);
  cout << setw(6) << "Count" << setw(9) << "Minimum" << setw(9) << "Maximum"
       << setw(9) << "Average" << endl;
  cout << setw(6) << count << setw(9) << lowest << setw(9) << highest << setw(9)
       << average << endl;
  return 0;
}

int min(int m, int n) {
  return m < n ? m : n; // Returns the smaller of m and n
}

int max(int m, int n) {
  return m > n ? m : n; // Returns the larger of m and n
}

double avg(double sum, int n) {
  return sum / n; // Computes the arithmetic mean
}