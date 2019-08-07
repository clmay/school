#include "addition.h"
#include "operation.h"
#include <iomanip>
#include <ostream>
using namespace std;

Addition::Addition(double l, double r) : Operation(l, r), left(l), right(r) {}
Addition::~Addition() {}

double Addition::perform() const { return left + right; }

char Addition::symbol() const { return '+'; }

ostream& operator<<(ostream& out, const Addition& opr) {
  out << setprecision(2) << fixed;
  out << setw(5) << opr.left << setw(2) << opr.symbol() << setw(9) << opr.right
      << setw(2) << "=" << setw(8) << opr.perform() << endl;
  return out;
}