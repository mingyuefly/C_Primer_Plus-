//
//  numstr.cpp
//  disizhang
//
//  Created by mingyue on 15/12/18.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]){

    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    cin.get();
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Adress: " << address << endl;
    cout << "Done!\n";
    
    return 0;
}
