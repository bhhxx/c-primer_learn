#include <iostream>
using namespace std;
void cheers(int);
double cube(double x);
int main()
{
    cheers(5);
    cout << cube(2.0) << endl;
    return 0;
}
void cheers(int n)
{
    for (int i = 0; i < n; i++){
        cout << "Cheers!" << endl;
    }
    cout << "Be rational." << endl;
}
double cube(double x)
{
    return x * x * x;
}