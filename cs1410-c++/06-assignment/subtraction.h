#ifndef SUBTRACTION_H
#define SUBTRACTION_H

#include "operation.h"
#include <ostream>
using namespace std;

class Subtraction : public Operation {
public:
  Subtraction(double l, double r);
  ~Subtraction();

  double perform() const;
  char symbol() const;
};

#endif