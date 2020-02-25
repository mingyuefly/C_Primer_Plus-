//
//  setf.cpp
//  dishiqizhang
//
//  Created by mingyue on 16/2/2.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]){
    
    using std::cout;
    using std::endl;
    using std::ios_base;
    int temperature = 63;
    
    cout << "Today's water temperature: ";
    cout.setf(ios_base::showpoint);
    cout << temperature << endl;
    
    cout << "For our programming friends.that's\n";
    cout << std::hex << temperature << endl;
    cout.setf(ios_base::uppercase);
    cout.setf(ios_base::showbase);
    cout << "or\n";
    cout << temperature << endl;
    cout << "How " << true << "! oops - How ";
    cout.setf(ios_base::boolalpha);
    cout << true << "!\n";

    return 0;
}
