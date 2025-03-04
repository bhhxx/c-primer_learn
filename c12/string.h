#ifndef STRING_H_
#define STRING_H_
#include <iostream>
class String {
private:
    char *str;
    int len;
    static int num_strings;
    static const int CINLIM = 100;
public:
    // 构造、析构、拷贝构造函数
    String(const char *s); // 构造函数
    String(); // 默认构造函数
    String(const String &sb); // 拷贝构造函数
    // 下面四种情况，会调用拷贝构造函数
    // String ditto(motto);  // 
    // String metoo = motto;
    // String also = String(motto); // 
    // String * p = new String(motto); // 创建一个匿名对象，将新对象的地址赋给指针p
    ~String();
    int length() const { return len; }

    // 重载运算符
    String &operator=(const String &);
    String &operator=(const char *);
    char &operator[](int i);
    const char &operator[](int i) const;
    // 重载友元
    friend bool operator<(const String &sb1, const String &sb2);
    friend bool operator>(const String &sb1, const String &sb2);
    friend bool operator==(const String &sb1, const String &sb2);
    friend std::istream &operator>>(std::istream &is, String &sb);
    friend std::ostream &operator<<(std::ostream &os, const String &sb);
    // 静态函数
    static int HowMany() { return num_strings; }
};
#endif // STRING_H_