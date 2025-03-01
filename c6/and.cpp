// and.cpp -- using the logical AND operator
#include <iostream>
using namespace std;
const int ArSize = 6;
int main()
{
    float naaq[ArSize];
    cout << "Enter the NAAQs (New Age Awareness Quotients) of\n";
    cout << "your neighbors. Program terminates when you enter\n";
    cout << "a negative value. or when you have entered " << ArSize << " entries.\n";
    int i = 0;
    float temp;
    cout << "First value: ";
    cin >> temp;
    while (i < ArSize && temp >= 0)
    {
        naaq[i] = temp;
        ++i;
        if (i < ArSize)
        {
            cout << "Next value: ";
            cin >> temp;
        }
    }
    if (i == 0)
        cout << "No data entered.\n";
    else
    {
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++)
            if (naaq[j] > you)
                ++count;

        cout << count;
        cout << " of your neighbors have greater NAAQs than you.\n";
    }
    return 0;
}