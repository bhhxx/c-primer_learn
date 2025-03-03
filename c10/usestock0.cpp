#include <iostream>
#include "stock00.h"
int main() {
    Stock stocks[4] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Booyah", 200, 2.0),
        Stock("Monolithic Obelisk", 130, 3.25),
        Stock("Fleep", 60, 6.5)
    };
    std::cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < 4; st++) {
        stocks[st].show();
    }
    const Stock *top = &stocks[0];
    for (st = 1; st < 4; st++) {
        top = &top->topval(stocks[st]);
    }
    std::cout << "\nMost valuable holding:\n";
    top->show();
    return 0;
}