//
//  peeker.cpp
//  dishiqizhang
//
//  Created by mingyue on 16/2/2.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include <cstdlib>

int main(int argc, const char * argv[]){
    
    using std::cout;
    using std::cin;
    using std::endl;
    
    char ch;
    
    while (cin.get(ch)) {
        if (ch != '#') {
            cout << ch;
        }else{
            cin.putback(ch);
            break;
        }
    }
    
    if (!cin.eof()) {
        cin.get(ch);
        cout << endl << ch << " is next input character.\n";
    }else{
        cout << "End of file reached.\n";
        std::exit(0);
    }
    
    while (cin.peek() != '#') {
        cin.get(ch);
        cout << ch;
    }
    
    if (!cin.eof()) {
        cin.get(ch);
        cout << endl << ch << " is next input character.\n";
    }else{
        cout << "End of file reached.\n";
    }
    

    return 0;
}
