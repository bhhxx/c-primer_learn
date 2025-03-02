// left.cpp -- string function with a default argument
#include <iostream>
const int ArSize = 80;
char *left(const char *str, int n = 1); // 函数原型：函数返回值是指向字符的指针，参数是指向字符的指针和整数
int main()
{
    using namespace std;
    char sample[ArSize];
    cout << "Enter a string:\n";
    cin.get(sample, ArSize);
    char *ps = left(sample, 4);
    cout << ps << endl;
    delete[] ps;
    ps = left(sample); // 使用默认参数
    cout << ps << endl;
    delete[] ps;
    return 0;
}
char *left(const char *str, int n){
    if(n < 0)
        n = 0;
    char *p = new char[n+1];
    int i;
    for(i = 0; i < n && str[i]; i++)
        p[i] = str[i];
    while(i <= n)
        p[i++] = '\0';
    return p;
}