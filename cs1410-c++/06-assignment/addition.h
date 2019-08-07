#ifndef ADDITION_H
#define ADDITION_H

#include "operation.h"
#include <iostream>
using namespace std;

class Addition : Operation {
protected:
  double left;
  double right;

public:
  Addition(double l, double r);
  ~Addition();

  double perform() const;
  char symbol() const;

  friend ostream& operator<<(ostream& out, const Addition& opr);
};

#endif