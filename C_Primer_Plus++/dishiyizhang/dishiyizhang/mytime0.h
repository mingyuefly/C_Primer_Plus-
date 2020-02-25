//
//  mytime0.h
//  dishiyizhang
//
//  Created by mingyue on 15/12/31.
//  Copyright © 2015年 G. All rights reserved.
//

#ifndef mytime0_h
#define mytime0_h

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
    Time Sum(const Time & t)const;
    void Show()const;
};







#endif /* mytime0_h */
