//
//  worktest.cpp
//  dishisizhang
//
//  Created by mingyue on 16/1/13.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include "Worker0.h"
const int LIM = 4;
int main(int argc, const char * argv[]){
    
    Waiter bob("Bob Apple", 314L, 5);
    Singer bev("Beverly Hills", 522L, 3);
    Waiter w_temp;
    
    Singer s_temp;
    Worker * pw[LIM] = {&bob, &bev, &w_temp, &s_temp};
    
    int i;
    for (i = 2; i < LIM; i++) {
        pw[i]->Set();
    }
    for (i = 0; i < LIM; i++) {
        pw[i]->Show();
        std::cout << std::endl;
    }
    
    
    return 0;
}
