//
//  instr1.cpp
//  disizhang
//
//  Created by mingyue on 15/12/18.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]){

    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter your name: \n";
    cin >> name;
    cout << "Enter your favorite dessert: \n";
    cin >> dessert;
    cout << "I have some delicous " << dessert;
    cout << " for you. " << name << ".\n";
    
    return 0;
}
