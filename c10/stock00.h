#ifndef STOCK00_H_
#define STOCK00_H_
#include <string>
using namespace std;
class Stock
{
private:
    string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock(const string & co, long n, double pr); // 构造函数
    Stock();
    ~Stock(){
        cout << "Bye, " << company << "!\n";
    } // 析构函数
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock & topval(const Stock & s) const;

};

#endif