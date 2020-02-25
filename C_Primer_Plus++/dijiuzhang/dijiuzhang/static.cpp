//
//  static.cpp
//  dijiuzhang
//
//  Created by mingyue on 15/12/29.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

const int ArSize = 10;

void strcount(const char * str);

int main(int argc, const char * argv[]){
    
    using namespace std;
    char input[ArSize];
    char next;
    
    struct data{
        int a;
        mutable int b;
    };
    
    const data veep = {1,2};
    //veep.a = 3;//not allowed
    veep.b = 4;//allowed
    
    
    cout << "Enter a line: \n";
    cin.get(input, ArSize);
    while (cin) {
        cin.get(next);
        while (next != '\n') {
            cin.get(next);
        }
        strcount(input);
        cout << "Enter next line (empth line to quit): \n";
        cin.get(input, ArSize);
    }
    
    cout << "Bye\n";
    
    return 0;
}

void strcount(const char * str){

    using namespace std;
    static int total = 0;
    int count = 0;
    
    cout << "\"" << str << "\" contains ";
    while (*str++) {
        count++;
    }
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";

}
