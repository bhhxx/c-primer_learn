#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt 
{
private:
    enum { Lbs_per_stn = 14 };
    int stone;
    double pds_left, pds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_stn() const;
    void show_pds() const;

};

#endif /* STONEWT_H_ */