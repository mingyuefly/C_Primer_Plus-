//
//  stacktem.cpp
//  dishisizhang
//
//  Created by mingyue on 16/1/14.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"
using std::cin;
using std::cout;

int main(int argc, const char * argv[]){
    
    Stack<std::string>st;
    char ch;
    std::string po;
    cout << "Please enter A to add a purchase order.\n"
    << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && std::toupper(ch) != 'Q')  {
        while (cin.get() != '\n') {
            continue;
        }
        if (!std::isalpha(ch)) {
            cout << '\a';
            continue;
        }
        switch (ch) {
            case 'A':
            case 'a':
                cout << "Enter a PO number to add: ";
                cin >> po;
                if (st.isfull()) {
                    cout << "stack already full\n";
                }else{
                    st.push(po);
                }
                break;
            case 'P':
            case 'p':
                if (st.isempty()) {
                    cout << "stack already empty\n";
                }else{
                    st.pop(po);
                    cout << "PO # " << po << " popped\n";
                    break;
                }
            default:
                break;
        }
        cout << "Please enter A to add a purchase order.\n"
        << "P to process a PQ, or Q to quit.\n";
        
    }
    
    cout << "Bye\n";

    return 0;
}
