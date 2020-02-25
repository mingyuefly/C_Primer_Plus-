//
//  not.cpp
//  diliuzhang
//
//  Created by mingyue on 15/12/23.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include <climits>

using namespace std;

bool is_int(double);

int main(int argc, const char * argv[]){
    
    
    double num;
    
    cout << "Yo, dude! Enter an integer value: ";
    cin >> num;
    while (!is_int(num)) {
        cout << "Out of range -- please try again: ";
        cin >> num;
    }
    
    int val = int(num);
    cout << "You've entered the integer " << val << "\nBye\n";

    return 0;
}

bool is_int(double x){
    cout << INT_MIN << "\t" << INT_MAX << endl;
    if (x <= INT_MAX && x >= INT_MIN) {
        return true;
    }else{
        return false;
    }

}


