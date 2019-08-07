#include "addition.h"
#include "division.h"
#include "multiplication.h"
#include "operation.h"
#include "subtraction.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[]) {
  // file handles for input and output streams
  ifstream in_f("operations-in.txt");
  ofstream out_f("operations-out.txt");

  // variables to store the tokens from each line in the input file
  char op;
  double lhs;
  double rhs;
  double res;

  while (in_f >> op >> lhs >> rhs) {

    // initialize objects
    Addition* add = new Addition(lhs, rhs);
    Subtraction* sub = new Subtraction(lhs, rhs);
    Multiplication* mul = new Multiplication(lhs, rhs);
    Division* div = new Division(lhs, rhs);

    // based on the `op` token, representing the input line's operator
    switch (op) {
    // if it's a '+', then use the `add` object to write the output
    case '+':
      cout << *add;
      out_f << *add;
      break;
    // if it's a '-', then use the `sub` object to write the output
    case '-':
      cout << *sub;
      out_f << *sub;
      break;
    // if it's a '*', then use the `mul` object to write the output
    case '*':
      cout << *mul;
      out_f << *mul;
      break;
    // if it's a '/', then use the `div` object to write the output
    case '/':
      cout << *div;
      out_f << *div;
      break;
    default:
      break;
    }

    // clean up objects
    delete add;
    delete sub;
    delete mul;
    delete div;
  }

  // clean up file handless
  in_f.close();
  out_f.close();
  return 0;
}
