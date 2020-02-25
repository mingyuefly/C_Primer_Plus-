//
//  dowhile.cpp
//  diwuzhang
//
//  Created by mingyue on 15/12/22.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]){

    using namespace std;
    int n;
    cout << "Enter numbers in the ranges 1-10 to find ";
    cout << "my favorite number\n";
    do{
        cin >> n;
    }while (n != 7);
    
    cout << "Yes, 7 is my favorite.\n";
    
    
    return 0;
}
