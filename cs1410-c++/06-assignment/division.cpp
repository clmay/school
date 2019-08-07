#include "division.h"
#include "operation.h"
#include <iomanip>
#include <ostream>
using namespace std;

// constructor
Division::Division(double l, double r) : Operation(l, r), left(l), right(r) {}

// destructor
Division::~Division() {}

double Division::perform() const { return left / right; }

char Division::symbol() const { return '/'; }

// `<<` operator
// perhaps the implementation of this should only be in the base class?
ostream& operator<<(ostream& out, const Division& opr) {
  out << setprecision(2) << fixed;
  out << setw(5) << opr.left << setw(2) << opr.symbol() << setw(9) << opr.right
      << setw(2) << "=" << setw(11) << opr.perform() << endl;
  return out;
}