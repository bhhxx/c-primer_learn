#include <iostream>
#include <cmath>
#include "coordin.h" // 引入结构体

polar rect_to_polar(rect r)
{
    using namespace std;
    polar p;
    p.distance = sqrt(r.x * r.x + r.y * r.y);
    p.angle = atan2(r.y, r.x);
    return p;
}

void show_polar(polar d)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    cout << "polar coordinates: r = " << d.distance
         << ", angle = " << d.angle * Rad_to_deg << " degrees" << endl;

}