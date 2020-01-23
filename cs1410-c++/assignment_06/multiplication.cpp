#include "multiplication.h"
#include "operation.h"
#include <iomanip>
#include <ostream>
using namespace std;

// constructor
Multiplication::Multiplication(double l, double r) : Operation(l, r) {}
// destructor
Multiplication::~Multiplication() {}

double Multiplication::perform() const { return left * right; }
char Multiplication::symbol() const { return '*'; }