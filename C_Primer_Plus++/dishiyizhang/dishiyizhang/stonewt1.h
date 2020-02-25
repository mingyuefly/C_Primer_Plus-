//
//  stonewt1.h
//  dishiyizhang
//
//  Created by mingyue on 16/1/1.
//  Copyright © 2016年 G. All rights reserved.
//

#ifndef stonewt1_h
#define stonewt1_h
class Stonewt{
private:
    enum{Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void show_lbs()const;
    void show_stn()const;
    operator int()const;
    operator double()const;

};



#endif /* stonewt1_h */
