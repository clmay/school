#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[]) {
  ifstream in_f("operations-in.txt");
  ofstream out_f("operations-out.txt");

  // variable to store each line of the file
  string line;
  string op;
  string lhs;
  string rhs;

  while (getline(in_f, line)) {
    op = line.substr(0, 1);
    int index_spaces_1 = line.find("  ");
    int index_spaces_2 = line.find("  ", index_spaces_1 + 1);

    cout << line << endl;
    cout << op << endl;
    cout << index_spaces_1 << endl;
    cout << index_spaces_2 << endl;

    out_f << line << endl;
    out_f << op << endl;
    out_f << index_spaces_1 << endl;
    out_f << index_spaces_2 << endl;
  }

  in_f.close();
  out_f.close();
  return 0;
}
