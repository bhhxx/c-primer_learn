#ifndef MYTIME_H_
#define MYTIME_H_
#include <iostream>
class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h, int m);
    Time operator+(const Time& t) const;
    Time operator-(const Time& t) const;
    Time operator*(double mult) const;
    friend Time operator*(double mult, const Time& t){
        return t * mult;
    }
    friend std::ostream& operator<<(std::ostream& os, const Time& t);
};



#endif // !MYTIME_H_