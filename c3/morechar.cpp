#include <iostream>
using namespace std;

int main(){
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;
    
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    cout.put('!'); // can also use cout.put('\n');
    cout << endl;
    return 0;
}