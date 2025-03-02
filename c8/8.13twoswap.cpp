#include <iostream>

template <class T>
void Swap(T &a, T &b);

struct job {
    char name[40];
    double salary;
    int floor;
};

template <> void Swap<job>(job &a, job &b);

void Show(job &j);
int main()
{
    using namespace std;
    cout.precision(2); // 什么意思,控制输出精度
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << endl;
    cout << "Using compiler-generated int swapper: " << endl;
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j << endl;

    job sue = {"Susan Yaffee", 73000.0, 7};
    job sidney = {"Sidney Taffee", 78000.0, 9};
    cout << "Before job swapping: " << endl;
    Show(sue);
    Show(sidney);
    Swap(sue, sidney);
    cout << "After job swapping: " << endl;
    Show(sue);
    Show(sidney);
    return 0;
}

template <class T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <> void Swap<job>(job &a, job &b)
{
    double t1 = a.salary;
    a.salary = b.salary;
    b.salary = t1;
    int t2 = a.floor;
    a.floor = b.floor;
    b.floor = t2;
}
void Show(job &j)
{
    using namespace std;
    cout << j.name << ": " << j.floor << ", " << j.salary << endl;
}
