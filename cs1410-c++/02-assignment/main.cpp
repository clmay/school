// CS1410 - Assignment 02
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

const double PI = 3.14159;

// TODO 1: ShapeKind Enumeration goes here
enum class ShapeKind
{
  CIRCLE,
  SQUARE,
  RECTANGLE
};

// TODO 2: Shape Structure  goes here
struct Shape
{
  // A shape has a kind and dimensions
  ShapeKind kind;
  double length;
  double width;
};

// Function prototypes

double area(Shape);
// TODO 3: area() definition goes here
double area(Shape s)
{
  switch (s.kind)
  {
  case ShapeKind::CIRCLE:
    // Only the CIRCLE ShapeKind has a unique area calculation
    // This should be familiar from gradeschool geometry ;)
    return PI * (s.length / 2.0) * (s.width / 2.0);
  default:
    // The area of any other Shape that is not a CIRCLE ShapeKind
    // can be calculated using this formula:
    return s.length * s.width;
  }
}

double perimeter(Shape);
// TODO 4: perimeter() definition goes here
double perimeter(Shape s)
{
  switch (s.kind)
  {
    // Again, only the CIRCLE ShapeKind has a unique perimeter calculation;
    // all other ShapeKind values use the `default` block in the switch
  case ShapeKind::CIRCLE:
    return PI * s.length;
  default:
    return 2 * (s.length + s.width);
  }
}

string nameOf(Shape);
// TODO 5: nameOf() definition goes here
string nameOf(Shape s)
{
  string name; // return value
  switch (s.kind)
  {
  case ShapeKind::CIRCLE:
    name = "Circle";
    break;
  case ShapeKind::SQUARE:
    name = "Square";
    break;
  case ShapeKind::RECTANGLE:
    name = "Rectangle";
    break;
  default:
    // Just to be safe, we handle the case when a Shape 's' has a kind that is
    // not a possible value of ShapeKind
    name = "Unknown shape";
    break;
  }
  return name;
}

void promptAndReadInputFor(Shape &);
// TODO 6: promptAndReadInputFor() definition goes here
void promptAndReadInputFor(Shape &s)
{
  switch (s.kind)
  {
  case ShapeKind::CIRCLE:
    cout << "Enter the diameter of a circle: " << endl;
    cin >> s.length;
    // Since a circle has an equal diameter from any point on its circumference,
    // we can assign the width value to be the same as the length
    s.width = s.length;
    break;
  case ShapeKind::SQUARE:
    cout << "Enter the length of a square: " << endl;
    cin >> s.length;
    // Similarly to the circle case, a square's sides are equal by definition
    s.width = s.length;
    break;
  case ShapeKind::RECTANGLE:
    cout << "Enter the length and width of a rectangle: " << endl;
    // Adjacent side lengths of a rectangle can differ, so we take two inputs:
    cin >> s.length >> s.width;
    if (s.length == s.width)
    {
      // However, if it happens that they are equal, then the shape meets
      // the definition for a square, and we update the `kind` accordingly:
      s.kind = ShapeKind::SQUARE;
    }
    break;
  default:
    // Maybe something crazy happened; this can't really be considered "failing
    // gracefully", but let's at least try to let the user know:
    cout << "Invalid shape" << endl;
    break;
  }
}

// The main function
int main()
{
  // Shape objects
  Shape circle = {ShapeKind::CIRCLE, 0, 0};
  // TODO 7: define two more shape objects: a square and and a rectangle
  Shape square = {ShapeKind::SQUARE, 0, 0};
  Shape rectangle = {ShapeKind::RECTANGLE, 0, 0};

  // TODO 8: Call the promptAndReadInputFor() function on each of the above
  // three shapes
  promptAndReadInputFor(circle);
  promptAndReadInputFor(square);
  promptAndReadInputFor(rectangle);

  // TODO 9: Print a out a report of these shapes in a table-like format
  cout << setw(10) << "SHAPE" << setw(10) << "WIDTH" << setw(10) << "HEIGHT"
       << setw(15) << "PERIMETER" << setw(10) << "AREA" << endl;
  // Below, we use the calls to `nameOf()` to get pretty strings
  // `nameOf()`, `perimeter()`, and `area` are fruitful, pure, and referentially
  // transparent, it's safe to just plop the function calls into the output
  // streams without using placeholder variables
  cout << setw(10) << nameOf(circle) << setw(10) << circle.width << setw(10)
       << circle.length << setw(15) << perimeter(circle) << setw(10)
       << area(circle) << endl;
  cout << setw(10) << nameOf(square) << setw(10) << square.width << setw(10)
       << square.length << setw(15) << perimeter(square) << setw(10)
       << area(square) << endl;
  cout << setw(10) << nameOf(rectangle) << setw(10) << rectangle.width << setw(10)
       << rectangle.length << setw(15) << perimeter(rectangle) << setw(10)
       << area(rectangle) << endl;

  // Good ole `main()`, tellin' the OS what's up. Bye bye!
  return 0;
}
