#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

struct Columns {
  int col_width_1;
  int col_width_2;
  int col_width_3;
};

int main(int argc, char const* argv[]) {
  cout << "Welcome to C++";
  cerr << "An error has happened";

  ofstream out("hello.txt");

  out << "Hello World!" << endl;

  out.close();

  cout << "Enter your first name: ";
  string name;
  cin >> name;

  ofstream out2("hello.txt", ios::app);
  out2 << "Welcome " << name << " to C++ programming!" << endl;
  out2.close();

  // TODO
  string input1, input2, input3;
  ofstream output("words.txt");

  cout << "Enter some words: ";
  cin >> input1 >> input2 >> input3;
  output << input1 << endl;
  output << input2 << endl;
  output << input3 << endl;

  output.close();

  // TODO
  string input4, input5;
  ofstream output2("words.txt", ios::app);

  cout << "Enter two more words: ";
  cin >> input4 >> input5;
  output2 << input4 << endl;
  output2 << input5 << endl;

  output2.close();

  ofstream mt_out("multable.txt");
  mt_out << setw(4) << "x" << setw(6) << "2*x" << setw(6) << "3*x" << setw(6)
         << "4*x" << setw(6) << "5*x" << endl;
  for (int x = 1; x <= 5; x++) {
    mt_out << setw(4) << x;
    for (int y = 2; y <= 5; y++) {
      mt_out << setw(6) << x * y;
    }

    mt_out << endl;
  }
  mt_out.close();

  // TODO
  {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    Columns cols = {4, 11, 6};

    ofstream df("daysNmonths.txt");

    class Row {
    public:
      static void printRow(ofstream& os, Columns cols, int year, string month,
                           int days) {
        os << setw(cols.col_width_1) << year << setw(cols.col_width_2) << month
           << setw(cols.col_width_3) << days << endl;
      }
    };

    df << setw(cols.col_width_1) << "YEAR" << setw(cols.col_width_2) << "MONTH"
       << setw(cols.col_width_3) << "DAYS" << endl;
    for (int i = 0; i < 12; i++) {
      switch (i) {
      case 0:
        Row::printRow(df, cols, year, "January", 31);
        break;
      case 1:
        if (year % 100 == 0) {
          Row::printRow(df, cols, year, "February", 28);

        } else if (year % 4 == 0) {
          Row::printRow(df, cols, year, "February", 29);
        } else {
          Row::printRow(df, cols, year, "February", 28);
        }
        break;
      case 2:
        Row::printRow(df, cols, year, "March", 31);
        break;
      case 3:
        Row::printRow(df, cols, year, "April", 30);
        break;
      case 4:
        Row::printRow(df, cols, year, "May", 31);
        break;
      case 5:
        Row::printRow(df, cols, year, "June", 30);
        break;
      case 6:
        Row::printRow(df, cols, year, "July", 31);
        break;
      case 7:
        Row::printRow(df, cols, year, "August", 31);
        break;
      case 8:
        Row::printRow(df, cols, year, "September", 30);
        break;
      case 9:
        Row::printRow(df, cols, year, "October", 31);
        break;
      case 10:
        Row::printRow(df, cols, year, "November", 30);
        break;
      case 11:
        Row::printRow(df, cols, year, "December", 31);
        break;
      default:
        break;
      }
    }

    df.close();
  }

  ifstream in("multable.txt");
  string line;

  while (getline(in, line)) {
    cout << line << endl;
  }

  in.close();

  ifstream mt_in("multable.txt");
  string hx, h2x, h3x, h4x, h5x; // one per header; five headers total.
  int x, x2, x3, x4, x5; // one per value per row: five values per row total;

  // Read the headers
  mt_in >> hx >> h2x >> h3x >> h4x >> h5x;
  // Outout the headers
  cout << setw(4) << hx << setw(6) << h2x << setw(6) << h3x << setw(6) << h4x
       << setw(6) << h5x << endl;

  // Read and output the numbers one row at a time
  while (mt_in >> x >> x2 >> x3 >> x4 >> x5) {
    cout << setw(4) << x << setw(6) << x2 << setw(6) << x3 << setw(6) << x4
         << setw(6) << x5 << endl;
  }

  mt_in.close();

  // TODO
  {
    ifstream df_in("daysNmonths.txt");
    string hyear, hmonth, hdays; // one per header; five headers total.
    string ryear, rmonth,
        rdays; // one per value per row: five values per row total;

    // Read the headers
    df_in >> hyear >> hmonth >> hdays;
    // Outout the headers
    cout << setw(4) << hyear << setw(11) << hmonth << setw(6) << hdays << endl;

    // Read and output the numbers one row at a time
    while (df_in >> ryear >> rmonth >> rdays) {
      cout << setw(4) << ryear << setw(11) << rmonth << setw(6) << rdays
           << endl;
    }

    df_in.close();
  }

  ifstream h_in("hello.txt");
  string text;
  while (!h_in.eof()) {
    getline(h_in, text);
    if (h_in.good()) {
      cout << text << endl;
    }
  }
  h_in.close();

  cout << setfill('.');
  cout << setw(4) << "x" << setw(6) << "2*x" << setw(6) << "3*x" << setw(6)
       << "4*x" << setw(6) << "5*x" << endl;
  for (int x = 1; x <= 5; x++) {
    cout << setw(4) << x;
    for (int y = 2; y <= 5; y++) {
      cout << setw(6) << x * y;
    }

    cout << endl;
  }

  cout << setfill(' ');

  for (double i = 1; i <= 10; i++) {
    cout << setw(3) << i << ": " << setw(10) << sqrt(i) << endl;
  }

  cout << setprecision(4);
  for (double i = 1; i <= 10; i++) {
    cout << setw(3) << i << ": " << setw(10) << sqrt(i) << endl;
  }

  cout << setprecision(4) << fixed;
  for (double i = 1; i <= 10; i++) {
    cout << setw(3) << i << ": " << setw(10) << sqrt(i) << endl;
  }

  cout << resetiosflags(ios::fixed);

  for (int i = 1; i <= 10; i++) {
    cout << setw(3) << i << setw(15) << setprecision(i) << sqrt(2.0) << endl;
  }

  cout << left;
  for (int i = 1; i <= 10; i++) {
    cout << setw(3) << i << setw(15) << setprecision(i) << sqrt(2.0) << endl;
  }

  cout << right;
  for (int i = 1; i <= 10; i++) {
    cout << setw(3) << i << setw(15) << setprecision(i) << sqrt(2.0) << endl;
  }

  cout << left << setw(6) << "DEC" << setw(6) << "OCT" << setw(6) << "hex"
       << setw(6) << "HEX" << endl;

  for (int i = 1; i <= 20; i += 2) {
    cout << setw(6) << dec << i << setw(6) << oct << i << setw(6) << nouppercase
         << hex << i << setw(6) << uppercase << hex << i << endl;
  }

  // TODO
  ofstream num_out("numbers.txt");

  num_out << left << setw(6) << "DEC" << setw(6) << "OCT" << setw(6) << "hex"
          << setw(6) << "HEX" << endl;

  for (int i = 1; i <= 20; i += 2) {
    num_out << setw(6) << dec << i << setw(6) << oct << i << setw(6)
            << nouppercase << hex << i << setw(6) << uppercase << hex << i
            << endl;
  }

  struct Color {
    int r, g, b;
    string name;
  };

  Color rainbow[] = {{255, 0, 0, "Red"},      {255, 127, 0, "Orange"},
                     {255, 255, 0, "Yellow"}, {0, 255, 0, "Green"},
                     {0, 0, 255, "Blue"},     {75, 0, 130, "Indigo"},
                     {143, 0, 255, "Violet"}};

  cout << left << setw(10) << "COLOR" << ' ' << setw(11) << "DECIMAL(rgb)"
       << setw(10) << ' ' << setw(8) << "HEXADECIMAL(rgb)" << endl;
  cout << right << setfill('=') << setw(11) << "= " << setfill('=') << setw(22)
       << "= " << setfill('=') << setw(17) << "= " << endl;

  for (Color c : rainbow) {
    cout << left << setfill('.') << setw(10) << c.name << ' ' << dec
         << setfill(' ') << right << setw(3) << c.r // Decimal
         << right << setw(4) << c.g << right << setw(4) << c.b << ' ' << hex
         << setfill('.') << right << setw(10) << ' ' << setfill(' ') << left
         << setw(3) << c.r // Hexadecimal
         << setfill(' ') << setw(3) << c.g << setw(3) << c.b << endl;
  }

  // TODO
  cout << left << setw(10) << "COLOR" << ' ' << setw(11) << "DECIMAL(rgb)"
       << setw(11) << ' ' << setw(8) << "HEXADECIMAL(rgb)" << endl;
  cout << right << setfill('=') << setw(11) << "= " << setfill('=') << setw(23)
       << "= " << setfill('=') << setw(17) << "= " << endl;

  for (Color c : rainbow) {
    cout << left << setfill('_') << setw(10) << c.name << ' ' << dec
         << setfill(' ') << setw(4) << c.r // Decimal
         << setw(4) << c.g << setw(4) << c.b << ' ' << hex << setfill('_')
         << right << setw(10) << ' ' << setfill(' ') << setw(3)
         << c.r // Hexadecimal
         << setfill(' ') << setw(3) << c.g << setw(3) << c.b << endl;
  }

  // TODO
  ofstream rt_out("rainbows.txt");

  rt_out << left << setw(10) << "COLOR" << ' ' << setw(11) << "DECIMAL(rgb)"
         << setw(11) << ' ' << setw(8) << "HEXADECIMAL(rgb)" << endl;
  rt_out << right << setfill('=') << setw(11) << "= " << setfill('=')
         << setw(23) << "= " << setfill('=') << setw(17) << "= " << endl;

  for (Color c : rainbow) {
    rt_out << left << setfill('_') << setw(10) << c.name << ' ' << dec
           << setfill(' ') << setw(4) << c.r // Decimal
           << setw(4) << c.g << setw(4) << c.b << ' ' << hex << setfill('_')
           << right << setw(10) << ' ' << setfill(' ') << setw(3)
           << c.r // Hexadecimal
           << setfill(' ') << setw(3) << c.g << setw(3) << c.b << endl;
  }
  rt_out.close();
  return 0;
}