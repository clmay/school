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
  // variables to store the tokens from each line
  char op;
  double lhs;
  double rhs;
  double res;

  // variable to store each line of the file
  string line;

  // file handles for input and output streams
  ifstream in_f("operations-in.txt");
  ofstream out_f("operations-out.txt");

  while (in_f >> op >> lhs >> rhs) {

    Addition* add = new Addition(lhs, rhs);
    Subtraction* sub = new Subtraction(lhs, rhs);
    Multiplication* mul = new Multiplication(lhs, rhs);
    Division* div = new Division(lhs, rhs);

    switch (op) {
    case '+':
      cout << *add;
      out_f << *add;
      break;
    case '-':
      cout << *sub;
      out_f << *sub;
      break;
    case '*':
      cout << *mul;
      out_f << *mul;
      break;
    case '/':
      cout << *div;
      out_f << *div;
      break;
    default:
      break;
    }

    delete add;
    delete sub;
    delete mul;
    delete div;
  }

  in_f.close();
  out_f.close();
  return 0;
}
