
#include <array>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

// TODO
class Square {
private:
  int x, y, width;

public:
  Square(int x, int y, int w) : x(x), y(y), width(w) {
    if (width < 0) {
      throw width;
    }
  }
  void show() {
    cout << width << "x" << width << " SQUARE @(" << x << "," << y << ")";
  }
};

// TODO
class Square1 {
private:
  int x, y, width;

public:
  Square1(int x, int y, int w) : x(x), y(y), width(w) {
    if (width < 0) {
      throw runtime_error("negative width");
    }
  }
  void show() {
    cout << width << "x" << width << " SQUARE @(" << x << "," << y << ")";
  }
};

class DivisionByZero : public runtime_error {
public:
  DivisionByZero() : runtime_error("divide by zero") {}
};

template <typename E, typename T> class BC {
public:
  BC(E b, T c) : b(b), c(c) {}
  void print() {
    cout << "b: " << b << ", "
         << "c: " << c << endl;
  }
  ~BC() {}

private:
  E b;
  T c;
};

// TODO: class template goes here
template <typename K, typename V> class Pair {
private:
  K key;
  V value;

public:
  Pair(K k, V v) : key(k), value(v) {}
  ~Pair() {}
  K getKey() { return key; }
  void setKey(K k) { key = k; }
  V getValue() { return value; }
  void setValue(V v) { value = v; }
};

template <typename T, unsigned short S> class OwnArray {
private:
  T* data;
  int size;

public:
  OwnArray() : size(S), data(new T[S]) {}
  OwnArray(T* arr) : OwnArray() {
    for (int i = 0; i < size; i++) {
      data[i] = arr[i];
    }
  }
  void print() {
    for (int i = 0; i < size; i++) {
      cout << " " << *(data + i);
    }
    cout << endl;
  }
  ~OwnArray() { delete[] data; }
};

template <typename T, unsigned short S> class OwnArray2 {
private:
  T* data;
  int size;

public:
  OwnArray2();
  OwnArray2(T* arr);
  void print();
  ~OwnArray2();
};

template <typename T, unsigned short S>
OwnArray2<T, S>::OwnArray2() : size(S), data(new T[S]) {}

template <typename T, unsigned short S>
OwnArray2<T, S>::OwnArray2(T* arr) : OwnArray2() {
  for (int i = 0; i < size; i++) {
    data[i] = arr[i];
  }
}

template <typename T, unsigned short S> void OwnArray2<T, S>::print() {
  for (int i = 0; i < size; i++) {
    cout << " " << *(data + i);
  }
  cout << endl;
}

template <typename T, unsigned short S> OwnArray2<T, S>::~OwnArray2() {
  delete[] data;
}

// TODO: class template definition goes here
template <typename T> class A {
private:
  T m;

public:
  A(T a);
  void show();
  ~A();
};

// TODO: constructor implementation goes here
template <typename T> A<T>::A(T a) : m(a) {}

// TODO: show() implementation goes here
template <typename T> void A<T>::show() {
  cout << "My number is: " << m << endl;
}

// TODO: destructor implementation goes here
template <typename T> A<T>::~A() {}

double divide(double number, double by) { return number / by; }

double divide1(double number, double by) {
  if (by == 0) {
    throw by;
  }

  return number / by;
}

double divide2(double number, double by) {
  if (by == 0) {
    throw runtime_error("divide by zero");
  }

  return number / by;
}

double divide3(double number, double by) {
  if (by == 0) {
    throw DivisionByZero();
  }

  return number / by;
}

// TODO: Function template goes here
template <typename T> int compareTo(T a, T b) {
  if (a > b) {
    return 1;
  } else if (a == b) {
    return 0;
  } else {
    return -1;
  }
}

double lesserOf(double n, double m) { return n < m ? n : m; }

template <typename T> T lesserOf(T n, T m) { return n < m ? n : m; }

template <typename T, typename S> S find(T* data, T value, S size) {
  for (S j = 0; j < size; j++) {
    if (data[j] == value) {
      return j;
    }
  }

  return -1;
}

