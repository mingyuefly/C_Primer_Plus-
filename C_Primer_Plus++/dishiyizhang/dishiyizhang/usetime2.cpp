//
//  usetime2.cpp
//  dishiyizhang
//
//  Created by mingyue on 15/12/31.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include "mytime2.h"

int main(int argc, const char * argv[]){
    
    using std::cout;
    using std::endl;
    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;
    
    //cout << weeding.hours << endl;//not allowed
    
    cout << "weeding time = ";
    weeding.Show();
    cout << endl;
    
    cout << "total work time = ";
    total = weeding + waxing;
    total.Show();
    cout << endl;
    
    diff = weeding - waxing;
    cout << "weeding time - waxing time = ";
    diff.Show();
    cout << endl;
    
    adjusted = total * 1.5;
    cout << "adjusted work time = ";
    adjusted.Show();
    cout << endl;
    
    return 0;
}
