#ifndef OPERATION_H
#define OPERATION_H

#include <ostream>
using namespace std;

class Operation {
protected:
  double left;
  double right;

public:
  Operation(double l, double r);
  virtual ~Operation();

  virtual double perform() const = 0;
  virtual char symbol() const = 0;

  friend ostream& operator<<(ostream& out, const Operation& opr);
};

#endif