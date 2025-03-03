#include <iostream>
using namespace std;
double out = 0.3;

void update(double d);
void local();
int main(){
    cout << out << endl;
    update(0.1);
    cout << out << endl;
    local();
    cout << out << endl;
    return 0;
}