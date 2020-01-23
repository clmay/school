
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class SimpleClass {
private:
  int someData;

public:
  void setData(int d) { someData = d; }

  void showData() { cout << "Data is " << someData << endl; }
};

// TODO
class MyFirstClass {
private:
  int number;
  string message;

public:
  void setNumber(int n) { number = n; }
  void showNumber() { cout << number << endl; }
  void setMessage(string msg) { message = msg; }
  void showMessage() { cout << message << endl; }
};

// TODO
class Time {
private:
  int hrs;
  int min;
  int sec;
};

class DateClass {
private:
  int month, day, year;

public:
  void setDate(int mm, int dd, int yyyy) {
    month = mm;
    day = dd;
    year = yyyy;
  }

  void showDate() {
    cout << "The date is " << setfill('0') << setw(2) << month << '/' << setw(2)
         << day << '/' << setw(2) << year % 100 << endl;
  }
};

class Counter {
private:
  unsigned int count;
  int step;

public:
  Counter() : count(0), step(1) { // The constructor
    cout << "init -> count: " << count << ", step: " << step << endl;
  }

  void increment() { count += step; }

  int current() { return count; }

  ~Counter() { // The destructor
    cout << "fini -> count: " << count << ", step: " << step << endl;
  }
};

// TODO
class DateClass2 {
private:
  int month, day, year;

public:
  DateClass2() : month(1), day(1), year(1900) {}
  void setDate(int mm, int dd, int yyyy) {
    month = mm;
    day = dd;
    year = yyyy;
  }

  void showDate() {
    cout << "The date is " << setfill('0') << setw(2) << month << '/' << setw(2)
         << day << '/' << setw(2) << year % 100 << endl;
  }
};

// TODO
class Employee {
private:
  int id;
  string name;
  short age;

public:
  Employee() : id(0), name("noname"), age(18) {}
  Employee(int id) : id(id), name("noname"), age(18) {}
  Employee(int id, string name) : id(id), name(name), age(18) {}
  Employee(int id, string name, short age) : id(id), name(name), age(age) {}

  void print() {
    cout << "ID: " << id << ", Name: " << name << ", Age: " << age << endl;
  }
};

class Date {
private:
  int month, day, year;

public:
  Date() : month(1), day(1), year(1900) {} // Constructor # 1
  Date(int mm, int dd, int yy)
      : month(mm), day(dd), year(yy) {} // Constructor # 2

  void showDate() {
    cout << "The date is " << setfill('0') << setw(2) << month << '/' << setw(2)
         << day << '/' << setw(2) << year % 100 << endl;
  }

  ~Date() {} // Destructor
};

class BetterCounter {
private:
  unsigned count;
  int step;

public:
  BetterCounter() : count(0), step(1) {}                  // Constructor # 1
  BetterCounter(unsigned c) : count(c), step(1) {}        // Constructor # 2
  BetterCounter(unsigned c, int s) : count(c), step(s) {} // Constructor # 3

  void increment() { count = count + step; }
  int current() { return count; }

  ~BetterCounter() {} // // Destructor
};

class Date2 {
private:
  int month, day, year;

public:
  Date2() : month(1), day(1), year(1900) {} // Constructor # 1
  Date2(int mm, int dd, int yy)
      : month(mm), day(dd), year(yy) {} // Constructor # 2

  void showDate() const; // A const function prototype

  ~Date2() {} // Destructor
};

class Card {
private:
  long cardNumber;
  string cardName;
  bool active;

public:
  long getCardNumber() const { return cardNumber; }

  const string& getCardName() const { return cardName; }

  bool isActive() const { return active; }
};

class AnotherCard {
private:
  long cardNumber;
  string cardName;
  bool active;

public:
  void setCardNumber(long number) { cardNumber = number; }

  void setCardName(const string& name) { cardName = name; }

  void setActive(bool active) { AnotherCard::active = active; }
};

// A const function definition
void Date2::showDate() const {
  cout << "The date is " << setfill('0') << setw(2) << month << '/' << setw(2)
       << day << '/' << setw(2) << year % 100 << endl;
}

int main(int argc, char const* argv[]) {
  SimpleClass s1, s2; // Creating two objects

  s1.setData(500);
  s2.setData(187);
  s1.showData();
  s2.showData();

  /*
  cout << s1.someData;
  cout << s2.someData;
  */

  // TODO
  MyFirstClass a, b, c;

  a.setNumber(1);
  b.setNumber(2);
  c.setNumber(3);

  a.setMessage("This is object `a`.");
  b.setMessage("This is object `b`.");
  c.setMessage("This is object `c`.");

  a.showNumber();
  b.showNumber();
  c.showNumber();

  a.showMessage();
  b.showMessage();
  c.showMessage();

  DateClass d;
  d.setDate(10, 12, 2018);
  d.showDate();

  Counter ctr;
  ctr.increment();
  ctr.increment();
  ctr.increment();
  ctr.increment();

  Counter* cptr = new Counter;
  cptr->increment();
  cptr->increment();
  cptr->increment();
  cptr->increment();

  DateClass2 dc2_1;
  DateClass2* dc2_2 = new DateClass2;

  dc2_1.showDate();
  dc2_2->showDate();

  {
    Counter c;
    c.increment();
    c.increment();
    c.increment();
    c.increment();
  }

  Counter* c2 = new Counter;

  c2->increment();
  c2->increment();
  c2->increment();

  delete c2;

  // Using constructor #1
  Date d1;
  d1.showDate();

  // Using constructor #2
  Date d2(2, 17, 2019);
  d2.showDate();

  // Using constructor #1
  Date* d3 = new Date;
  d3->showDate();

  // Using constructor #1
  Date* d4 = new Date(2, 17, 2019);
  d4->showDate();

  delete d3, d4;

  // TODO
  Employee* emp1 = new Employee;
  Employee* emp2 = new Employee(15);
  Employee* emp3 = new Employee(230, "Jean Boulez");
  Employee* emp4 = new Employee(435, "Barry Lopez", 74);

  emp1->print();
  emp2->print();
  emp3->print();
  emp4->print();

  BetterCounter* bc = new BetterCounter(11);
  bc->increment();
  cout << bc->current();
  delete bc;

  return 0;
}