#include <cstring>
#include "stringbad.h"

using namespace std;
int StringBad::num_strings = 0;
StringBad::StringBad(const char *s)
{
    length = strlen(s);
    str = new char[length + 1];
    strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad::StringBad()
{
    length = 4;
    str = new char[5];
    strcpy(str, "C++");
    num_strings++;
    cout << num_strings << ": \"" << str << "\" default object created\n";
}

StringBad::~StringBad()
{
    cout << "\"" << str << "\" object deleted\n";
    num_strings--;
    cout << num_strings << " left\n";
    delete[] str;
}

ostream &operator<<(ostream &os, const StringBad &sb)
{
    os << sb.str;
    return os;
}