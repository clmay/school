#include "operation.h"
#include <ostream>
using namespace std;

Operation::Operation(double l, double r) : left(l), right(r) {}
Operation::~Operation() {}

ostream& operator<<(ostream& out, const Operation& opr) { return out; }