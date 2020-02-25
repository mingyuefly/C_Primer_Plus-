//
//  setf2.cpp
//  dishiqizhang
//
//  Created by mingyue on 16/2/2.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]){

    using namespace std;
    cout.setf(ios_base::left, ios_base::adjustfield);
    cout.setf(ios_base::showpos);
    cout.setf(ios_base::showpoint);
    cout.precision(3);
    
    ios_base::fmtflags old = cout.setf(ios_base::scientific, ios_base::floatfield);
    cout << "Left Justiication: \n";
    long n;
    for (n = 1; n <= 4l; n+=10) {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }
    
    cout.setf(ios_base::internal, ios_base::adjustfield);
    cout.setf(old, ios_base::floatfield);
    
    cout << "Internal Justification: \n";
    for (n = 1; n <= 41; n+=10) {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }
    
    cout.setf(ios_base::right, ios_base::adjustfield);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Right Justification: \n";
    
    for (n = 1; n <= 41; n+=10) {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }
    
    
    

    return 0;
}

