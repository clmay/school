#include "stringbuilder.h"
#include <iostream>
#include <string>
using namespace std;

// constructor: initializes `content` to an empty string
StringBuilder::StringBuilder()
{
    this->content = "";
}
// constructor: initializes `content` to `str`
StringBuilder::StringBuilder(const string& str)
{
    this->content = str;
}
// destructor
StringBuilder::~StringBuilder() {}

// a method I chose to add for convenience
void StringBuilder::append(string str)
{
    this->content += str;
}
// returns the contents of a `StringBuilder` object
const string& StringBuilder::str() const
{
    return this->content;
}
// duplicates the content `n` times within the `StringBuilder`
void StringBuilder::operator*(unsigned int n)
{
    string original = this->content;
    for (int i = 0; i < n; i++) {
        this->content += original;
    }
}
// compares whether the contents of two `StringBuilders` is equal
bool StringBuilder::operator==(StringBuilder& sb)
{
    return this->content == sb.content;
}
// compares whether the contents of two `StringBuilders` are different
bool StringBuilder::operator!=(StringBuilder& sb)
{
    return !(this->content == sb.content);
}
// allows you to store a `string` value into a `StringBuilder`
void operator>>(string str, StringBuilder& sb)
{
    sb.content = str;
}
// allows you to stream a `StringBuilder` into an output stream
ostream& operator<<(ostream& out, StringBuilder& sb)
{
    out << sb.content;
    return out;
}