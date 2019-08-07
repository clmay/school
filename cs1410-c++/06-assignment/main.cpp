#include "addition.h"
// #include "division.h"
// #include "multiplication.h"
#include "operation.h"
// #include "subtraction.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[]) {
  // variables to store the tokens from each line
  char op;
  double lhs;
  double rhs;
  double res;

  Addition* add = new Addition(lhs, rhs);
  // Subtraction* sub = new Subtraction(lhs, rhs);
  // Multiplication* mul = new Multiplication(lhs, rhs);
  // Division* div = new Division(lhs, rhs);

  // variable to store each line of the file
  string line;

  // file handles for input and output streams
  ifstream in_f("operations-in.txt");
  ofstream out_f("operations-out.txt");
  while (getline(in_f, line)) {
    in_f >> op >> lhs >> rhs;

    switch (op) {
    case '+':
      break;
    default:
      break;
    }

    // assignment requires printing each line to stdout
    cout << setprecision(2) << fixed;
    cout << setw(5) << lhs << setw(2) << op << setw(9) << rhs << setw(2) << "="
         << setw(8) << "Total" << endl;

    // assignment requires outputting each line to the file, too
    out_f << setprecision(2) << fixed;
    out_f << setw(5) << lhs << setw(2) << op << setw(9) << rhs << setw(2) << "="
          << setw(8) << "Total" << endl;
  }

  in_f.close();
  out_f.close();
  return 0;
}
