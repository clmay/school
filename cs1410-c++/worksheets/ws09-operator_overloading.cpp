
#include <iostream>
using namespace std;

class Counter {
private:
  int count;
  int initial;

protected:
  int step;

public:
  Counter(int i) : initial(i), count(i), step(1) {}
  int next() { return count += step; }
  int prev() { return count -= step; }
  int current() { return count; }
  void reset() { count = initial; }
};

class Counter2 {
private:
  int count;
  int initial;

protected:
  int step;

public:
  Counter2(int i) : initial(i), count(i), step(1) {}
  int next() { return count += step; }
  int prev() { return count -= step; }
  int current() { return count; }
  void reset() { count = initial; }

  int operator++() { return next(); } // Overloads prefix ++
  int operator--() { return prev(); } // Overloads prefix --

  friend ostream& operator<<(ostream& out, Counter2& c) { // Overloads <<
    out << c.count;
    return out;
  }
};

class Counter3 {
private:
  int count;
  int initial;

protected:
  int step;

public:
  Counter3(int i) : initial(i), count(i), step(1) {}
  int next() { return count += step; }
  int prev() { return count -= step; }
  int current() { return count; }
  void reset() { count = initial; }

  int operator++() { return next(); } // Overloads prefix ++
  int operator--() { return prev(); } // Overloads prefix --

  friend ostream& operator<<(ostream& out, Counter3& c) { // Overloads <<
    out << c.count;
    return out;
  }

  // The new five operators
  void operator+(int n) { count += n; }
  void operator-(int n) { count -= n; }
  bool operator==(Counter3& c) {
    return this->initial == c.initial && this->count == c.count &&
           this->step == c.step;
  }
  bool operator!=(Counter3& c) { return !(*this == c); }
  friend istream& operator>>(istream& in, Counter3& c) {
    cout << "Enter counter initial, count, and step: ";
    in >> c.initial >> c.count >> c.step;
    return in;
  }
};

// TODO
class Distance {
private:
  int feet;
  int inches;

public:
  Distance() : feet(0), inches(0) {}
  Distance(int feet, int inches) : feet(feet), inches(inches) {}
  Distance& add(const Distance& d) {
    this->feet += d.feet + (this->inches + d.inches) / 12;
    this->inches = (this->inches + d.inches) % 12;
    return *this;
  }
  Distance& add(int feet) {
    this->feet += feet;
    return *this;
  }
  Distance& add(int feet, int inches) {
    this->feet += feet + (this->inches + inches) / 12;
    this->inches = (this->inches + inches) % 12;
    return *this;
  }

  Distance& show() {
    cout << this->feet << "' " << this->inches << "\"" << endl;
    return *this;
  }
  void operator+(int feet) { this->feet += feet; }
  int operator--() { return this->feet -= 1; }
  bool operator==(Distance& d) {
    return this->feet == d.feet && this->inches == d.inches;
  }
  friend ostream& operator<<(ostream& out, Distance& d) {
    out << d.feet << "' " << d.inches << "\"";
    return out;
  }
  friend istream& operator>>(istream& in, Distance& d) {
    cout << "Enter feet and inches (integers):" << endl;
    in >> d.feet >> d.inches;
    return in;
  }
};

class Counter4 {
private:
  int count;
  int initial;

protected:
  int step;

public:
  Counter4(int i) : initial(i), count(i), step(1) {}
  int next() { return count += step; }
  int prev() { return count -= step; }
  int current() { return count; }
  void reset() { count = initial; }

  int operator++() { return next(); } // Overloads prefix ++
  int operator--() { return prev(); } // Overloads prefix --

  friend ostream& operator<<(ostream& out, Counter4& c) { // Overloads <<
    out << c.count;
    return out;
  }

  // The new five operators
  void operator+(int n) { count += n; }
  void operator-(int n) { count -= n; }
  bool operator==(Counter4& c) {
    return this->initial == c.initial && this->count == c.count &&
           this->step == c.step;
  }
  bool operator!=(Counter4& c) { return !(*this == c); }
  friend istream& operator>>(istream& in, Counter4& c) {
    cout << "Enter counter initial, count, and step: ";
    in >> c.initial >> c.count >> c.step;
    return in;
  }

  int operator++(int) { return next(); } // Overloads postfix ++
  int operator--(int) { return prev(); } // Overloads postfix --

