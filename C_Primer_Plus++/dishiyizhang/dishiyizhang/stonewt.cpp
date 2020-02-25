//
//  stonewt.cpp
//  dishiyizhang
//
//  Created by mingyue on 16/1/1.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
using std::cout;
#include "stonewt.h"

Stonewt::Stonewt(double lbs){
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs){
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt(){
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt(){

}

void Stonewt::show_stn()const{
    cout << stone << " stone, " << pds_left << " pounds\n";
}

void Stonewt::show_lbs()const{
    cout << pounds << " pounds\n";
}