template <typename T> class A {
public:
  A(T a) : m(a) {}
  void show() { cout << "My number is: " << m << endl; }
  ~A() {}

private:
  T m;
};

int main(int argc, char const* argv[]) {

  double m, n;

  cout << "Enter a double number: ";
  cin >> m;
  cout << "Enter an other double number to divide " << m << " by: ";
  cin >> n;
  cout << m << " / " << n << ": " << divide1(m, n) << endl;
  cout << "DONE!\n";

  cout << "Enter a double number: ";
  cin >> m;
  cout << "Enter an other double number to divide " << m << " by: ";
  cin >> n;
  try {
    cout << m << " / " << n << ": " << divide1(m, n) << endl;
    cout << "DONE!\n";
  } catch (double ex) {
    cerr << "Exception occurred: cannot divide by zero.";
  }

  // TODO
  try {
    Square s1(0, 0, 10);
    Square s2(0, 0, -10);
  } catch (int ex) {
    cerr << "Error: Width must be greater than 0.";
  }

  cout << "Enter a double number: ";
  cin >> m;
  cout << "Enter an other double number to divide " << m << " by: ";
  cin >> n;
  try {
    cout << m << " / " << n << ": " << divide2(m, n) << endl;
    cout << "DONE!\n";
  } catch (runtime_error& ex) {
    cerr << "Exception occurred: " << ex.what();
  }

  cout << "Enter a double number: ";
  cin >> m;
  cout << "Enter an other double number to divide " << m << " by: ";
  cin >> n;
  try {
    cout << m << " / " << n << ": " << divide3(m, n) << endl;
    cout << "DONE!\n";
  } catch (DivisionByZero& ex) {
    cerr << "Exception occurred: " << ex.what();
  }

  cout << lesserOf<int>(12, 9) << endl;

  cout << lesserOf<double>(1.2, 9.8) << endl;

  cout << lesserOf(12, 9) << endl;
  cout << lesserOf(1.2, 9.8) << endl;

  // TODO: Function calls go here:
  {
    int i1 = 1;
    int i2 = 2;

    cout << compareTo(i1, i2) << endl;

    double d1 = 100.2;
    double d2 = 100.2;

    cout << compareTo(d1, d2) << endl;

    string s1 = "xyz";
    string s2 = "abc";

    cout << compareTo(s1, s2) << endl;
  }

  char vowels[] = {'A', 'E', 'I', 'O', 'U', 'Y'};
  cout << find(vowels, 'X', 6) << endl;
  cout << find<char, unsigned>(vowels, 'U', 6) << endl;

  vector<double> grades = {89.5, 91.0, 96.25, 75.5, 94.75};
  double average = 0;
  for (double grade : grades) {
    average += grade / grades.size();
  }

  cout << "Grade average: " << average << endl;

  A<int> a(56);
  a.show();

  A<double>* b = new A<double>(44.5);
  b->show();

  A<string>* c = new A<string>("James");
  c->show();

  delete b, c;

  BC<int, double> bc(10, 89.05);
  bc.print();

  BC<string, short>* bcptr = new BC<string, short>("Washington", 10);
  bcptr->print();
  delete bcptr;

  // TODO: object definitions go here
  Pair<string, short> paul = Pair<string, short>("Paul", 30);
  Pair<long, string> camus = Pair<long, string>(8015553807, "Albert Camus");
  Pair<string, long>* strangerAuthorID =
      new Pair<string, long>("The Stranger", 8015553807);
  Pair<string, string>* firstLine =
      new Pair<string, string>("The Stranger", "Mother died today.");

  cout << paul.getValue() << endl;
  cout << camus.getKey() << endl;
  cout << camus.getValue() << endl;
  cout << firstLine->getKey() << endl;
  cout << firstLine->getValue() << endl;

  array<int, 2> vals = {11, 17};

  string arr[] = {"mam", "ma", "mia"};
  OwnArray<string, 3> oa(arr);
  oa.print();

  OwnArray2<string, 3> ob(arr);
  ob.print();

  return 0;
}