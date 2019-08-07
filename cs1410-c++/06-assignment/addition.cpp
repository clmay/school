#include "addition.h"
#include "operation.h"
#include <ostream>
using namespace std;

Addition::Addition(double l, double r) : Operation(l, r) {}
Addition::~Addition() {}

double Addition::perform() const { return left + right; }

char Addition::symbol() const { return '+'; }

ostream& operator<<(ostream& out, const Addition& opr) {
  out << endl;
  return out;
}