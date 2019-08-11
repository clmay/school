#ifndef DIVISION_H
#define DIVISION_H

#include "operation.h"
#include <ostream>
using namespace std;

class Division : public Operation {
public:
  Division(double l, double r);
  ~Division();

  double perform() const;
  char symbol() const;
};

#endif