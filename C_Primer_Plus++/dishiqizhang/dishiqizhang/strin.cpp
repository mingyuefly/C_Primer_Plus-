//
//  strin.cpp
//  dishiqizhang
//
//  Created by mingyue on 16/2/5.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char * argv[]){
    
    using namespace std;
    string lit = "It was a dark and stormy day, and"
    " the full moon glowed brilliantly. ";
    istringstream instr(lit);
    string word;
    while (instr >> word) {
        cout << word << endl;
    }


    return 0;
}
