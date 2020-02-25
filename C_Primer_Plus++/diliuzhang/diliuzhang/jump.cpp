//
//  jump.cpp
//  diliuzhang
//
//  Created by mingyue on 15/12/23.
//  Copyright © 2015年 G. All rights reserved.
//

#include <iostream>

const int ArSize = 80;

int main(int argc, const char * argv[]){
    
    using namespace std;
    char line[ArSize];
    int spaces = 0;
    
    cout << "Enter a line of text: \n";
    cin.get(line, ArSize);
    cout << "Complete line: \n" << line << endl;
    cout << "Line through first period: \n";
    for (int i = 0; line[i] != '\0'; i++) {
        cout << line[i];
        if (line[i] == '.') {
            break;
        }
        if (line[i] != ' ') {
            continue;
        }
        spaces++;
    }
    cout << "\n" << spaces << " spaces\n";
    cout << "Done.\n";
    
    return 0;
}
