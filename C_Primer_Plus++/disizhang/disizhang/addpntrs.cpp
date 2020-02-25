//
//  addpntrs.cpp
//  disizhang
//
//  Created by mingyue on 15/12/21.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>


int main(int argc, const char *argv[]){
    
    using namespace std;
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};
    
    double * pw = wages;
    short * ps = &stacks[0];
    
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    //cout << "pw[0] = " << pw[0] << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    
    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
    
    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;
    
    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = size of pw pointer\n";
    
        
    
    return 0;
}
