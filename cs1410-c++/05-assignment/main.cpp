#include "stringbuilder.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[])
{
    // use both constructors
    StringBuilder sb1;
    StringBuilder sb2("Hello, world!");

    // next, verify that the constructor created the object correctly and that
    // the StringBuilder::str() method is working properly
    cout << "sb1: " << sb1.str() << endl;
    if (sb1.str() == "") {
        cout << "(sb1 is empty.)" << endl;
    }
    cout << endl;

    cout << "sb2: " << sb2.str() << endl;
    cout << endl;

    // test StringBuilder::operator*()
    cout << "What is sb2 * 5?" << endl;
    sb2.append(" "); // I implemented StringBuilder::append() in order to make
    sb2 * 5; // it easier to add a space, so that StringBuilder::operator*()
    cout << sb2 << endl; // would have prettiter output here
    cout << endl;

    // test StringBuilder::operator*() to make sure `sb * 1` does not change `sb`
    cout << "What is sb2 * 1?" << endl;
    sb2 * 1; // it easier to add a space, so that StringBuilder::operator*()
    cout << sb2 << endl; // would have prettiter output here
    cout << endl;

    // test StringBuilder::operator==(), first time
    cout << "Are they equal?" << endl;
    cout << (sb1 == sb2) << endl;
    cout << endl;

    // test StringBuilder::operator!=(), first time
    cout << "Are they NOT equal?" << endl;
    cout << (sb1 != sb2) << endl;
    cout << endl;

    // update sb1 so that it SHOULD match sb2
    "Hello, world! " >> sb1;
    sb1 * 5;
    cout << "sb1 has been updated, it should now be EQUAL to sb2." << endl;
    cout << endl;
    cout << "sb1: " << sb1.str() << endl;
    cout << "sb2: " << sb2.str() << endl;
    cout << endl;

    // test StringBuilder::operator==(), a second time
    cout << "Are they equal?" << endl;
    cout << (sb1 == sb2) << endl;
    cout << endl;

    // test StringBuilder::operator!=(), a second time
    cout << "Are they NOT equal?" << endl;
    cout << (sb1 != sb2) << endl;

    return 0;
}
