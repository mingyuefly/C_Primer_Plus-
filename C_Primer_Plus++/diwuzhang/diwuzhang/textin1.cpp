//
//  textin1.cpp
//  diwuzhang
//
//  Created by mingyue on 15/12/22.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]){

    using namespace std;
    char ch;
    int count = 0;
    cin >> ch;
    
    while (ch != '#') {
        cout << ch;
        ++count;
        cin >> ch;
    }
    
    cout << endl << count << " characters read\n" << endl;
    
    return 0;
}
