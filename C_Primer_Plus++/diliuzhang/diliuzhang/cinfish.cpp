//
//  cinfish.cpp
//  diliuzhang
//
//  Created by mingyue on 15/12/23.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

const int Max = 5;

int main(int argc, const char * argv[]){
    
    using namespace std;
    double fish[Max];
    cout << "Please enter the weights of your fish.\n;"
    << " fish <q to terminate>.\n";
    cout << "fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i]) {
        if (++i < Max) {
            cout << "fish #" << i+1 << ": ";
        }
    }
    
    double total = 0.0;
    for (int j = 0; j < i; j++) {
        total += fish[j];
    }
    
    if (i == 0) {
        cout << "No fish\n";
    }else{
        cout << total / i << " = average weight of " << i << " fish\n";
    }
    
    cout << "Done.\n";
    
    return 0;
}
