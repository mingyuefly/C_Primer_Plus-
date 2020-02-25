//
//  fill.cpp
//  dishiqizhang
//
//  Created by mingyue on 16/2/2.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]){

    using std::cout;
    cout.fill('*');
    const char * staff[2] = {"Waldo Whipsnade", "Wilmarie Wooper"};
    long bonus[2] = {900, 1350};
    
    for (int i = 0; i < 2; i++) {
        cout << staff[i] << ": $";
        cout.width(7);
        cout << bonus[i] << "\n";
    }


    return 0;
}
