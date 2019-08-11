#ifndef ADDITION_H
#define ADDITION_H

#include "operation.h"
#include <ostream>
using namespace std;

class Addition : public Operation {
public:
  Addition(double l, double r);
  ~Addition();

  double perform() const;
  char symbol() const;
};

#endif