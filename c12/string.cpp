#include <cstring>
#include "string.h"

using namespace std;
int String::num_strings = 0;
// 构造、析构、拷贝构造
String::String(const char *s)
{
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created\n";
    cout << "BBBBBBBBBBBBBBBBBBB" << endl;
}

String::String()
{
    len = 0;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
    cout << "CCCCCCCCCCCCCCCCCCCC" << endl;
}

String::String(const String &sb)
{
    len = sb.len;
    str = new char[len + 1];
    strcpy(str, sb.str);
    num_strings++;
    cout << "DDDDDDDDDDDDDDDDDDDDD" << endl;
}
String::~String()
{
    cout << "\"" << str << "\" object deleted\n";
    num_strings--;
    cout << num_strings << " left\n";
    delete[] str;
}


// 重载
String &String::operator=(const String &sb)
{
    if (this == &sb)
        return *this;
    delete[] str;
    len = sb.len;
    str = new char[len + 1];
    strcpy(str, sb.str);
    return *this;
}
String &String::operator=(const char *s)
{
    delete[] str;
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    return *this;
}

char &String::operator[](int i)
{
    return str[i];
}
const char &String::operator[](int i) const
{
    return str[i];
}

// 友元
bool operator<(const String &sb1, const String &sb2)
{
    return strcmp(sb1.str, sb2.str) < 0;
}

bool operator>(const String &sb1, const String &sb2)
{
    return strcmp(sb1.str, sb2.str) > 0;
}

bool operator==(const String &sb1, const String &sb2)
{
    return strcmp(sb1.str, sb2.str) == 0;
}


ostream &operator<<(ostream &os, const String &sb)
{
    os << sb.str;
    return os;
}
istream &operator>>(istream &is, String &sb)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        sb = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}