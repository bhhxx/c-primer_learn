#include <iostream>
using namespace std;

int main()
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex; // switch to hexadecimal
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct; // switch to octal
    cout << "inseam = " << inseam << " (octal for 42)" << endl;

    return 0;
}