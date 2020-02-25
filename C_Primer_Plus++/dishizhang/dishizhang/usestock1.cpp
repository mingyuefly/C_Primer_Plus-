//
//  usestock1.cpp
//  dishizhang
//
//  Created by mingyue on 15/12/30.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include "stock1.h"

int main(int argc, const char * argv[]){

    using std::cout;
    using std::ios_base;
    cout.precision(2);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::showpoint);
    
    cout << "Using construcors to create new objects\n";
    Stock stock1 = Stock("NanoSmart", 12, 20.0);
    stock1.show();
    Stock stock2 = Stock("Boffo Objects", 2, 2.0);
    stock2.show();
    
    cout << "Assigning stock1 to stock2: \n";
    stock2 = stock1;
    cout << "Listing stock1 and stock2: \n";
    stock1.show();
    stock2.show();
    
    cout << "Using a constructor to reset an object\n";
    stock1 = Stock("Nifty Foods", 10, 50.0);
    cout << "Revised stock1: \n";
    stock1.show();
    cout << "Done\n";    
    

    return 0;
}
