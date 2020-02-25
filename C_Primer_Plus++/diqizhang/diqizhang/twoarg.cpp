//
//  twoarg.cpp
//  diqizhang
//
//  Created by mingyue on 15/12/24.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

using namespace std;

void n_chars(char, int);

int main(int argc, const char * argv[]){
    
    int times = 0;
    char ch;
    
    cout << "Enter a character: ";
    cin >> ch;
    while (ch != 'q') {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times);
        cout << "\nEnter another character or press the"
        " q-key to quit: ";
        cin >> ch;
    }
    cout << "The value of times is " << times << ".\n";
    cout << "Bye\n";

    return 0;
}

void n_chars(char c, int n){
    //cout << c << "\t" << n << endl;
    while (n-- > 0) {
        cout << c;
    }

}