  friend void operator+(int n, Counter4& c) { c.count += n; }
  friend void operator-(int n, Counter4& c) { c.count -= n; }
};

class Complex {
private:
  double real, imaginary;

public:
  Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

  double operator[](int index) const { // READ ONLY: real value at index 0,
                                       // imaginary at any other index;
    switch (index) {
    case 0:
      return real;
    default:
      return imaginary;
    }
  }

  double& operator[](int index) { // WRITE: real value at index 0, imaginary
                                  // at any other index;
    switch (index) {
    case 0:
      return real;
    default:
      return imaginary;
    }
  }
};

// TODO
class Point {
private:
  int x, y;

public:
  Point(int x, int y) : x(x), y(y) {}

  void print() { cout << "(" << this->x << ", " << this->y << ")" << endl; }

  int operator[](int index) const {
    switch (index) {
    case 0:
      return this->x;
    default:
      return this->y;
    }
  }

  int& operator[](int index) {
    switch (index) {
    case 0:
      return this->x;
    default:
      return this->y;
    }
  }

  friend ostream& operator<<(ostream& out, Point& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
  }

  friend istream& operator>>(istream& in, Point& p) {
    cout << "Enter an x and y coordinate (integers):" << endl;
    in >> p.x >> p.y;
    return in;
  }
};

int main(int argc, char const* argv[]) {
  cout << 6 + 7 << endl
       << 6 - 5 << endl
       << 4 * 3 << endl
       << 7 / 2 << endl // Integer division
       << 7 % 2 << endl // Remainder
       << 7 / 2.0 << endl;

  cout << (6 < 7) << endl
       << (7 > 5) << endl
       << (4 >= 3) << endl
       << (2 <= 7) << endl
       << (9 == 9) << endl
       << (7.1 != 2.0) << endl;

  int x = 4;
  cout << (x < 7 || x > 5) << endl;
  cout << (x != 5 && x != 7) << endl;

  int ans = 27;

  ans += 10;
  cout << ans << ", ";
  ans -= 7;
  cout << ans << ", ";
  ans *= 2;
  cout << ans << ", ";
  ans /= 3;
  cout << ans << ", ";
  ans %= 3;
  cout << ans << endl;

  int count = 10;

  cout << "count=" << count << endl;
  cout << "count=" << ++count << endl;
  cout << "count=" << count << endl;
  cout << "count=" << count++ << endl;
  cout << "count=" << count << endl;

  /* TODO
  count.operator++()
  true.operator||(false)
  a.operator+=(3)
  3.operator!=(6)
  8.operator<=(7)
  cin.operator>>(x)
  cout.operator<<(100)
  */

  /*
  Counter c(0);
  ++c; // equivalent ot calling c.next()
  --c; // equivalent to calling c.prev()
  cout << c; // Prints the current value of the counter
  */

  Counter2 c(10);
  ++c;
  --c;
  ++c;
  ++c;
  cout << c;

  Counter3 c3(0);
  cin >> c3;
  cout << c3 << endl;
  ++c3;
  cout << c3 << endl;
  c3 + 9;
  cout << c3 << endl;
  --c3;
  cout << c3 << endl;
  c3 - 2;
  cout << c3 << endl;
  cout << (c3 == c3) << endl;
  cout << (c3 != c3) << endl;

  // TODO
  Distance d1(0, 0);
  Distance d2(0, 0);
  cin >> d1;
  cin >> d2;
  cout << d1 << endl;
  cout << d2 << endl;
  d1 + 6;
  cout << d1 << endl;
  --d2;
  cout << d2 << endl;
  cout << (d1 == d2) << endl;

  Counter3 c4(0);
  ++c4;
  --c4;
  c4 + 9;
  c4 - 2;

  /*
  c4++;
  c4--;
  9 + c4;
  2 - c4;
  */

  Counter4 cc(0);
  cc++;
  cc--;
  9 + cc;
  2 - cc;
  cout << cc;

  Complex xx(5, 6);

  cout << xx[0] << endl;
  xx[1] = 9;
  cout << xx[1];

  // TODO
  Point p(0, 0);
  Point q(0, 0);

  cin >> p;
  cin >> q;

  cout << p << endl;
  cout << q << endl;

  cout << p[0] << endl;
  cout << p[1] << endl;
  cout << q[0] << endl;
  cout << q[1] << endl;

  return 0;
}