#include "operation.h"
#include <iomanip>
#include <ostream>
using namespace std;

// constructor
Operation::Operation(double l, double r) : left(l), right(r) {}

// destructor
Operation::~Operation() {}

// `<<` operator
// not sure why this needs an implementation, shouldn't this be virtual, too?
// or perhaps the implementation shouldn't be in the individual classes and
// should only be here?
ostream& operator<<(ostream& out, const Operation& opr) {
  out << setprecision(2) << fixed;
  out << setw(5) << opr.left << setw(2) << opr.symbol() << setw(9) << opr.right
      << setw(2) << "=" << setw(11) << opr.perform() << endl;
  return out;
}