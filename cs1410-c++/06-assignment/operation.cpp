#include "operation.h"
#include <iomanip>
#include <ostream>
using namespace std;

Operation::Operation(double l, double r) : left(l), right(r) {}
Operation::~Operation() {}

ostream& operator<<(ostream& out, const Operation& opr) {
  out << setprecision(2) << fixed;
  out << setw(5) << opr.left << setw(2) << opr.symbol() << setw(9) << opr.right
      << setw(2) << "=" << setw(11) << opr.perform() << endl;
  return out;
}