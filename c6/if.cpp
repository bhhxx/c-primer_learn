// if.cpp -- using the if statement
#include <iostream>
using namespace std;

int main()
{
    char ch;
    int spaces = 0, total = 0;
    cin.get(ch); // 这行可以排除掉ch为空时total加一的情况
    while (ch !='.'){
        if (ch == ' ')
            spaces++;
        total++;
        cin.get(ch);
    }
    cout << spaces << " spaces, " << total << " characters.\n";
}