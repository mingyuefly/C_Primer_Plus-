//
//  stonewt.h
//  dishiyizhang
//
//  Created by mingyue on 16/1/1.
//  Copyright © 2016年 G. All rights reserved.
//

#ifndef stonewt_h
#define stonewt_h

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
};





#endif /* stonewt_h */
