//
//  comstr1.cpp
//  diwuzhang
//
//  Created by mingyue on 15/12/22.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include <cstring>

int main(int argc, const char * argv[]){

    using namespace std;
    char word[5] = "?ate";
    
    for (char ch = 'a'; strcmp(word, "mate"); ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    
    cout << "After loop ends, word is " << word << endl;

    return 0;
}
