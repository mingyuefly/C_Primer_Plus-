//
//  instr3.cpp
//  disizhang
//
//  Created by mingyue on 15/12/18.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

int main(int argv, const char * argc[]){
    
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter your name: \n";
    cin.get(name, ArSize).get();
    cout << "Enter your favorite dessert: \n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you." << name << ".\n";
    
    return 0;
}
