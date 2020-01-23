#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

double centimizeByVal(double len) { return len * 2.54; }
void centimizeByRef(double& len) { len = len * 2.54; }
void centimizeByPtr(double* len) { *len = *len * 2.54; }

// TODO: definition
void swapValues(double* l, double* r) {
  double tmp = *l;
  *l = *r;
  *r = tmp;
}

void swapValues2(int* ptr) {
  int temp = *ptr;
  *ptr = *(ptr + 1);
  *(ptr + 1) = temp;
}

int main(int argc, char const* argv[]) {
  int var1 = 11;
  int var2 = 22;
  int var3 = 33;
  double dvar = 45.78;

  cout << &var1 << endl << &var2 << endl << &var3 << endl;

  int& ref = var1;       // Reference
  cout << &var1 << endl; // Address of
  cout << ref << endl;

  int* iptr;    // A pointer to a location that holds an integer
  double* dptr; // A pointer to a location that holds a double
  char* ptr;    // A pointer to a location that holds a character

  iptr = &var1;
  dptr = &dvar;

  ptr = nullptr;

  char choice = 'A';
  char* cptr = &choice;

  cout << *cptr << endl;
  *cptr = 'Z';
  cout << choice;

  string greeting = "Good afternoon!";
  short height = 39;
  double my_distance = 21.07;
  int my_count = 99;

  // TODO
  string* strptr = &greeting;
  short* sptr = &height;
  double* my_dptr = &my_distance;
  int* my_iptr = &my_count;

  // TODO
  *strptr = "Good evening!";
  *sptr = 2;
  *my_dptr = 18.03;
  *my_iptr = 1;

  int primes[] = {2, 3, 5, 7};
  for (int i = 0; i < 4; i++) {
    cout << primes[i] << endl;
  }

  cout << setw(12) << "LOCATION" << setw(8) << "VALUE" << endl;
  for (int i = 0; i < 4; i++) {
    cout << setw(12) << (primes + i) << setw(8) << *(primes + i) << endl;
  }

  // primes = &var1;

  // TODO
  string utahCounties[] = {
      "Beaver",   "Box Elder", "Cache",      "Carbon", "Daggett", "Davis",
      "Duchesne", "Emery",     "Garfield",   "Grand",  "Iron",    "Juab",
      "Kane",     "Millard",   "Morgan",     "Piute",  "Rich",    "Salt Lake",
      "San Juan", "Sanpete",   "Sevier",     "Summit", "Tooele",  "Uintah",
      "Utah",     "Wasatch",   "Washington", "Wayne",  "Weber"};

  for (int i = 0; i < (sizeof(utahCounties) / sizeof(*utahCounties)); i++) {
    cout << utahCounties[i] << endl;
  }

  double n = 11;
  cout << n << endl;
  cout << centimizeByVal(n) << endl << n << "\n\n";

  centimizeByRef(n);
  cout << n << endl;

  n = 12;
  cout << "\n" << n << endl;
  centimizeByPtr(&n);
  cout << n << endl;

  // TODO: testing
  double lval = 20.1;
  double rval = 10.2;

  double* ltest = &lval;
  double* rtest = &rval;

  swapValues(ltest, rtest);

  cout << "left = " << *ltest << ", right = " << *rtest << endl;

  // Testing
  int vals[] = {11, 17};

  cout << "Initially:" << endl;
  cout << *vals << ", " << *(vals + 1) << endl;

  swapValues2(vals);
  cout << "After swapValues2:" << endl;
  cout << *vals << ", " << *(vals + 1) << endl;

  int xvar;
  string str = "Good morning!";
  double scores[100];
  vector<char> choices;

  double* score = new double;

  cout << "Enter score:" << endl;
  cin >> *score;

  cout << "The entered score is " << *score << " is stored at " << score
       << endl;

  // Cleaning after score
  delete score;

  int* numbers = new int[5];

  for (int i = 0; i < 5; i++) {
    cout << "Enter number " << i + 1 << ": ";
    cin >> numbers[i];
  }

  cout << setw(8) << "INDEX" << setw(10) << "NUMBER" << endl;
  for (int i = 0; i < 5; i++) {
    cout << setw(8) << i << setw(10) << numbers[i] << endl;
  }
  // Clean after numbers; return them to the OS
  delete[] numbers;

  // TODO
  {
    float* more_vals = new float[3];

    for (int i = 0; i < 3; i++) {
      cout << "Enter a value: ";
      cin >> more_vals[i];
    }

    cout << endl;

    for (int i = 0; i < 3; i++) {
      cout << more_vals[i] << endl;
    }

    delete[] more_vals;
  }

  struct Time {
    int hrs;
    int min;
    int sec;
  };

  Time* t = new Time;

  (*t).hrs = 11;
  (*t).min = 45;
  (*t).sec = 17;

  cout << (*t).hrs << ":" << (*t).min << ":" << (*t).sec << endl;

  t->hrs = 11;
  t->min = 45;
  t->sec = 17;

  cout << t->hrs << ":" << t->min << ":" << t->sec << endl;

  delete t;

  // TODO
  Time* times = new Time[10];
  delete[] times;

  return 0;
}