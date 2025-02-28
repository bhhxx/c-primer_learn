#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "penguin";
    string s2, s3;

    cout << "You can assign one string object to another: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;

    cout << "You can initialize a string object from a C-style string: s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;
    cout << "You can concatenate strings: s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;

    cout << "You can add a character to a string: s1 += 'r'\n";
    s1 += 'r';
    cout << "s1: " << s1 << endl;

    return 0;
}