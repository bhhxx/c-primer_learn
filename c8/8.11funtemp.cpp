#include <iostream>

using namespace std;

template <class T>
void Swap(T &a, T &b); // swap()是内置


int main(){
    int i = 10, j = 20;
    double x = 10.5, y = 20.5;
    cout << "i = " << i << " j = " << j << endl;
    swap(i, j);
    cout << "swap(i, j)" << endl;
    cout << "i = " << i << " j = " << j << endl;

    cout << "x = " << x << " y = " << y << endl;
    swap(x, y);
    cout << "swap(x, y)" << endl;
    cout << "x = " << x << " y = " << y << endl;
    return 0;
}


template <class T>
void Swap(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}