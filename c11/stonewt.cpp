#include <iostream>
using namespace std;
#include "stonewt.h"

Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pds = stn * Lbs_per_stn + lbs;
}
Stonewt::Stonewt()
{
    stone = pds_left = pds = 0;
}

Stonewt::~Stonewt()
{
    cout << "destructor called"
         << endl;
}

void Stonewt::show_stn() const
{
    cout << stone << " stone " << pds_left << " pounds" << endl;
}

void Stonewt::show_pds() const
{
    cout << pds << " pounds"
         << endl;
}