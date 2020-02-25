//
//  textin3.cpp
//  diwuzhang
//
//  Created by mingyue on 15/12/23.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>


int main(int argc, const char * argv[]){

    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);
    while (cin.fail() == false) {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    
    cout << endl << count << "Characters read\n";

    return 0;
}
