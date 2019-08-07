#include "addition.h"
using namespace std;

Addition::Addition(double l, double r) : Operation(l, r) {}

// double Operation::perform() const = 0;
// char Operation::symbol() const = 0;

Addition::~Addition() {}

ostream& operator<<(ostream& out, const Addition &opr) {
  return out;
}