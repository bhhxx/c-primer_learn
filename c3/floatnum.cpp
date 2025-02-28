#include<iostream>
using namespace std;
int main()
{
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;
    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub << endl;
}