#include <iostream>
#include "mytime.h"
using namespace std;


int main()
{
    Time t1(4, 35);
    Time t2(2, 47);
    Time sum;
    Time diff;
    Time adjust;

    

    cout << "t1 = ";
    cout << t1 << endl;
    cout << "t2 = ";
    cout << t2 << endl;
    
    sum = t1 + t2;

    cout << "t1 + t2 = ";
    cout << sum << endl;
    diff = t1 - t2;

    cout << "t1 - t2 = ";
    cout << diff << endl;

    adjust = sum * 1.5;
    adjust = 1.5 * adjust;

    cout << "t1 * 1.5 = ";
    cout << adjust << endl;

    return 0;
}