//
//  twofile1.cpp
//  dijiuzhang
//
//  Created by mingyue on 15/12/29.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main(int argc, const char * argv[]){
    
    using namespace std;
    cout << "main() reports the following address: \n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();

    return 0;
}
