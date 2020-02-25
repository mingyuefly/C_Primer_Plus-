//
//  typecast.cpp
//  diyizhang
//
//  Created by mingyue on 15/12/17.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>


int main(int argc, const char * argv[]){
    
    using namespace std;
    int auks,bats,coots;
    
    auks = 19.99 + 11.99;
    bats = (int)19.99 + (int)11.99;
    coots = int(19.99) + int (11.99);
    
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;
    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    
    return 0;
}
