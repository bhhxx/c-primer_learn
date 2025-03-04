#include <iostream>
using namespace std;
#include "stringbad.h"
void callme1(StringBad & rsb);
void callme2(StringBad sb);

int main()
{
    {
        cout << "Starting an inner block.\n";
        StringBad headline1("Celery Stalks at Midnight"); // 构造
        StringBad headline2("Lettuce Prey"); // 构造
        StringBad sports("Spinach Leaves Bowl for Dollars"); // 构造
        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;

        callme1(headline1); // 传递引用
        cout << "headline1: " << headline1 << endl;
        callme2(headline2);  // 传递值 // 析构 // 改变了 headline2
        cout << "headline2: " << headline2 << endl;

        cout << "Initialize one StringBad with another:\n";
        StringBad sailor = sports; // 
        cout << "sailor: " << sailor << endl;

        cout << "Assign one StringBad to another:\n";
        StringBad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";
        cout << headline1 << endl;
    }
    cout << "end of block.\n";

    return 0;
}


void callme1(StringBad & rsb)
{
    cout << "String passed by reference:\n";
    cout << "    \"" << rsb << "\"\n";
}
void callme2(StringBad sb)
{
    cout << "String passed by value:\n";
    cout << "    \"" << sb << "\"\n";
}