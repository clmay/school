#include "subtraction.h"
#include "operation.h"
#include <iomanip>
#include <ostream>
using namespace std;

// constructor
Subtraction::Subtraction(double l, double r) : Operation(l, r) {}
// destructor
Subtraction::~Subtraction() {}

double Subtraction::perform() const { return left - right; }
char Subtraction::symbol() const { return '-'; }