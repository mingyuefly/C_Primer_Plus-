//
//  forstr2.cpp
//  diwuzhang
//
//  Created by mingyue on 15/12/22.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>
#include <cstring>

int main(int argc, const char * argv[]){
    
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;
    
    char temp;
    unsigned long i,j;
    for (j = 0, i = word.size() - 1; j < i; --i,++j) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << "\nDone\n";
    return 0;
}
