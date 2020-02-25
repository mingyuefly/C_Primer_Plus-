//
//  topfive.cpp
//  diqizhang
//
//  Created by mingyue on 15/12/24.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);

int main(int argc, const char * argv[]){
    
    string list[SIZE];
    cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << i + 1 << ": ";
        getline(cin, list[i]);
    }
    cout << "Your list: \n";
    display(list, SIZE);
    return 0;
}

void display(const string sa[], int n){
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ": " << sa[i] << endl;
    }
}
