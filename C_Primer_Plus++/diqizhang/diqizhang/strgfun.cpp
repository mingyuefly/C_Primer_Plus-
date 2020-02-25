//
//  strgfun.cpp
//  diqizhang
//
//  Created by mingyue on 15/12/24.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

int c_in_str(const char * str, char ch);

int main(int argc, const char * argv[]){
    
    using namespace std;
    char mmm[15] = "minimum";
    
    char * wail = "ululate";
    
    int ms = c_in_str(mmm, 'm');
    int us = c_in_str(wail, 'u');
    
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;
    

    return 0;
}

int c_in_str(const char * str, char ch){

    int count = 0;
    
    while (*str) {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    
    return count;
}
