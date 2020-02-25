//
//  comstr2.cpp
//  diwuzhang
//
//  Created by mingyue on 15/12/22.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]){
    
    using namespace std;
    string word = "?ate";
    
    for (char ch = 'a'; word != "mate"; ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    
    cout << "After loop ends, word is " << word << endl;
    
    return 0;
}
