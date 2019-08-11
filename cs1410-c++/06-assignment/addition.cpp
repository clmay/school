#include "addition.h"
#include "operation.h"
#include <iomanip>
#include <ostream>
using namespace std;

// constructor
Addition::Addition(double l, double r) : Operation(l, r) {}
// destructor
Addition::~Addition() {}

double Addition::perform() const { return left + right; }
char Addition::symbol() const { return '+'; }