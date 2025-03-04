#ifndef STRINGBAD_H_
#define STRINGBAD_H_
#include <iostream>
class StringBad {
private:
    char *str;
    int length;
    static int num_strings;
public:
    StringBad(const char *s); // 构造函数
    StringBad(); // 默认构造函数

    // StringBad(const StringBad &sb); // 拷贝构造函数
    // 下面四种情况，会调用拷贝构造函数
    // StringBad ditto(motto);  // 
    // StringBad metoo = motto;
    // StringBad also = StringBad(motto); // 
    // StringBad * p = new StringBad(motto); // 创建一个匿名对象，将新对象的地址赋给指针p

    ~StringBad();
    friend std::ostream &operator<<(std::ostream &os, const StringBad &sb);
};
#endif // STRINGBAD_H_