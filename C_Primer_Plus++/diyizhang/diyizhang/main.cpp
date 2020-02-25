//
//  main.cpp
//  diyizhang
//
//  Created by mingyue on 15/12/15.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

void simon(int);

int main(int argc, const char * argv[]) {
    
    using namespace std;
    cout << "Come up and C++ me some time.";
    cout << endl;
    cout << "You won't regret it;" << endl;
    
    int carrots;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more.";
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrots." << endl;
    
    simon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    
    
    return 0;
}

void simon(int n){

    using namespace std;
    cout << "Simon says touch your toes " << n << " times" << endl;
    
}
