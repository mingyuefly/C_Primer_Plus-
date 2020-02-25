//
//  waiting.cpp
//  diwuzhang
//
//  Created by mingyue on 15/12/22.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include <ctime>

int main(int argc, const char * argv[]){
    
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << delay << endl;
    cout << "starting\a\n";
    clock_t start = clock();
    cout << start << endl;
    while (clock() - start < delay) {
        cout << clock() << endl;
        cout << "done\a\n";
    }
    
    return 0;
}
