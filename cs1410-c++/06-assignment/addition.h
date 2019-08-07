#ifndef ADDITION_H
#define ADDITION_H

#include <fstream>
#include "operation.h"
using namespace std;

class Addition : Operation {
protected:
  double left;
  double right;

public:
  Addition(double l, double r);
  double perform() const = 0;
  char symbol() const = 0;
  friend ostream& operator<<(ostream& out, const Addition &opr);
  ~Addition();
};

#endif