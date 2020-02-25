//
//  check_it.cpp
//  dishiqizhang
//
//  Created by mingyue on 16/2/2.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]){

    using namespace std;
    cout << "Enter numbers: ";
    
    int sum = 0;
    int input;
    while (cin >> input) {
        sum += input;
    }
    
    cout << "Last value entered = " << input << endl;
    cout << "Sum = " << sum << endl;


    return 0;
}
