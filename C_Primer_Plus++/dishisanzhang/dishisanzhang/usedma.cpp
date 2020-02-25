//
//  usedma.cpp
//  dishisanzhang
//
//  Created by mingyue on 16/1/12.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include "dma.h"

int main(int argc, const char * argv[]){
    
    using std::cout;
    using std::endl;
    
    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buffalo Keys", 5);
    cout << shirt << endl;
    cout << balloon << endl;
    cout << map << endl;
    //cout << map.style << endl;
    
    lacksDMA balloon2 = (balloon);
    hasDMA map2;
    map2 = map;
    cout << balloon2 << endl;
    cout << map2 << endl;
    
    
    return 0;
}
