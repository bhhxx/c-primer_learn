// ifelse.cpp -- using the if else statement
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Type, and I shall repeat what you type.\n";
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
            cout << ch;
        else{
            
            // cout << ch + 1; // 显示ch + 1的字面值
            // ch = ch + 1;
            cout << ++ch; // 显示ch + 1的字符值
        }
        cin.get(ch);
    }
    cout << "\nPlease excuse the slight confusion.\n";
    return 0;
}