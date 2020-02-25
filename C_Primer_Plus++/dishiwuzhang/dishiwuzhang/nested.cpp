//
//  nested.cpp
//  dishiwuzhang
//
//  Created by mingyue on 16/1/18.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>

#include <cstring>
#include "queuetp.h"

int main(int argc, const char * argv[]){

    using std::string;
    using std::cin;
    using std::cout;
    
    QueueTP<string>cs(5);
    string temp;
    
    while (!cs.isfull()) {
        cout << "Please enter your name. You will be "
        "served in the order of arrival.\n"
        "name: ";
        getline(cin, temp);
        cs.enqueue(temp);
    }
    cout << "The queue is full. Processing begins!\n";
    while (!cs.isempty()) {
        cs.dequeue(temp);
        cout << "Now processing " << temp << "...\n";
    }

    return 0;
}
