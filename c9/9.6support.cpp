#include <iostream>
using namespace std;
extern double out;
void update(double d);
void local();

void update(double d)
{
    extern double out;
    out += d;
    cout << out << endl;
}

void local()
{
    double out = 3.14;
    cout << out << endl;
    cout << ::out << endl; // 访问全局变量
}