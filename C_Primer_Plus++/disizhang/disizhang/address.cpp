//
//  address.cpp
//  disizhang
//
//  Created by mingyue on 15/12/21.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

int main(int argc, const char *argv[]){

    using namespace std;
    int donuts = 6;
    double cups = 4.5;
    
    cout << "double values = " << donuts;
    cout << " and donuts address = " << &donuts << endl;
    //NOTE: you may need to use unsigned (&donuts)
    //and unsigned (&cups)
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    
    return 0;
}
