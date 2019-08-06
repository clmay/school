#ifndef STRINGBUILDER_H
#define STRINGBUILDER_H

#include <iostream>
#include <string>
using namespace std;

class StringBuilder {
private:
  string content;

public:
  StringBuilder();
  StringBuilder(const string& str);
  ~StringBuilder();

  void append(string str);
  const string& str() const;
  void operator*(unsigned int n);
  bool operator==(StringBuilder& sb);
  bool operator!=(StringBuilder& sb);

  friend void operator>>(string str, StringBuilder& sb);
  friend ostream& operator<<(ostream& out, StringBuilder& sb);
};

#endif
