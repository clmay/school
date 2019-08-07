#include "multiplication.h"
#include "operation.h"
#include <iomanip>
#include <ostream>
using namespace std;

Multiplication::Multiplication(double l, double r)
    : Operation(l, r), left(l), right(r) {}
Multiplication::~Multiplication() {}

double Multiplication::perform() const { return left * right; }

char Multiplication::symbol() const { return '*'; }

ostream& operator<<(ostream& out, const Multiplication& opr) {
  out << setprecision(2) << fixed;
  out << setw(5) << opr.left << setw(2) << opr.symbol() << setw(9) << opr.right
      << setw(2) << "=" << setw(11) << opr.perform() << endl;
  return out;
}