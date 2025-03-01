// condit.cpp -- using conditional operators
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "The larger of " << a << " and " << b;
    int max = a > b ? a : b; // use conditional operator to find max
    cout << " is " << max << endl;
    return 0;
}