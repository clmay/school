#include "operation.h"
using namespace std;

Operation::Operation(double l, double r) : left(l), right(r) {}

// double Operation::perform() const = 0;
// char Operation::symbol() const = 0;

Operation::~Operation() {}

ostream& operator<<(ostream& out, const Operation &opr) {
  return out;
}