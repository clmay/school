#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

class Course
{
private:
  int crn;
  string name;
  int creditHours;
  int year;
  string semester;

public:
  // Constructors
  // nullary
  Course() : crn(0), name(""), creditHours(0), year(0), semester("") {}
  // binary
  Course(int crn, string name) : crn(crn), name(name), creditHours(0), year(0), semester("") {}
  // 5-ary
  Course(int crn, string name, int hours, int year, string semester) : crn(crn), name(name), creditHours(hours), year(year), semester(semester) {}

  // Destructor
  ~Course() {}

  // Accessors
  int getCrn() const
  {
    return crn;
  }
  const string &getName() const
  {
    return name;
  }
  int getCreditHours() const
  {
    return creditHours;
  }
  int getYear() const
  {
    return year;
  }
  const string &getSemester() const
  // Returns a string reference, is also const
  {
    return semester;
  }

  // Mutators
  void setCrn(int crn)
  {
    // Field name must be fully qualified
    Course::crn = crn;
  }
  void setName(const string &name)
  {
    // Field name must be fully qualified
    Course::name = name;
  }
  void setCreditHours(int hours)
  {
    creditHours = hours;
  }
  void setYear(int year)
  {
    // Field name must be fully qualified
    Course::year = year;
  }
  void setSemester(const string &semester)
  {
    // Field name must be fully qualified
    Course::semester = semester;
  }

  // Auxiliary methods
  string str() const
  {
    stringstream ss;
    ss << setw(5) << getCrn() << setw(35) << getName() << setw(9)
       << getCreditHours() << setw(10) << getSemester() << setw(6) << getYear()
       << endl;
    string output = ss.str();
    return output;
  }
};

int main(int argc, char const *argv[])
{
  Course *c1 = new Course();
  Course *c2 = new Course(11235, "Recursive Integer Sequences");
  Course *c3 = new Course(11121, "Advanced Integer Sequences", 4, 2020, "Summer");

  c1->setCrn(12345);
  c1->setName("Introduction to Integer Sequences");
  c1->setCreditHours(4);
  c1->setYear(2019);
  c1->setSemester("Fall");

  c2->setCreditHours(4);
  c2->setYear(2020);
  c2->setSemester("Spring");

  cout << endl;
  cout << setw(5) << "CRN" << setw(35) << "Name" << setw(9) << "Credits"
       << setw(10) << "Semester" << setw(6) << "Year" << endl;
  cout << setw(5) << "-----------------------------------------------------------------"
       << endl;
  cout << c1->str();
  cout << c2->str();
  cout << c3->str();
  cout << endl;

  delete c1;
  delete c2;
  delete c3;

  return 0;
}
