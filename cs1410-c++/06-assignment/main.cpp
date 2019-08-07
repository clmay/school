#include "addition.h"
#include "operation.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[]) {
  // file handles for input and output streams
  ifstream in_f("operations-in.txt");
  ofstream out_f("operations-out.txt");

  // variable to store each line of the file
  string line;

  // variables to store the tokens of in each line
  char op;
  double lhs;
  double rhs;

  while (getline(in_f, line)) {
    in_f >> op >> lhs >> rhs;

    // switch (op) {
    // case '+':
    //   Addition* opr = new Addition(lhs, rhs);
    //   break;

    // default:
    //   break;
    // }

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
