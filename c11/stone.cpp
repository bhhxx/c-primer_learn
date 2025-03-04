#include <iostream>
using namespace std;
#include "stonewt.h"
int main()
{
    Stonewt incognito = 275.1;
    Stonewt wolfe(287.5);
    // Stonewt taft(21, 8);
    incognito.show_stn();
    wolfe.show_stn();
    // taft.show_stn();


    // incognito = 276.8;
    // incognito.show_stn();

    // taft = 325;
    // taft.show_stn();

    return 0;
}