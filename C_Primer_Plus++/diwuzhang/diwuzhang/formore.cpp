//
//  formore.cpp
//  diwuzhang
//
//  Created by mingyue on 15/12/22.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

using namespace std;

const int ArSize = 16;

int main(int argc, const char * argv[]){

    double factorials[ArSize];
    factorials[1] = factorials[0] = 1.0;
    int i;
    for (i = 2; i < ArSize; i++) {
        factorials[i] = i * factorials[i - 1];
    }
    
    for (i = 0; i < ArSize; i++) {
        cout << i << "! = " << factorials[i] << endl;
    }

    return 0;
}
