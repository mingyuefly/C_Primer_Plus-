//
//  while.cpp
//  diwuzhang
//
//  Created by mingyue on 15/12/22.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
const int ArSize = 20;

int main(int argc, const char * argv[]){

    using namespace std;
    char name[ArSize];
    
    cout << "Your first name, please: ";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized: \n";
    int i = 0;
    while (name[i] != '\0') {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }
    
    return 0;
}
