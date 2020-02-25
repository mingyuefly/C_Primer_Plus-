//
//  block.cpp
//  diwuzhang
//
//  Created by mingyue on 15/12/22.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]){
    
    using namespace std;
    cout << "The Amazing Account will sum and average ";
    cout << "five numbers for you.\n";
    cout << "Please enter five values: \n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; i++) {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Five exquisite choice indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << ".\n";
    cout << "The Amazing Account bids you adieu!\n";

    return 0;
}
