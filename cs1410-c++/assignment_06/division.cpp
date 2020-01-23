#include "division.h"
#include "operation.h"
#include <iomanip>
#include <ostream>
using namespace std;

// constructor
Division::Division(double l, double r) : Operation(l, r) {}
// destructor
Division::~Division() {}

double Division::perform() const { return left / right; }
char Division::symbol() const { return '/'; }