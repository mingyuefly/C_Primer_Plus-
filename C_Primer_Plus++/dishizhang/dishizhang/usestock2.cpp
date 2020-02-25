//
//  usestock2.cpp
//  dishizhang
//
//  Created by mingyue on 15/12/30.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include "stock1.h"

const int STKS = 4;

int main(int argc, const char * argv[]){
    
    using std::cout;
    using std::ios_base;
    
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5),
    };
    
    cout.precision(2);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    
    cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STKS; st++) {
        stocks[st].show();
    }

    Stock top = stocks[0];
    for (st = 1; st < STKS; st++) {
        top = top.topval(stocks[st]);
    }
    cout << "\nMost valuable holding:\n";
    top.show();    
    
    return 0;
}
