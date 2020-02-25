//
//  mytime1.cpp
//  dishiyizhang
//
//  Created by mingyue on 15/12/31.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include "mytime1.h"

Time::Time(){
    hours = minutes = 0;
}

Time::Time(int h, int m){
    hours = h;
    minutes = m;
}

void Time::AddMin(int m){
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h){
    hours += h;
}

void Time::Reset(int h, int m){
    hours = h;
    minutes = m;
}

Time Time::operator+(const Time & t)const{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time::Show()const{
    std::cout << hours << " hours." << minutes << " minutes";
}




