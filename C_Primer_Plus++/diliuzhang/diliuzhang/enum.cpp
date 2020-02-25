//
//  enum.cpp
//  diliuzhang
//
//  Created by mingyue on 15/12/23.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

enum {red, orange, yellow, green, blue, violet, indigo};

int main(int argc, const char * argv[]){
    
    using namespace std;
    cout << "Enter color code(0-6): ";
    int code;
    cin >> code;
    while (code >= red && code <= indigo) {
        switch (code) {
            case red:
                cout << "Her lips were red.\n";
                break;
            case orange:
                cout << "Her hair was orange.\n";
                break;
            case yellow:
                cout << "Her shoes were yellow.\n";
                break;
            case green:
                cout << "Her nails were green.\n";
                break;
            case blue:
                cout << "Her sweatsuit were blue.\n";
                break;
            case violet:
                cout << "Her eyes were violet.\n";
                break;
            case indigo:
                cout << "Her mood were indigo.\n";
                break;
            default:
                break;
        }
        cin >> code;
    }
    cout << "Bye\n";
    return 0;
}
