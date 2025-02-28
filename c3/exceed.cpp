#include <iostream>
#define ZERO 0
#include <climits>
int main(){
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars.\n";
    sam = sam + 1;
    sue = sue + 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars.\n";
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars.\n";
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars.\n";
    return 0;

}