#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "operation.h"
#include <ostream>
using namespace std;

class Multiplication : public Operation {
public:
  Multiplication(double l, double r);
  ~Multiplication();

  double perform() const;
  char symbol() const;
};

#endif