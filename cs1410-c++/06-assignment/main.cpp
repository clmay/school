#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[]) {
  // file handles for input and output streams
  ifstream in_f("operations-in.txt");
  ofstream out_f("operations-out.txt");

  // variable to store each line of the file
  string line;

  // variables to store the tokens of in each line
  string op;
  string lhs;
  string rhs;

  while (getline(in_f, line)) {
    // the operator is always the first character in the line
    op = line.substr(0, 1);

    // get the index where the first set of spaces begins
    int index_spaces_1 = line.find("  ");

    // get the index where the second set of spaces begins
    // this is always at least four characters after the first set of spaces
    // (since every number after the first set of spaces is also two characters
    // wide)
    // second argument to `find()` is starting index
    int index_spaces_2 = line.find("  ", index_spaces_1 + 4);

    // the groups of spaces are always at least 2 spaces wide
    // the first number begins two characters after the first set of spaces and
    // continues for two characters
    string num_1 = line.substr(index_spaces_1 + 2, 2);
    // the second number begins two characters after the second set of spaces
    // and continues for two characters
    string num_2 = line.substr(index_spaces_2 + 2, 2);

    // sometimes the number is a single digit aligned to the right of the
    // column, so we need to account for (and remove) the extra space in that
    // case
    if (num_1.substr(0, 1) == " ") {
      num_1 = num_1.substr(1);
    }
    if (num_2.substr(0, 1) == " ") {
      num_2 = num_2.substr(1);
    }

    // assignment requires printing each line to stdout
    cout << line << endl;

    // (these are here for testing)
    cout << "Operator: " << op << endl;
    cout << "Number 1: " << num_1 << endl;
    cout << "Number 2: " << num_2 << endl;
    cout << endl;

    // assignment requires outputting each line to the file, too
    out_f << line << endl;

    // (these are here for testing)
    out_f << op << endl;
    out_f << index_spaces_1 << endl;
    out_f << index_spaces_2 << endl;
  }

  in_f.close();
  out_f.close();
  return 0;
}
