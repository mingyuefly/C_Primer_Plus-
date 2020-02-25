//
//  modulus.cpp
//  diyizhang
//
//  Created by mingyue on 15/12/16.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>


int main(int argc, const char *argv[]){

    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;
    
    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs/Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    cout << lbs << " pound are " << stone;
    cout << " stone, " << pounds << " pound(s).\n";

    return 0;
}
