//
//  file1.cpp
//  dijiuzhang
//
//  Created by mingyue on 15/12/28.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include "coordin.h"

using namespace std;

int main(int argc, const char * argv[]){
    
    rect rplace;
    polar pplace;
    
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y) {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";
    }
    
    cout << "Bye!\n";

    return 0;
}
