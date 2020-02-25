//
//  stone.cpp
//  dishiyizhang
//
//  Created by mingyue on 16/1/1.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
using std::cout;
#include "stonewt.h"
void display(const Stonewt st, int n);

int main(int argc, const char * argv[]){
    
    Stonewt pavarotti = 260;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);
    
    cout << "The tenor weighed ";
    pavarotti.show_stn();
    cout << "The detective weighted ";
    wolfe.show_stn();
    cout << "The President weighed: ";
    taft.show_lbs();
    pavarotti = 265.8;
    taft = 325;
    cout << "After dinner, the tenor weighed ";
    pavarotti.show_stn();
    cout << "After dinner, the President weighed ";
    taft.show_lbs();
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    
    cout << "No stone left uneared\n";
    
    
    return 0;
}

void display(const Stonewt st, int n){
    for (int i = 0; i < n; i++) {
        cout << "Wow!";
        st.show_stn();
    }
}




