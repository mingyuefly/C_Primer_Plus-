//
//  main.cpp
//  diqizhang
//
//  Created by mingyue on 15/12/24.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

void simple();

int main(int argc, const char * argv[]) {
    
    using namespace std;

    cout << "main() will call the simple() function: \n";
    
    simple();
    
    return 0;
}

void simple(){
    using namespace std;
    cout << "I'm but a simple function.\n";
}
