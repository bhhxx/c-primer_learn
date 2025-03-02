#include <iostream>
template <class T>
void Swap(T &a, T &b);

template <class T>
void Swap(T *a, T *b, int n);

void Show(int a[]);
const int Lim = 8;
int main() {
    using namespace std;
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << endl;
    cout << "Using compiler-generated int swapper: " << endl;
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j << endl;

    int d1[Lim] = {0, 7, 14, 21, 28, 35, 42, 49};
    int d2[Lim] = {100, 200, 300, 400, 500, 600, 700, 800};
    cout << "Original arrays: " << endl;
    Show(d1);
    Show(d2);
    Swap(d1, d2, Lim);
    cout << "Swapped arrays: " << endl;
    Show(d1);
    Show(d2);

    return 0;
}

template <class T>
void Swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <class T>
void Swap(T *a, T *b, int n) {
    for (int i = 0; i < n; i++) {
        T temp;
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void Show(int a[]) {
    using namespace std;
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for (int i = 4; i < Lim; i++)
        cout << a[i];
    cout << endl;
}