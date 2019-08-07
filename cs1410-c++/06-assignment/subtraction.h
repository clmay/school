#ifndef SUBTRACTION_H
#define SUBTRACTION_H

#include "operation.h"
#include <ostream>
using namespace std;

class Subtraction : Operation {
protected:
  double left;
  double right;

public:
  Subtraction(double l, double r);
  ~Subtraction();

  double perform() const;
  char symbol() const;

  friend ostream& operator<<(ostream& out, const Subtraction& opr);
};

#endif