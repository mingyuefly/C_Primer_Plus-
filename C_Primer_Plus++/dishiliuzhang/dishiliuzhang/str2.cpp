//
//  str2.cpp
//  dishiliuzhang
//
//  Created by mingyue on 16/1/28.
//  Copyright © 2016年 RW. All rights reserved.
//

#include <iostream>
#include <string>
int main(int argc, const char * argv[]){
    
    using namespace std;
    string empty;
    string small = "bit";
    string larger = "Elephants are girl's best fried";
    cout << "Sizes: \n";
    cout << "\tempty: " << empty.size() << endl;
    cout << "\tsmall: " << small.size() << endl;
    cout << "\tlarger: " << larger.size() << endl;
    cout << "Capacities: \n";
    cout << "\tempty: " << empty.capacity() << endl;
    cout << "\tsmall: " << small.capacity() << endl;
    cout << "\tlarger: " << larger.capacity() << endl;
    empty.reserve(50);
    cout << "Capacity after empty.reverse(50): "
    << empty.capacity() << endl;


    return 0;
}
