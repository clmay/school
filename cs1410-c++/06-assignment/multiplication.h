#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "operation.h"
#include <ostream>
using namespace std;

class Multiplication : Operation {
protected:
  double left;
  double right;

public:
  Multiplication(double l, double r);
  ~Multiplication();

  double perform() const;
  char symbol() const;

  friend ostream& operator<<(ostream& out, const Multiplication& opr);
};

#endif