// cctypes.cpp -- using the ctype.h library
#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    cout << "Enter text for analysis, and type @ to terminate.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);
    while (ch != '@')
    {
        if (isspace(ch)) // 是不是空白字符
            ++whitespace;
        else if (isdigit(ch)) // 是不是数字
            ++digits;
        else if (isalpha(ch)) // 是不是字母
            ++chars;
        else if (ispunct(ch)) // 是不是标点符号
            ++punct;
        else
            ++others;
        cin.get(ch);
    }
    cout << "\nDigit characters: " << digits << endl;
    cout << "White space characters: " << whitespace << endl;
    cout << "Punctuation characters: " << punct << endl;
    cout << "Alphabet characters: " << chars << endl;
    cout << "Other characters: " << others << endl;
    return 0;
}