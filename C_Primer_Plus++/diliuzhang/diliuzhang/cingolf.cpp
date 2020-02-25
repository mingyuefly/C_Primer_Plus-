//
//  cingolf.cpp
//  diliuzhang
//
//  Created by mingyue on 15/12/23.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
const int Max = 5;

int main(int argc, const char * argv[]){
    
    using namespace std;
    int golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << Max << " rounds.\n";
    int i;
    
    for (i = 0; i < Max; i++) {
        cout << "round #" << i+1 << ": ";
        while (!(cin >> golf[i])) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Please enter a number: ";
        }
    }
    
    double total = 0.0;
    for (i = 0; i < Max; i++) {
        total += golf[i];
    }
    cout << total / Max << " = average score " << Max << " rounds\n";
    
    return 0;
}
