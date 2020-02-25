//
//  mytime1.h
//  dishiyizhang
//
//  Created by mingyue on 15/12/31.
//  Copyright © 2015年 G. All rights reserved.
//

#ifndef mytime1_h
#define mytime1_h

class Time{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time & t)const;
    void Show()const;

};



#endif /* mytime1_h */
