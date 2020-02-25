//
//  textin4.cpp
//  diwuzhang
//
//  Created by mingyue on 15/12/23.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]){
    
    using namespace std;
    int ch;
    int count = 0;
    
    while ((ch = cin.get()) != EOF) {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << count << " characters read\n";

    return 0;
}
