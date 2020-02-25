//
//  twofile2.cpp
//  dijiuzhang
//
//  Created by mingyue on 15/12/29.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

extern int tom;
static int dick = 10;
int harry = 200;

void remote_access(){
    using namespace std;
    cout << "remote_access() reports the following address: \n";
    cout << &tom << " = &tom. " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
}
