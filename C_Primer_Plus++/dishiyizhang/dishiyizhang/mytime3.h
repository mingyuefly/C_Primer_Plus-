//
//  mytime3.h
//  dishiyizhang
//
//  Created by mingyue on 15/12/31.
//  Copyright © 2015年 G. All rights reserved.
//

#ifndef mytime3_h
#define mytime3_h

#include <iostream>

class Time{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h = 0, int m = 0);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time & t)const;
    Time operator-(const Time & t)const;
    Time operator*(double n)const;
    friend Time operator*(double m, const Time & t){
        return t * m;
    }
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
};



#endif /* mytime3_h */
