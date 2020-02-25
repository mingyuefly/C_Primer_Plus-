//
//  recur.cpp
//  diqizhang
//
//  Created by mingyue on 15/12/24.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

void countdown(int n);

int main(int argc, const char * argv[]){
    
    countdown(4);

    return 0;
}

void countdown(int n){
    using namespace std;
    cout << "Counting down ... " << n << " (n at " << &n << ")" << endl;
    if (n > 0) {
        countdown(n-1);
    }
    cout << n << ": Kaboom!\n";
}
