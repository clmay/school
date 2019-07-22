#include <iostream>
#include <iomanip>
using namespace std;

void printStars(int n);
bool isOdd(int x);
bool isEven(int x);
int minimum(int x, int y);
double lbsToKgs(double lbs);
double kgsToLbs(double kgs);
int incrementBy2(int n);
void swapValues(int &m, int &n);
void swapValues(double &m, double &n);

int main(int argc, char const *argv[])
{
  printStars(69);
  printStars(37);
  printStars(5);
  printStars(45);

  cout << setw(8) << "Number" << setw(6) << "Odd?" << setw(7) << "Even?" << endl;
  cout << setw(8) << 97 << setw(6) << isOdd(97) << setw(7) << isEven(97) << endl;
  cout << setw(8) << 34 << setw(6) << isOdd(34) << setw(7) << isEven(34) << endl;

  cout << minimum(46, 38) << endl;

  double lbs, kgs;

  cout << "Enter weight in pounds:\n";
  cin >> lbs;
  kgs = lbsToKgs(lbs);
  cout << "Weight in kilograms: " << kgs << endl;

  // TODO
  cout << kgsToLbs(100.0) << endl;

  int n = 15;

  cout << "n = " << n << endl;
  cout << "n = " << incrementBy2(n) << endl;
  cout << "n = " << n << endl;

  int x = 9;
  int &y = x;

  y = 17;
  cout << x << endl;

  // Testing
  int a = 10;
  int b = 15;

  cout << "a = " << a << ", b = " << b << endl;
  swapValues(a, b);
  cout << "a = " << a << ", b = " << b << endl;

  // TODO

  // TODO
  {
    double a = 1.4;
    double b = 9.16;

    cout << "a and b are: " << a << ", " << b << endl;
    swapValues(a, b);
    cout << "a and b are now: " << a << ", " << b << endl;
  }
  return 0;
}

void printStars(int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << '*';
  }
  cout << endl;
}

bool isOdd(int x)
{
  return x % 2 != 0;
}

bool isEven(int x)
{
  return !isOdd(x);
}

int minimum(int x, int y)
{
  return x < y ? x : y;
}

double lbsToKgs(double lbs)
{
  double kilograms = 0.453592 * lbs;
  return kilograms;
}

double kgsToLbs(double kgs)
{
  return kgs * 2.2;
}

int incrementBy2(int n)
{
  return ++(++n);
}

void swapValues(int &m, int &n)
{
  int o = n;
  n = m;
  m = o;
}

void swapValues(double &m, double &n)
{
  double tmp = m;
  m = n;
  n = tmp;
}