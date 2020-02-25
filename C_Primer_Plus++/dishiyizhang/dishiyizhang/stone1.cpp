//
//  stone1.cpp
//  dishiyizhang
//
//  Created by mingyue on 16/1/1.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include "stonewt1.h"

int main(int argc, const char * argv[]){
    
    using std::cout;
    Stonewt poppins(9, 2.8);
    double p_wt = poppins;
    cout << "Convert to double => ";
    cout << "Poppings: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Poppins: " << int(poppins) << " pounds.\n";
    Stonewt poppins1(10, 3.8);
    int int_wt = poppins1;
    cout << "Conver to int => ";
    cout << "Poppins1: " << int_wt << " pounds.\n";

    return 0;
}
