//
//  forstr1.cpp
//  diwuzhang
//
//  Created by mingyue on 15/12/22.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]){
    
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;
    
    for (int i = word.size() - 1; i >= 0; i--) {
        cout << word[i];
    }
    cout << "\nBye.\n";
    
    return 0;
}
