// more_and.cpp -- using the logical AND operator
#include <iostream>
const char * qualify[4] = {
    "10,000-meter race. \n",
    "marathon. \n",
    "swimming race. \n",
    "long jump. \n"
};
int main()
{
    using namespace std;
    int age;
    int index;
    cout << "Enter your age: ";
    cin >> age;
    if (age > 17 && age < 35)
        index = 0;
    else if (age >= 35 && age < 50)
        index = 1;
    else if (age >= 50 && age < 65)
        index = 2;
    else
        index = 3;
    cout << "You qualify for the " << qualify[index];
    return 0;
}