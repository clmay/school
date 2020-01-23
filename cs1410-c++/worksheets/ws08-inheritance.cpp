#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, char const* argv[]) {
  class Date {
  private:
    int month, day, year;

  public:
    Date() : month(1), day(1), year(1900) {} // Constructor # 1
    Date(int mm, int dd, int yy)
        : month(mm), day(dd), year(yy) {} // Constructor # 2

    void showDate() {
      cout << "The date is " << setfill('0') << setw(2) << month << '/'
           << setw(2) << day << '/' << setw(2) << year % 100 << endl;
    }

    ~Date() {} // Destructor
  };

  Date day(8, 12, 2019);
  Date anotherDay = Date(9, 23, 2019);
  day.showDate();
  anotherDay.showDate();

  Date dayCopy(day);
  Date anotherDayCopy = anotherDay;
  dayCopy.showDate();
  anotherDayCopy.showDate();

  class DistanceClass {
  private:
    int feet;
    int inches;

  public:
    DistanceClass() : feet(0), inches(0) {}
    DistanceClass(int f, int n) : feet(f), inches(n) {}
    void show() { cout << feet << "' " << inches << "\"" << endl; }
  };

  // TODO
  DistanceClass my_d1;
  DistanceClass my_d2(10, 8);

  DistanceClass my_d3(my_d1);
  DistanceClass my_d4(my_d2);

  DistanceClass my_d5 = my_d1;
  DistanceClass my_d6 = my_d2;

  my_d1.show();
  my_d2.show();
  my_d3.show();
  my_d4.show();
  my_d5.show();
  my_d6.show();

  class DistanceClass2 {
  private:
    int feet;
    int inches;

  public:
    DistanceClass2() : feet(0), inches(0) {}
    DistanceClass2(int f, int n) : feet(f), inches(n) {}
    void add(const DistanceClass2& d) {
      feet += d.feet + (inches + d.inches) / 12;
      inches = (inches + d.inches) % 12;
    }
    void add(int ft) { feet += ft; }
    void add(int ft, int inch) {
      feet += ft + (inches + inch) / 12;
      inches = (inches + inch) % 12;
    }

    void show() { cout << feet << "' " << inches << "\"" << endl; }
  };

  DistanceClass2 d1;
  DistanceClass2* d2 = new DistanceClass2(2, 5);

  d1.show();
  d1.add(*d2);
  d1.show();
  d1.add(3);
  d1.show();
  d1.add(0, 9);
  d1.show();

  delete d2;

  // TODO
  DistanceClass2* my_dist1 = new DistanceClass2(14, 3);
  DistanceClass2* my_dist2 = new DistanceClass2(7, 0);

  my_dist2->add(*my_dist1);
  my_dist2->add(6, 0);
  my_dist2->show();

  delete my_dist1;
  delete my_dist2;

  class DistanceClass3 {
  private:
    int feet;
    int inches;

  public:
    DistanceClass3() : feet(0), inches(0) {}
    DistanceClass3(int f, int n) : feet(f), inches(n) {}
    void add(const DistanceClass3& d) {
      this->feet += d.feet + (this->inches + d.inches) / 12;
      this->inches = (this->inches + d.inches) % 12;
    }
    void add(int feet) { this->feet += feet; }
    void add(int feet, int inches) {
      this->feet += feet + (this->inches + inches) / 12;
      this->inches = (this->inches + inches) % 12;
    }

    void show() { cout << this->feet << "' " << this->inches << "\"" << endl; }
  };

  DistanceClass3 dist1;
  DistanceClass3* dist2 = new DistanceClass3(2, 5);

  dist1.show();
  dist1.add(*dist2);
  dist1.show();
  dist1.add(3);
  dist1.show();
  dist1.add(0, 9);
  dist1.show();

  delete dist2;

  class DistanceClass4 {
  private:
    int feet;
    int inches;

  public:
    DistanceClass4() : feet(0), inches(0) {}
    DistanceClass4(int feet, int inches) : feet(feet), inches(inches) {}
    DistanceClass4& add(const DistanceClass4& d) {
      this->feet += d.feet + (this->inches + d.inches) / 12;
      this->inches = (this->inches + d.inches) % 12;
      return *this;
    }
    DistanceClass4& add(int feet) {
      this->feet += feet;
      return *this;
    }
    DistanceClass4& add(int feet, int inches) {
      this->feet += feet + (this->inches + inches) / 12;
      this->inches = (this->inches + inches) % 12;
      return *this;
    }

    DistanceClass4& show() {
      cout << this->feet << "' " << this->inches << "\"" << endl;
      return *this;
    }
  };

  DistanceClass4 dst1;
  DistanceClass4* dst2 = new DistanceClass4(2, 5);

  dst1.show().add(*dst2).show().add(3).show().add(0, 9).show();

  class Point {
  private:
    int x, y;

  public:
    // TODO: Constructors go here
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}

    // TODO: Move functions go here
    Point& move(const Point& p) {
      this->x = p.x;
      this->y = p.y;
      return *this;
    }
    Point& move(int x, int y) {
      this->x = x;
      this->y = y;
      return *this;
    }

    Point& print() {
      cout << "(" << this->x << ", " << this->y << ")" << endl;
      return *this;
    }
  };

  // Your Point class should make these two lines work
  Point *p = new Point, *q = new Point(20, 30);
  p->print().move(*q).print().move(12, 56).print();

  // Definition
  class Counter {
  private:
    unsigned int count;
    int step;

  public:
    Counter();

    void increment();
    int current();

    ~Counter();

    // Implemenation
    Counter::Counter() : count(0), step(1) { // The constructor
      cout << "init -> count: " << count << ", step: " << step << endl;
    }

    // Implemenation
    void Counter::increment() { count += step; }

    // Implemenation
    int Counter::current() { return count; }

    // Implemenation
    Counter::~Counter() {
      cout << "fini -> count: " << count << ", step: " << step << endl;
    }
  };

  Counter* c = new Counter;

  c->increment();
  c->increment();
  c->increment();
  c->increment();
  cout << c->current() << endl;

  delete c;

  // TODO: Class definition
  class Date2 {
  private:
    int month, day, year;

  public:
    Date2();              // Constructor/1
    Date2(int, int, int); // Constructor/3

    void showDate();

    ~Date2() {} // Destructor

    // TODO: First constructor's implemenation
    Date2::Date2() : month(1), day(1), year(1900) {} // Constructor # 1

    // TODO: Second constructor's implemenation
    Date2::Date2(int mm, int dd, int yy)
        : month(mm), day(dd), year(yy) {} // Constructor # 2

    // TODO: showDate implemenation
    void Date2::showDate() {
      cout << "The date is " << setfill('0') << setw(2) << month << '/'
           << setw(2) << day << '/' << setw(2) << year % 100 << endl;
    }
  };

  class BaseCounter {
  private:
    int count;
    int initial;

  protected:
    int step;

  public:
    BaseCounter(int i) : initial(i), count(i), step(1) {}
    int next() { return count += step; }
    int prev() { return count -= step; }
    int current() { return count; }
    void reset() { count = initial; }
  };

  class CounterDown1 : public BaseCounter {
  public:
    CounterDown1(int i) : BaseCounter(i) { step = -1; }
  };

  CounterDown1 cd1(100);
  cout << cd1.next() << endl;
  cout << cd1.current() << endl;
  cout << cd1.prev() << endl;

  // TODO: Student class
  class Student {
  private:
    int id;
    string name;

  public:
    Student(int id, string name) : id(id), name(name) {}
  };

  // TODO: CollegeStudent class
  class CollegeStudent : public Student {
  protected:
    string major;

  public:
    CollegeStudent(int id, string name, string major) : Student(id, name) {
      major = major;
    }
  };

  class CounterDown2 : protected BaseCounter {
  public:
    CounterDown2(int i) : BaseCounter(i) { step = -1; }
  };

  CounterDown2 cd2(100);
  // cout << cd2.next() << endl;
  // cout << cd2.current() << endl;
  // cout << cd2.prev() << endl;

  // As protected members, they can only be utilized within the class itself,
  // not outside. These could be inherited and used within derived classes, but
  // if inherited cannot be used outside of any of the derived/deriving classes.

  class CounterDown3 : private BaseCounter {
  public:
    CounterDown3(int i) : BaseCounter(i) { step = -1; }
  };

  CounterDown3 cd3(100);
  // cout << cd3.next() << endl;
  // cout << cd3.current() << endl;
  // cout << cd3.prev() << endl;

  // As private members, these can neither be used outside of the class
  // definition (as attempted above), nor could they be inherited or used within
  // any other derived classes.

  return 0;
}
