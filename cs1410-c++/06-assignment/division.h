#ifndef DIVISION_H
#define DIVISION_H

#include "operation.h"
#include <ostream>
using namespace std;

class Division : Operation {
protected:
  double left;
  double right;

public:
  Division(double l, double r);
  ~Division();

  double perform() const;
  char symbol() const;

  friend ostream& operator<<(ostream& out, const Division& opr);
};

#endif