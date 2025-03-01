#include <iostream>
void simple();
int main()
{
    using namespace std;
    cout << "main() will call simple() \n";
    simple();
    cout << "main() is finished with simple()\n";
    return 0;
}

void simple()
{
    using namespace std;
    cout << "simple() is starting\n";
    cout << "simple() is finished\n";
    
}