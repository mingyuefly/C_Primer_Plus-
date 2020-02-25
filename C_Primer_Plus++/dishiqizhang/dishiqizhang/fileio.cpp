//
//  fileio.cpp
//  dishiqizhang
//
//  Created by mingyue on 16/2/2.
//  Copyright © 2016年 G. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, const char * argv[]){

    using namespace std;
    string filename;
    
    cout << "Enter name for new file: ";
    cin >> filename;
    
    ofstream font(filename.c_str());
    
    font << "For your eyes only!\n";
    cout << "Enter your secret number: ";
    float secret;
    cin >> secret;
    font << "Your secret number is " << secret << endl;
    font.close();
    
    ifstream fin(filename.c_str());
    cout << "Here are the contents of " << filename << ": \n";
    char ch;
    while (fin.get(ch)) {
        cout << ch;
    }
    cout << "Done\n";
    fin.close();

    return 0;
}
