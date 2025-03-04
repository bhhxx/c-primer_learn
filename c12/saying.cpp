#include <iostream>
#include "string.h"

const int Arsize = 10;
const int Maxlen = 81;

int main()
{
    using namespace std;
    String name; // 默认构造函数
    cout << "Enter your name: ";
    cin >> name;
    String name2 = name; // 拷贝构造函数
    cout << "Hi, " << name2 << ".\n";
    cout << name << ", please enter up to " << Arsize
         << " short sayings <empty line to quit>:\n";
    String sayings[Arsize]; // 默认构造函数
    char temp[Maxlen];
    int i = 0;
    for (i = 0; i < Arsize; i++)
    {
        cout << i + 1 << ": ";
        cin.get(temp, Maxlen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')
            break;
        else
            sayings[i] = temp;
    }
    int total = i;
    if (total > 0)
    {
        cout << "\nHere are your sayings:\n";
        for (i = 0; i < total; i++)
            cout << sayings[i][0] << " :" << sayings[i] << endl;
        int shortest = 0;
        int first = 0;
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < sayings[shortest].length())
                shortest = i;
            if (sayings[i] < sayings[first])
                first = i;
        }
        cout << "Shortest saying:\n" << sayings[shortest] << endl;
        cout << "First alphabetically:\n" << sayings[first] << endl;
        cout << "This program used " << String::HowMany() << " String objects.\n";
    }
    else
        cout << "No input! \n";
    return 0;
}