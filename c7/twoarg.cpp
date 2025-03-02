// twoarg.cpp -- function with two arguments
#include <iostream>
using namespace std;

void n_chars(char c, int n);

int main()
{
    char ch;
    int n;

    cout << "Enter a character: ";
    cin >> ch;
    while (ch != 'q'){
        cout << "Enter an integer: ";
        cin >> n;
        n_chars(ch, n);
        cout << endl;
        cin >> ch;
    }
    return 0;
}
void n_chars(char c, int n)
{
    while (n-- > 0)
        cout << c;
}