#include <iostream>
#include <cctype>
#include "stack.h"
using namespace std;

int main()
{
    Stack st;
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a purchase order, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << "WWWWWWWWWWWWWWWWWWWW";
            continue;
        }
        switch (ch)
        {
            case 'a':
                cout << "Enter a purchase order number: ";
                cin >> po;
                if (st.isFull())
                    cout << "stack already full\n";
                else
                    st.push(po);
                break;
            case 'p':
                if (st.isEmpty())
                    cout << "stack already empty\n";
                else{
                    st.pop(po);
                    cout << "PO #" << po << " popped\n";
                }
        }
    }
    cout << "Bye\n";
    return 0;
}