//
//  showpt.cpp
//  dishiqizhang
//
//  Created by mingyue on 16/2/2.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]){
    
    using std::cout;
    using std::ios_base;
    float price1 = 20.40;
    float price2 = 1.9 + 8.0 / 9.0;
    
    cout.setf(ios_base::showpoint);
    cout << "\"Furry Friends\" is $" << price1 << "!\n";
    cout << "\"Furry Freends\" is $" << price2 << "!\n";
    
    cout.precision(2);
    cout << "\"Furry Friends\" is $" << price1 << "!\n";
    cout << "\"Fiery Friends\" is $" << price2 << "!\n";
    
    float price3 = 3214.233;
    cout << price3 << "\n"/* << endl;*/;
    

    return 0;
}
